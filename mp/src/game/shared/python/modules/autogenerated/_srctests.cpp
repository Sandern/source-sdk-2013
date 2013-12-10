// This file has been generated by Py++.

#include "cbase.h"
#ifdef CLIENT_DLL
#include "cbase.h"

#include "srcpy_tests.h"

#include "tier0/valve_minmax_off.h"

#include "srcpy.h"

#include "tier0/valve_minmax_on.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_srctests){
    bp::docstring_options doc_options( true, true, false );

    { //::SrcPyTest_EntityArg
    
        typedef void ( *SrcPyTest_EntityArg_function_type )( ::C_BaseEntity * );
        
        bp::def( 
            "SrcPyTest_EntityArg"
            , SrcPyTest_EntityArg_function_type( &::SrcPyTest_EntityArg )
            , ( bp::arg("pEntity") ) );
    
    }
}
#else
#include "cbase.h"

#include "srcpy_tests.h"

#include "tier0/valve_minmax_off.h"

#include "srcpy.h"

#include "tier0/valve_minmax_on.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_srctests){
    bp::docstring_options doc_options( true, true, false );

    { //::SrcPyTest_EntityArg
    
        typedef void ( *SrcPyTest_EntityArg_function_type )( ::CBaseEntity * );
        
        bp::def( 
            "SrcPyTest_EntityArg"
            , SrcPyTest_EntityArg_function_type( &::SrcPyTest_EntityArg )
            , ( bp::arg("pEntity") ) );
    
    }
}
#endif

