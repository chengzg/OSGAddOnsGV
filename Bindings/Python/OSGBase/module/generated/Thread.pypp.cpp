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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Thread.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct Thread_wrapper : OSG::Thread, bp::wrapper< OSG::Thread > {

    void addRef(  ){
        OSG::MemoryObject::addRef(  );
    }

    void addReferenceUnrecorded(  ){
        OSG::MemoryObject::addReferenceUnrecorded(  );
    }

    ::OSG::Int32 getRefCount(  ){
        return OSG::MemoryObject::getRefCount(  );
    }

    void subRef(  ){
        OSG::MemoryObject::subRef(  );
    }

    void subReferenceUnrecorded(  ){
        OSG::MemoryObject::subReferenceUnrecorded(  );
    }

};

void register_Thread_class(){

    { //::OSG::Thread
        typedef bp::class_< Thread_wrapper, OSG::Thread::ObjRefPtr, boost::noncopyable > Thread_exposer_t;
        Thread_exposer_t Thread_exposer = Thread_exposer_t( "Thread", bp::no_init );
        bp::scope Thread_scope( Thread_exposer );
        { //::OSG::Thread::find
        
            typedef ::OSG::Thread * ( *find_function_type )( ::OSG::Char8 const * );
            
            Thread_exposer.def( 
                "find"
                , find_function_type( &::OSG::Thread::find )
                , ( bp::arg("szName") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::Thread::get
        
            typedef ::OSG::TransitPtr< OSG::Thread > ( *get_function_type )( ::OSG::Char8 const *,bool );
            
            Thread_exposer.def( 
                "get"
                , get_function_type( &::OSG::Thread::get )
                , ( bp::arg("szName"), bp::arg("bGlobal") ) );
        
        }
        { //::OSG::Thread::getCurrent
        
            typedef ::OSG::ThreadBase * ( *getCurrent_function_type )(  );
            
            Thread_exposer.def( 
                "getCurrent"
                , getCurrent_function_type( &::OSG::Thread::getCurrent )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Thread::getCurrentAspect
        
            typedef ::OSG::UInt32 ( *getCurrentAspect_function_type )(  );
            
            Thread_exposer.def( 
                "getCurrentAspect"
                , getCurrentAspect_function_type( &::OSG::Thread::getCurrentAspect ) );
        
        }
        { //::OSG::Thread::getCurrentChangeList
        
            typedef ::OSG::ChangeList * ( *getCurrentChangeList_function_type )(  );
            
            Thread_exposer.def( 
                "getCurrentChangeList"
                , getCurrentChangeList_function_type( &::OSG::Thread::getCurrentChangeList )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::Thread::getCurrentLocalFlags
        
            typedef ::OSG::BitVector ( *getCurrentLocalFlags_function_type )(  );
            
            Thread_exposer.def( 
                "getCurrentLocalFlags"
                , getCurrentLocalFlags_function_type( &::OSG::Thread::getCurrentLocalFlags ) );
        
        }
        { //::OSG::Thread::getCurrentNamespaceMask
        
            typedef ::OSG::BitVector ( *getCurrentNamespaceMask_function_type )(  );
            
            Thread_exposer.def( 
                "getCurrentNamespaceMask"
                , getCurrentNamespaceMask_function_type( &::OSG::Thread::getCurrentNamespaceMask ) );
        
        }
        { //::OSG::Thread::resetCurrentLocalFlags
        
            typedef void ( *resetCurrentLocalFlags_function_type )(  );
            
            Thread_exposer.def( 
                "resetCurrentLocalFlags"
                , resetCurrentLocalFlags_function_type( &::OSG::Thread::resetCurrentLocalFlags ) );
        
        }
        { //::OSG::Thread::run
        
            typedef void ( ::OSG::Thread::*run_function_type )( ::OSG::UInt32 ) ;
            
            Thread_exposer.def( 
                "run"
                , run_function_type( &::OSG::Thread::run )
                , ( bp::arg("uiAspectId") ) );
        
        }
        { //::OSG::Thread::setAspectTo
        
            typedef void ( *setAspectTo_function_type )( ::OSG::UInt32 );
            
            Thread_exposer.def( 
                "setAspectTo"
                , setAspectTo_function_type( &::OSG::Thread::setAspectTo )
                , ( bp::arg("uiNewAspect") ) );
        
        }
        { //::OSG::Thread::setChangelistTo
        
            typedef void ( *setChangelistTo_function_type )( ::OSG::ChangeList * );
            
            Thread_exposer.def( 
                "setChangelistTo"
                , setChangelistTo_function_type( &::OSG::Thread::setChangelistTo )
                , ( bp::arg("pNewList") ) );
        
        }
        { //::OSG::Thread::setCurrentLocalFlags
        
            typedef void ( *setCurrentLocalFlags_function_type )( ::OSG::BitVector );
            
            Thread_exposer.def( 
                "setCurrentLocalFlags"
                , setCurrentLocalFlags_function_type( &::OSG::Thread::setCurrentLocalFlags )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::Thread::setCurrentNamespaceMask
        
            typedef void ( *setCurrentNamespaceMask_function_type )( ::OSG::BitVector );
            
            Thread_exposer.def( 
                "setCurrentNamespaceMask"
                , setCurrentNamespaceMask_function_type( &::OSG::Thread::setCurrentNamespaceMask )
                , ( bp::arg("bMask") ) );
        
        }
        { //::OSG::MemoryObject::addRef
        
            typedef void ( Thread_wrapper::*addRef_function_type )(  ) ;
            
            Thread_exposer.def( 
                "addRef"
                , addRef_function_type( &Thread_wrapper::addRef ) );
        
        }
        { //::OSG::MemoryObject::addReferenceUnrecorded
        
            typedef void ( Thread_wrapper::*addReferenceUnrecorded_function_type )(  ) ;
            
            Thread_exposer.def( 
                "addReferenceUnrecorded"
                , addReferenceUnrecorded_function_type( &Thread_wrapper::addReferenceUnrecorded ) );
        
        }
        { //::OSG::MemoryObject::getRefCount
        
            typedef ::OSG::Int32 ( Thread_wrapper::*getRefCount_function_type )(  ) ;
            
            Thread_exposer.def( 
                "getRefCount"
                , getRefCount_function_type( &Thread_wrapper::getRefCount ) );
        
        }
        { //::OSG::MemoryObject::subRef
        
            typedef void ( Thread_wrapper::*subRef_function_type )(  ) ;
            
            Thread_exposer.def( 
                "subRef"
                , subRef_function_type( &Thread_wrapper::subRef ) );
        
        }
        { //::OSG::MemoryObject::subReferenceUnrecorded
        
            typedef void ( Thread_wrapper::*subReferenceUnrecorded_function_type )(  ) ;
            
            Thread_exposer.def( 
                "subReferenceUnrecorded"
                , subReferenceUnrecorded_function_type( &Thread_wrapper::subReferenceUnrecorded ) );
        
        }
        Thread_exposer.staticmethod( "find" );
        Thread_exposer.staticmethod( "get" );
        Thread_exposer.staticmethod( "getCurrent" );
        Thread_exposer.staticmethod( "getCurrentAspect" );
        Thread_exposer.staticmethod( "getCurrentChangeList" );
        Thread_exposer.staticmethod( "getCurrentLocalFlags" );
        Thread_exposer.staticmethod( "getCurrentNamespaceMask" );
        Thread_exposer.staticmethod( "resetCurrentLocalFlags" );
        Thread_exposer.staticmethod( "setAspectTo" );
        Thread_exposer.staticmethod( "setChangelistTo" );
        Thread_exposer.staticmethod( "setCurrentLocalFlags" );
        Thread_exposer.staticmethod( "setCurrentNamespaceMask" );
        pyopensg::register_transit<OSG::Thread, OSG::Thread::ObjRefPtr>::execute();
        bp::implicitly_convertible<OSG::Thread::ObjRefPtr, OSG::Thread*>();
    }

}