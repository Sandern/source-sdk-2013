import sys
import os
import re
import operator
import functools

from . import genvpc
from . import vpcutil


def RegisterModules(settings):
    """ Finds and creates the lists of modules to be parsed. """
    module_names = set()
    registered_modules = []
    for am in settings.modules:
        mod = __import__(am[0])
        module_inst = getattr(mod, am[1])()
        module_inst.settings = settings
        assert module_inst.module_name not in module_names, \
            'Cannot register two modules with same name "%s"!' % module_inst.module_name
        registered_modules.append(module_inst)
        module_names.add(module_inst.module_name)
    return registered_modules

#
# Append code generation
#
appendtemplate = '''//=============================================================================//
// This file is automatically generated. CHANGES WILL BE LOST.
//=============================================================================//
#include "cbase.h"
#include "srcpy.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

using namespace boost::python;

// The init method is in one of the generated files declared
#ifdef _WIN32
%(win32decls)s
#else
%(unixdecls)s
#endif // _WIN32

// The append function
void Append%(AppendFunctionName)sModules()
{
%(appendlist)s
}
'''


def GenerateAppendCode(module_names, dll_name):
    win32decls = []
    unixdecls = []
    appendlist = []
    for name in module_names:
        # PYINIT macro either evaluates to PyInit_ (py3) or init_ (py2)
        win32decls.append('extern "C" __declspec(dllexport) PYINIT_DECL(%s)();' % name)
        unixdecls.append('extern "C" PYINIT_DECL(%s)();' % name)
        appendlist.append('\tAPPEND_MODULE(%s)' % name)
        
    return appendtemplate % {
        'win32decls': '\n'.join(win32decls),
        'unixdecls': '\n'.join(unixdecls),
        'appendlist': '\n'.join(appendlist),
        'AppendFunctionName': dll_name[0].capitalize() + dll_name[1:len(dll_name)],
    }


def GenerateAppendFile(path, module_names, dll_name):
    """ Writes the append file, which registers all modules in Python."""
    filename = 'src_append_%s.cpp' % dll_name
    path = os.path.join(path, filename)
    
    appendcode = GenerateAppendCode(module_names, dll_name)
    if os.path.exists(path):
        try:
            with open(path, 'r') as fp:
                old_append_code = fp.read()
            if old_append_code == appendcode:
                return path
        except IOError as e:
            print('Could not read "%s": %s' % (path, e))
    
    print('Writing append file "%s" (changed)' % path)
    with open(path, 'w+') as fp:
        fp.write(appendcode)
    return path


def GetModuleFilenames(rm, is_client=False):
    """ Returns the list of generated binding module cpp/hpp file names. """
    rm.isclient = is_client
    rm.isserver = not is_client
    
    os.chdir(rm.vpcdir)
    
    path = os.path.relpath(rm.path, rm.srcdir)
    if not rm.split:
        return [os.path.join(path, '%s.cpp' % rm.module_name)]
    else:
        files = os.listdir(os.path.join(rm.path, rm.module_name))
        files = filter(lambda f: f.endswith('.cpp') or f.endswith('.hpp'), files)
        return map(lambda f: os.path.join(path, rm.module_name, f), files)


