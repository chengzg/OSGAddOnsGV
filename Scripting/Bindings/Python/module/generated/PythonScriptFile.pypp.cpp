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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PythonScriptFile.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct PythonScriptFile_wrapper : OSG::PythonScriptFile, bp::wrapper< OSG::PythonScriptFile > {

    virtual ::OSG::UInt32 addField( ::OSG::UInt32 const uiFieldTypeId, ::OSG::Char8 const * szFieldName ) {
        if( bp::override func_addField = this->get_override( "addField" ) )
            return func_addField( uiFieldTypeId, szFieldName );
        else{
            return this->OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( uiFieldTypeId, szFieldName );
        }
    }
    
    ::OSG::UInt32 default_addField( ::OSG::UInt32 const uiFieldTypeId, ::OSG::Char8 const * szFieldName ) {
        return OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( uiFieldTypeId, szFieldName );
    }

    virtual ::OSG::UInt32 addField( ::OSG::Char8 const * szFieldType, ::OSG::Char8 const * szFieldName ) {
        if( bp::override func_addField = this->get_override( "addField" ) )
            return func_addField( szFieldType, szFieldName );
        else{
            return this->OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( szFieldType, szFieldName );
        }
    }
    
    ::OSG::UInt32 default_addField( ::OSG::Char8 const * szFieldType, ::OSG::Char8 const * szFieldName ) {
        return OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField( szFieldType, szFieldName );
    }

};

void register_PythonScriptFile_class(){

    { //::OSG::PythonScriptFile
        typedef bp::class_< PythonScriptFile_wrapper, bp::bases< OSG::PythonScriptFileBase >, OSG::PythonScriptFile::ObjRecPtr, boost::noncopyable > PythonScriptFile_exposer_t;
        PythonScriptFile_exposer_t PythonScriptFile_exposer = PythonScriptFile_exposer_t( "PythonScriptFile", bp::no_init );
        bp::scope PythonScriptFile_scope( PythonScriptFile_exposer );
        { //::OSG::PythonScriptFile::changed
        
            typedef void ( ::OSG::PythonScriptFile::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PythonScriptFile_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PythonScriptFile::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::PythonScriptFile::dump
        
            typedef void ( ::OSG::PythonScriptFile::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PythonScriptFile_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PythonScriptFile::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptFile exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::FieldDescriptionBase const & ) ;
            
            PythonScriptFile_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField )
                , ( bp::arg("fieldDesc") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptFile exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( PythonScriptFile_wrapper::*default_addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            
            PythonScriptFile_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&PythonScriptFile_wrapper::default_addField)
                , ( bp::arg("uiFieldTypeId"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField
        
            typedef OSG::PythonScriptFile exported_class_t;
            typedef ::OSG::UInt32 ( exported_class_t::*addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            typedef ::OSG::UInt32 ( PythonScriptFile_wrapper::*default_addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            PythonScriptFile_exposer.def( 
                "addField"
                , addField_function_type(&::OSG::DynFieldContainer< OSG::FrameTaskMixin< OSG::ContainerMixinHead< OSG::NodeCoreScriptDesc > > >::addField)
                , default_addField_function_type(&PythonScriptFile_wrapper::default_addField)
                , ( bp::arg("szFieldType"), bp::arg("szFieldName") ) );
        
        }
        pyopensg::register_transit< OSG::PythonScriptFile >::execute();
        bp::implicitly_convertible< OSG::PythonScriptFile::ObjRecPtr, OSG::PythonScriptFile* >();
        bp::implicitly_convertible< OSG::PythonScriptFile::ObjRecPtr, OSG::PythonScriptFile::ObjCPtr >();
        bp::implicitly_convertible< OSG::PythonScriptFile::ObjRecPtr, OSG::PythonScript* >();
        bp::implicitly_convertible< OSG::PythonScriptFile::ObjRecPtr, OSG::PythonScript::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PythonScriptFile::ObjRecPtr, OSG::PythonScript::ObjCPtr>();
    }

}