// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif

#include "boost/python.hpp"
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "NavigationManager.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct NavigationManager_wrapper : OSG::NavigationManager, bp::wrapper< OSG::NavigationManager > {

    NavigationManager_wrapper( )
    : OSG::NavigationManager( )
      , bp::wrapper< OSG::NavigationManager >(){
        // null constructor
    
    }

    virtual ::OSG::Navigator * getNavigator(  ) {
        if( bp::override func_getNavigator = this->get_override( "getNavigator" ) )
            return func_getNavigator(  );
        else{
            return this->OSG::NavigationManager::getNavigator(  );
        }
    }
    
    ::OSG::Navigator * default_getNavigator(  ) {
        return OSG::NavigationManager::getNavigator( );
    }

    virtual ::OSG::Window * getWindow(  ) {
        if( bp::override func_getWindow = this->get_override( "getWindow" ) )
            return func_getWindow(  );
        else{
            return this->OSG::NavigationManager::getWindow(  );
        }
    }
    
    ::OSG::Window * default_getWindow(  ) {
        return OSG::NavigationManager::getWindow( );
    }

    virtual void idle(  ) {
        if( bp::override func_idle = this->get_override( "idle" ) )
            func_idle(  );
        else{
            this->OSG::NavigationManager::idle(  );
        }
    }
    
    void default_idle(  ) {
        OSG::NavigationManager::idle( );
    }

    virtual void key( ::OSG::UChar8 key, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_key = this->get_override( "key" ) )
            func_key( key, x, y );
        else{
            this->OSG::NavigationManager::key( key, x, y );
        }
    }
    
    void default_key( ::OSG::UChar8 key, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::NavigationManager::key( key, x, y );
    }

    virtual void mouseButtonPress( ::OSG::UInt16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_mouseButtonPress = this->get_override( "mouseButtonPress" ) )
            func_mouseButtonPress( button, x, y );
        else{
            this->OSG::NavigationManager::mouseButtonPress( button, x, y );
        }
    }
    
    void default_mouseButtonPress( ::OSG::UInt16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::NavigationManager::mouseButtonPress( button, x, y );
    }

    virtual void mouseButtonRelease( ::OSG::UInt16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_mouseButtonRelease = this->get_override( "mouseButtonRelease" ) )
            func_mouseButtonRelease( button, x, y );
        else{
            this->OSG::NavigationManager::mouseButtonRelease( button, x, y );
        }
    }
    
    void default_mouseButtonRelease( ::OSG::UInt16 button, ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::NavigationManager::mouseButtonRelease( button, x, y );
    }

    virtual void mouseMove( ::OSG::Int16 x, ::OSG::Int16 y ) {
        if( bp::override func_mouseMove = this->get_override( "mouseMove" ) )
            func_mouseMove( x, y );
        else{
            this->OSG::NavigationManager::mouseMove( x, y );
        }
    }
    
    void default_mouseMove( ::OSG::Int16 x, ::OSG::Int16 y ) {
        OSG::NavigationManager::mouseMove( x, y );
    }

    virtual void redraw(  ) {
        if( bp::override func_redraw = this->get_override( "redraw" ) )
            func_redraw(  );
        else{
            this->OSG::NavigationManager::redraw(  );
        }
    }
    
    void default_redraw(  ) {
        OSG::NavigationManager::redraw( );
    }

    virtual void resize( ::OSG::UInt16 width, ::OSG::UInt16 height ) {
        if( bp::override func_resize = this->get_override( "resize" ) )
            func_resize( width, height );
        else{
            this->OSG::NavigationManager::resize( width, height );
        }
    }
    
    void default_resize( ::OSG::UInt16 width, ::OSG::UInt16 height ) {
        OSG::NavigationManager::resize( width, height );
    }

    virtual void setBeacon( ::OSG::Node * const newBeacon ) {
        if( bp::override func_setBeacon = this->get_override( "setBeacon" ) )
            func_setBeacon( newBeacon );
        else{
            this->OSG::NavigationManager::setBeacon( newBeacon );
        }
    }
    
    void default_setBeacon( ::OSG::Node * const newBeacon ) {
        OSG::NavigationManager::setBeacon( newBeacon );
    }

    virtual void setWindow( ::OSG::Window * win ) {
        if( bp::override func_setWindow = this->get_override( "setWindow" ) )
            func_setWindow( boost::python::ptr(win) );
        else{
            this->OSG::NavigationManager::setWindow( boost::python::ptr(win) );
        }
    }
    
    void default_setWindow( ::OSG::Window * win ) {
        OSG::NavigationManager::setWindow( boost::python::ptr(win) );
    }

    virtual void update(  ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update(  );
        else{
            this->OSG::NavigationManager::update(  );
        }
    }
    
    void default_update(  ) {
        OSG::NavigationManager::update( );
    }

};

