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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderProcVariableBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderProcVariableBase_class(){

    { //::OSG::ShaderProcVariableBase
        typedef bp::class_< OSG::ShaderProcVariableBase, bp::bases< OSG::ShaderVariable >, boost::noncopyable > ShaderProcVariableBase_exposer_t;
        ShaderProcVariableBase_exposer_t ShaderProcVariableBase_exposer = ShaderProcVariableBase_exposer_t( "ShaderProcVariableBase", bp::no_init );
        bp::scope ShaderProcVariableBase_scope( ShaderProcVariableBase_exposer );
        bp::scope().attr("DependencyFieldId") = (int)OSG::ShaderProcVariableBase::DependencyFieldId;
        bp::scope().attr("ParentsFieldId") = (int)OSG::ShaderProcVariableBase::ParentsFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ShaderProcVariableBase::NextFieldId;
        { //::OSG::ShaderProcVariableBase::copyFromBin
        
            typedef void ( ::OSG::ShaderProcVariableBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProcVariableBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ShaderProcVariableBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProcVariableBase::copyToBin
        
            typedef void ( ::OSG::ShaderProcVariableBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ShaderProcVariableBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ShaderProcVariableBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ShaderProcVariableBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ShaderProcVariableBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ShaderProcVariableBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ShaderProcVariableBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ShaderProcVariableBase::getClassGroupId ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ShaderProcVariableBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ShaderProcVariableBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ShaderProcVariableBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ShaderProcVariableBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ShaderProcVariableBase::getClassTypeId ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProcVariableBase::*getContainerSize_function_type )(  ) const;
            
            ShaderProcVariableBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ShaderProcVariableBase::getContainerSize ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getDependency
        
            typedef ::OSG::UInt32 ( ::OSG::ShaderProcVariableBase::*getDependency_function_type )(  ) const;
            
            ShaderProcVariableBase_exposer.def( 
                "getDependency"
                , getDependency_function_type( &::OSG::ShaderProcVariableBase::getDependency ) );
        
        }
        { //::OSG::ShaderProcVariableBase::getSFDependency
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::ShaderProcVariableBase::*getSFDependency_function_type )(  ) const;
            
            ShaderProcVariableBase_exposer.def( 
                "getSFDependency"
                , getSFDependency_function_type( &::OSG::ShaderProcVariableBase::getSFDependency )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProcVariableBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ShaderProcVariableBase::*getType_function_type )(  ) ;
            
            ShaderProcVariableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProcVariableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProcVariableBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ShaderProcVariableBase::*getType_function_type )(  ) const;
            
            ShaderProcVariableBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ShaderProcVariableBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ShaderProcVariableBase::setDependency
        
            typedef void ( ::OSG::ShaderProcVariableBase::*setDependency_function_type )( ::OSG::UInt32 const ) ;
            
            ShaderProcVariableBase_exposer.def( 
                "setDependency"
                , setDependency_function_type( &::OSG::ShaderProcVariableBase::setDependency )
                , ( bp::arg("value") ) );
        
        }
        ShaderProcVariableBase_exposer.staticmethod( "getClassGroupId" );
        ShaderProcVariableBase_exposer.staticmethod( "getClassType" );
        ShaderProcVariableBase_exposer.staticmethod( "getClassTypeId" );
    }

}
