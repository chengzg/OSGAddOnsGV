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
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PythonScript.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PythonScript_class(){

    { //::OSG::PythonScript
        typedef bp::class_< OSG::PythonScript, bp::bases< OSG::PythonScriptBase >, OSG::PythonScript::ObjRecPtr, boost::noncopyable > PythonScript_exposer_t;
        PythonScript_exposer_t PythonScript_exposer = PythonScript_exposer_t( "PythonScript", bp::no_init );
        bp::scope PythonScript_scope( PythonScript_exposer );
        { //::OSG::PythonScript::addField
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScript::*addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            
            PythonScript_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::PythonScript::addField )
                , ( bp::arg("uiFieldTypeId"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::PythonScript::addField
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScript::*addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            PythonScript_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::PythonScript::addField )
                , ( bp::arg("szFieldType"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::PythonScript::changed
        
            typedef void ( ::OSG::PythonScript::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PythonScript_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PythonScript::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::PythonScript::dump
        
            typedef void ( ::OSG::PythonScript::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PythonScript_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PythonScript::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PythonScript::frame
        
            typedef void ( ::OSG::PythonScript::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            PythonScript_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::PythonScript::frame )
                , ( bp::arg("timeStamp"), bp::arg("frameCount") ) );
        
        }
        { //::OSG::PythonScript::getInterpreter
        
            typedef ::OSG::PyInterpreter * ( ::OSG::PythonScript::*getInterpreter_function_type )(  ) const;
            
            PythonScript_exposer.def( 
                "getInterpreter"
                , getInterpreter_function_type( &::OSG::PythonScript::getInterpreter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PythonScript::*getType_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScript::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PythonScript::*getType_function_type )(  ) const;
            
            PythonScript_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScript::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::init
        
            typedef bool ( ::OSG::PythonScript::*init_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "init"
                , init_function_type( &::OSG::PythonScript::init ) );
        
        }
        { //::OSG::PythonScript::setScriptChanged
        
            typedef void ( ::OSG::PythonScript::*setScriptChanged_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "setScriptChanged"
                , setScriptChanged_function_type( &::OSG::PythonScript::setScriptChanged ) );
        
        }
        { //::OSG::PythonScript::shutdown
        
            typedef void ( ::OSG::PythonScript::*shutdown_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::PythonScript::shutdown ) );
        
        }
        pyopensg::register_transit< OSG::PythonScript >::execute();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::PythonScript* >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::PythonScript::ObjCPtr >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::Script* >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::Script::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PythonScript::ObjRecPtr, OSG::Script::ObjCPtr>();
    }

}