def ParseModules(settings, specificmodule=None, appendfileonly=False):
    """ Main parse function.
    
        Args:
            settings (module): Module containing settings for this configuration.
            specificmodule (str): Parse a single specific module.
            appendfileonly (bool): Only generate the append file.
    """
    # Keep a list of the append names
    client_modules = []
    server_modules = []
    shared_modules = []
    
    # Keep a list of the filenames
    client_file_names = []
    server_file_names = []
    shared_file_names = []

    # Add search paths and create list of modules to be parsed/exposed
    src_path = settings.srcpath
    for path in settings.searchpaths:
        sys.path.append(os.path.join(src_path, path))
    
    module_instances = RegisterModules(settings)
    
    # Parse vpc files
    macros = {
        'GAMENAME': 'pysource',
        'OUTDLLEXT': '.so',
        '_DLL_EXT': '.so',
        'PLATFORM': 'POSIX=1',
        
        # Conditions
        'POSIX': '',
        'LINUX': '',
        'LINUXALL': '',
        # Operate in Source SDK context (TODO: parse from default.vgc?)
        'SOURCESDK': '',
    }
    
    vpcserverpath = os.path.abspath(settings.vpcserverpath)
    vpcclientpath = os.path.abspath(settings.vpcclientpath)
    
    srcpyppdir = os.getcwd()
    servervpcdir = os.path.dirname(vpcserverpath)
    clientvpcdir = os.path.dirname(vpcclientpath)
    
    os.chdir(servervpcdir)
    servervpc = vpcutil.ParseVPC(vpcserverpath, macros=dict(macros))
    vpcutil.ApplyMacrosToNodes(servervpc, servervpc.macros)
    serverincludes = vpcutil.NormIncludeDirectories(servervpc['$Configuration']['$Compiler']['$AdditionalIncludeDirectories'].nodevalue)
    serverincludes = list(filter(os.path.exists, re.findall('[^;,]+', serverincludes)))
    serversymbols = servervpc['$Configuration']['$Compiler']['$PreprocessorDefinitions'].nodevalue
    serversymbols = list(filter(bool, serversymbols.split(';')))
    
    os.chdir(clientvpcdir)
    clientvpc = vpcutil.ParseVPC(vpcclientpath, macros=dict(macros))
    vpcutil.ApplyMacrosToNodes(clientvpc, clientvpc.macros)
    clientincludes = vpcutil.NormIncludeDirectories(servervpc['$Configuration']['$Compiler']['$AdditionalIncludeDirectories'].nodevalue)
    clientincludes = list(filter(os.path.exists, re.findall('[^;,]*', clientincludes)))
    clientsymbols = clientvpc['$Configuration']['$Compiler']['$PreprocessorDefinitions'].nodevalue
    clientsymbols = list(filter(bool, clientsymbols.split(';')))
    
    os.chdir(srcpyppdir)
    
    for rm in module_instances:
        assert rm.module_name, 'Modules must have a valid name'
        
        rm.servervpcdir = servervpcdir
        rm.clientvpcdir = clientvpcdir
        rm.serverincludes = serverincludes
        rm.clientincludes = clientincludes
        rm.serversymbols = serversymbols
        rm.clientsymbols = clientsymbols
        rm.serversrcdir = servervpc.macros['SRCDIR']
        rm.clientsrcdir = clientvpc.macros['SRCDIR']

        # Check if we should parse this module
        if not appendfileonly and (not specificmodule or specificmodule == rm.module_name):
            # Generate binding code
            print('Generating %s...' % rm.module_name)
            rs = rm.Run()
    
        # Build module list for append code
        if rm.module_type == 'client':
            client_modules.append(rm.module_name)
            client_file_names.extend(GetModuleFilenames(rm))
        elif rm.module_type == 'server':
            server_modules.append(rm.module_name)
            server_file_names.extend(GetModuleFilenames(rm))
        else:
            shared_modules.append(rm.module_name)
            if rm.split:
                client_file_names.extend(GetModuleFilenames(rm, is_client=True))
                server_file_names.extend(GetModuleFilenames(rm, is_client=False))
            else:
                shared_file_names.extend(GetModuleFilenames(rm))

    # Required files to be included in vpc files
    required_file_paths = functools.reduce(operator.add, map(operator.attrgetter('required_files'), module_instances))

    # Change back to srcpypp directory
    os.chdir(srcpyppdir)

    # Generate new append files if needed (add modules to Python on initialization)
    srcpath = settings.srcpath
    client_append_file = GenerateAppendFile(os.path.join(srcpath, settings.client_path), client_modules, 'client')
    server_append_file = GenerateAppendFile(os.path.join(srcpath, settings.server_path), server_modules, 'server')
    shared_append_file = GenerateAppendFile(os.path.join(srcpath, settings.shared_path), shared_modules, 'shared')
    
    # Add append files for autoupdatevxproj setting if specified
    if client_file_names:
        client_file_names.append(client_append_file.split(rm.settings.srcpath)[1][1:])
    if server_file_names:
        server_file_names.append(server_append_file.split(rm.settings.srcpath)[1][1:])
    if shared_file_names:
        shared_file_names.append(shared_append_file.split(rm.settings.srcpath)[1][1:])
    
    # Generate VPC file with autogenerated file includes
    if hasattr(settings, 'vpcserverautopath'):
        genvpc.GenerateVPCs(settings, False, shared_file_names + server_file_names, required_file_paths, settings.vpcserverautopath)
    if hasattr(settings, 'vpcclientautopath'):
        genvpc.GenerateVPCs(settings, True, shared_file_names + client_file_names, required_file_paths, settings.vpcclientautopath)
