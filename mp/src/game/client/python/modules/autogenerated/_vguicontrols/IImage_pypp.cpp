// This file has been generated by Py++.

#include "cbase.h"
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "cbase.h"
#include "vgui_controls/Panel.h"
#include "vgui_controls/AnimationController.h"
#include "vgui_controls/EditablePanel.h"
#include "vgui_controls/AnalogBar.h"
#include "vgui_controls/Image.h"
#include "vgui_controls/TextImage.h"
#include "vgui_controls/ScrollBar.h"
#include "vgui_controls/ScrollBarSlider.h"
#include "vgui_controls/Menu.h"
#include "vgui_controls/MenuButton.h"
#include "vgui_controls/Frame.h"
#include "vgui_controls/TextEntry.h"
#include "vgui_controls/RichText.h"
#include "vgui_controls/Tooltip.h"
#include "vgui/IBorder.h"
#include "vgui_bitmapimage.h"
#include "srcpy_vgui.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "IImage_pypp.hpp"

namespace bp = boost::python;

struct IImage_wrapper : vgui::IImage, bp::wrapper< vgui::IImage > {

    IImage_wrapper()
    : vgui::IImage()
      , bp::wrapper< vgui::IImage >(){
        // null constructor
        
    }

    virtual bool Evict(  ){
        bp::override func_Evict = this->get_override( "Evict" );
        try {
            return func_Evict(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void GetContentSize( int & wide, int & tall ) {
        namespace bpl = boost::python;
        bpl::override func_GetContentSize = this->get_override( "GetContentSize" );
        if( func_GetContentSize.ptr() != Py_None ) {
            bpl::object py_result = bpl::call<bpl::object>( func_GetContentSize.ptr() );
            wide = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "wide" ) );
            tall = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "tall" ) );
        }
        else{
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :GetContentSize");
              boost::python::throw_error_already_set();
        }
    }
    
    static boost::python::tuple default_GetContentSize( ::vgui::IImage & inst ){
        int wide2;
        int tall2;
        if( dynamic_cast< IImage_wrapper * >( boost::addressof( inst ) ) ){
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :GetContentSize");
              boost::python::throw_error_already_set();
        }
        else{
            inst.GetContentSize(wide2, tall2);
        }
        return bp::make_tuple( wide2, tall2 );
    }

    virtual ::vgui::HTexture GetID(  ){
        bp::override func_GetID = this->get_override( "GetID" );
        try {
            return func_GetID(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual int GetNumFrames(  ){
        bp::override func_GetNumFrames = this->get_override( "GetNumFrames" );
        try {
            return func_GetNumFrames(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void GetSize( int & wide, int & tall ) {
        namespace bpl = boost::python;
        bpl::override func_GetSize = this->get_override( "GetSize" );
        if( func_GetSize.ptr() != Py_None ) {
            bpl::object py_result = bpl::call<bpl::object>( func_GetSize.ptr() );
            wide = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "wide" ) );
            tall = boost::python::extract< int >( pyplus_conv::get_out_argument( py_result, "tall" ) );
        }
        else{
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :GetSize");
              boost::python::throw_error_already_set();
        }
    }
    
    static boost::python::tuple default_GetSize( ::vgui::IImage & inst ){
        int wide2;
        int tall2;
        if( dynamic_cast< IImage_wrapper * >( boost::addressof( inst ) ) ){
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :GetSize");
              boost::python::throw_error_already_set();
        }
        else{
            inst.GetSize(wide2, tall2);
        }
        return bp::make_tuple( wide2, tall2 );
    }

    virtual void Paint(  ){
        bp::override func_Paint = this->get_override( "Paint" );
        try {
            func_Paint(  );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void SetColor( ::Color col ){
        bp::override func_SetColor = this->get_override( "SetColor" );
        try {
            func_SetColor( col );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void SetFrame( int nFrame ){
        bp::override func_SetFrame = this->get_override( "SetFrame" );
        try {
            func_SetFrame( nFrame );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void SetPos( int x, int y ){
        bp::override func_SetPos = this->get_override( "SetPos" );
        try {
            func_SetPos( x, y );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void SetRotation( int iRotation ){
        bp::override func_SetRotation = this->get_override( "SetRotation" );
        try {
            func_SetRotation( iRotation );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

    virtual void SetSize( int wide, int tall ){
        bp::override func_SetSize = this->get_override( "SetSize" );
        try {
            func_SetSize( wide, tall );
        } catch(bp::error_already_set &) {
            throw boost::python::error_already_set();
        }
    }

};

void register_IImage_class(){

    bp::class_< IImage_wrapper, boost::noncopyable >( "IImage" )    
        .def( 
            "Evict"
            , bp::pure_virtual( (bool ( ::vgui::IImage::* )(  ) )(&::vgui::IImage::Evict) ) )    
        .def( 
            "GetContentSize"
            , (boost::python::tuple (*)( ::vgui::IImage & ))( &IImage_wrapper::default_GetContentSize )
            , ( bp::arg("inst") ) )    
        .def( 
            "GetID"
            , bp::pure_virtual( (::vgui::HTexture ( ::vgui::IImage::* )(  ) )(&::vgui::IImage::GetID) ) )    
        .def( 
            "GetNumFrames"
            , bp::pure_virtual( (int ( ::vgui::IImage::* )(  ) )(&::vgui::IImage::GetNumFrames) ) )    
        .def( 
            "GetSize"
            , (boost::python::tuple (*)( ::vgui::IImage & ))( &IImage_wrapper::default_GetSize )
            , ( bp::arg("inst") ) )    
        .def( 
            "Paint"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )(  ) )(&::vgui::IImage::Paint) ) )    
        .def( 
            "SetColor"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )( ::Color ) )(&::vgui::IImage::SetColor) )
            , ( bp::arg("col") ) )    
        .def( 
            "SetFrame"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )( int ) )(&::vgui::IImage::SetFrame) )
            , ( bp::arg("nFrame") ) )    
        .def( 
            "SetPos"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )( int,int ) )(&::vgui::IImage::SetPos) )
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "SetRotation"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )( int ) )(&::vgui::IImage::SetRotation) )
            , ( bp::arg("iRotation") ) )    
        .def( 
            "SetSize"
            , bp::pure_virtual( (void ( ::vgui::IImage::* )( int,int ) )(&::vgui::IImage::SetSize) )
            , ( bp::arg("wide"), bp::arg("tall") ) );

}