void register_NavigationManager_class(){

    { //::OSG::NavigationManager
        typedef bp::class_< NavigationManager_wrapper, boost::noncopyable > NavigationManager_exposer_t;
        NavigationManager_exposer_t NavigationManager_exposer = NavigationManager_exposer_t( "NavigationManager", bp::init< >() );
        bp::scope NavigationManager_scope( NavigationManager_exposer );
        bp::scope().attr("MouseLeft") = (int)OSG::NavigationManager::MouseLeft;
        bp::scope().attr("MouseMiddle") = (int)OSG::NavigationManager::MouseMiddle;
        bp::scope().attr("MouseRight") = (int)OSG::NavigationManager::MouseRight;
        bp::scope().attr("MouseUp") = (int)OSG::NavigationManager::MouseUp;
        bp::scope().attr("MouseDown") = (int)OSG::NavigationManager::MouseDown;
        bp::scope().attr("NoButton") = (int)OSG::NavigationManager::NoButton;
        { //::OSG::NavigationManager::create
        
            typedef ::OSG::NavigationManager * ( ::OSG::NavigationManager::*create_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "create"
                , create_function_type( &::OSG::NavigationManager::create )
                , bp::return_value_policy< bp::manage_new_object >() );
        
        }
        { //::OSG::NavigationManager::getNavigator
        
            typedef ::OSG::Navigator * ( ::OSG::NavigationManager::*getNavigator_function_type )(  ) ;
            typedef ::OSG::Navigator * ( NavigationManager_wrapper::*default_getNavigator_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "getNavigator"
                , getNavigator_function_type(&::OSG::NavigationManager::getNavigator)
                , default_getNavigator_function_type(&NavigationManager_wrapper::default_getNavigator)
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::NavigationManager::getWindow
        
            typedef ::OSG::Window * ( ::OSG::NavigationManager::*getWindow_function_type )(  ) ;
            typedef ::OSG::Window * ( NavigationManager_wrapper::*default_getWindow_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "getWindow"
                , getWindow_function_type(&::OSG::NavigationManager::getWindow)
                , default_getWindow_function_type(&NavigationManager_wrapper::default_getWindow)
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::NavigationManager::idle
        
            typedef void ( ::OSG::NavigationManager::*idle_function_type )(  ) ;
            typedef void ( NavigationManager_wrapper::*default_idle_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "idle"
                , idle_function_type(&::OSG::NavigationManager::idle)
                , default_idle_function_type(&NavigationManager_wrapper::default_idle) );
        
        }
        { //::OSG::NavigationManager::key
        
            typedef void ( ::OSG::NavigationManager::*key_function_type )( ::OSG::UChar8,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( NavigationManager_wrapper::*default_key_function_type )( ::OSG::UChar8,::OSG::Int16,::OSG::Int16 ) ;
            
            NavigationManager_exposer.def( 
                "key"
                , key_function_type(&::OSG::NavigationManager::key)
                , default_key_function_type(&NavigationManager_wrapper::default_key)
                , ( bp::arg("key"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::NavigationManager::mouseButtonPress
        
            typedef void ( ::OSG::NavigationManager::*mouseButtonPress_function_type )( ::OSG::UInt16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( NavigationManager_wrapper::*default_mouseButtonPress_function_type )( ::OSG::UInt16,::OSG::Int16,::OSG::Int16 ) ;
            
            NavigationManager_exposer.def( 
                "mouseButtonPress"
                , mouseButtonPress_function_type(&::OSG::NavigationManager::mouseButtonPress)
                , default_mouseButtonPress_function_type(&NavigationManager_wrapper::default_mouseButtonPress)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::NavigationManager::mouseButtonRelease
        
            typedef void ( ::OSG::NavigationManager::*mouseButtonRelease_function_type )( ::OSG::UInt16,::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( NavigationManager_wrapper::*default_mouseButtonRelease_function_type )( ::OSG::UInt16,::OSG::Int16,::OSG::Int16 ) ;
            
            NavigationManager_exposer.def( 
                "mouseButtonRelease"
                , mouseButtonRelease_function_type(&::OSG::NavigationManager::mouseButtonRelease)
                , default_mouseButtonRelease_function_type(&NavigationManager_wrapper::default_mouseButtonRelease)
                , ( bp::arg("button"), bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::NavigationManager::mouseMove
        
            typedef void ( ::OSG::NavigationManager::*mouseMove_function_type )( ::OSG::Int16,::OSG::Int16 ) ;
            typedef void ( NavigationManager_wrapper::*default_mouseMove_function_type )( ::OSG::Int16,::OSG::Int16 ) ;
            
            NavigationManager_exposer.def( 
                "mouseMove"
                , mouseMove_function_type(&::OSG::NavigationManager::mouseMove)
                , default_mouseMove_function_type(&NavigationManager_wrapper::default_mouseMove)
                , ( bp::arg("x"), bp::arg("y") ) );
        
        }
        { //::OSG::NavigationManager::redraw
        
            typedef void ( ::OSG::NavigationManager::*redraw_function_type )(  ) ;
            typedef void ( NavigationManager_wrapper::*default_redraw_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "redraw"
                , redraw_function_type(&::OSG::NavigationManager::redraw)
                , default_redraw_function_type(&NavigationManager_wrapper::default_redraw) );
        
        }
        { //::OSG::NavigationManager::resize
        
            typedef void ( ::OSG::NavigationManager::*resize_function_type )( ::OSG::UInt16,::OSG::UInt16 ) ;
            typedef void ( NavigationManager_wrapper::*default_resize_function_type )( ::OSG::UInt16,::OSG::UInt16 ) ;
            
            NavigationManager_exposer.def( 
                "resize"
                , resize_function_type(&::OSG::NavigationManager::resize)
                , default_resize_function_type(&NavigationManager_wrapper::default_resize)
                , ( bp::arg("width"), bp::arg("height") ) );
        
        }
        { //::OSG::NavigationManager::setBeacon
        
            typedef void ( ::OSG::NavigationManager::*setBeacon_function_type )( ::OSG::Node * const ) ;
            typedef void ( NavigationManager_wrapper::*default_setBeacon_function_type )( ::OSG::Node * const ) ;
            
            NavigationManager_exposer.def( 
                "setBeacon"
                , setBeacon_function_type(&::OSG::NavigationManager::setBeacon)
                , default_setBeacon_function_type(&NavigationManager_wrapper::default_setBeacon)
                , ( bp::arg("newBeacon") ) );
        
        }
        { //::OSG::NavigationManager::setClickCenter
        
            typedef bool ( ::OSG::NavigationManager::*setClickCenter_function_type )( bool ) ;
            
            NavigationManager_exposer.def( 
                "setClickCenter"
                , setClickCenter_function_type( &::OSG::NavigationManager::setClickCenter )
                , ( bp::arg("mode") ) );
        
        }
        { //::OSG::NavigationManager::setNavigationMode
        
            typedef void ( ::OSG::NavigationManager::*setNavigationMode_function_type )( ::OSG::NavigatorBase::Mode ) ;
            
            NavigationManager_exposer.def( 
                "setNavigationMode"
                , setNavigationMode_function_type( &::OSG::NavigationManager::setNavigationMode )
                , ( bp::arg("new_mode") ) );
        
        }
        { //::OSG::NavigationManager::setWindow
        
            typedef void ( ::OSG::NavigationManager::*setWindow_function_type )( ::OSG::Window * ) ;
            typedef void ( NavigationManager_wrapper::*default_setWindow_function_type )( ::OSG::Window * ) ;
            
            NavigationManager_exposer.def( 
                "setWindow"
                , setWindow_function_type(&::OSG::NavigationManager::setWindow)
                , default_setWindow_function_type(&NavigationManager_wrapper::default_setWindow)
                , ( bp::arg("win") ) );
        
        }
        { //::OSG::NavigationManager::update
        
            typedef void ( ::OSG::NavigationManager::*update_function_type )(  ) ;
            typedef void ( NavigationManager_wrapper::*default_update_function_type )(  ) ;
            
            NavigationManager_exposer.def( 
                "update"
                , update_function_type(&::OSG::NavigationManager::update)
                , default_update_function_type(&NavigationManager_wrapper::default_update) );
        
        }
    }

}