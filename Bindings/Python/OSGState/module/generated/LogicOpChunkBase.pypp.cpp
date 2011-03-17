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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "LogicOpChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LogicOpChunkBase_class(){

    { //::OSG::LogicOpChunkBase
        typedef bp::class_< OSG::LogicOpChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > LogicOpChunkBase_exposer_t;
        LogicOpChunkBase_exposer_t LogicOpChunkBase_exposer = LogicOpChunkBase_exposer_t( "LogicOpChunkBase", bp::no_init );
        bp::scope LogicOpChunkBase_scope( LogicOpChunkBase_exposer );
        bp::scope().attr("LogicOpFieldId") = (int)OSG::LogicOpChunkBase::LogicOpFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::LogicOpChunkBase::NextFieldId;
        { //::OSG::LogicOpChunkBase::copyFromBin
        
            typedef void ( ::OSG::LogicOpChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LogicOpChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::LogicOpChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LogicOpChunkBase::copyToBin
        
            typedef void ( ::OSG::LogicOpChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LogicOpChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::LogicOpChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LogicOpChunkBase::create
        
            typedef ::OSG::LogicOpChunkTransitPtr ( *create_function_type )(  );
            
            LogicOpChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::LogicOpChunkBase::create ) );
        
        }
        { //::OSG::LogicOpChunkBase::createDependent
        
            typedef ::OSG::LogicOpChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            LogicOpChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::LogicOpChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::LogicOpChunkBase::createLocal
        
            typedef ::OSG::LogicOpChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            LogicOpChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::LogicOpChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::LogicOpChunkBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::LogicOpChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            LogicOpChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::LogicOpChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::LogicOpChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            LogicOpChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::LogicOpChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::LogicOpChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            LogicOpChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::LogicOpChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::LogicOpChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            LogicOpChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::LogicOpChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::LogicOpChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::LogicOpChunkBase::*getContainerSize_function_type )(  ) const;
            
            LogicOpChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::LogicOpChunkBase::getContainerSize ) );
        
        }
        { //::OSG::LogicOpChunkBase::getLogicOp
        
            typedef ::GLenum const & ( ::OSG::LogicOpChunkBase::*getLogicOp_function_type )(  ) const;
            
            LogicOpChunkBase_exposer.def( 
                "getLogicOp"
                , getLogicOp_function_type( &::OSG::LogicOpChunkBase::getLogicOp )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::LogicOpChunkBase::getSFLogicOp
        
            typedef ::OSG::SFGLenum const * ( ::OSG::LogicOpChunkBase::*getSFLogicOp_function_type )(  ) const;
            
            LogicOpChunkBase_exposer.def( 
                "getSFLogicOp"
                , getSFLogicOp_function_type( &::OSG::LogicOpChunkBase::getSFLogicOp )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LogicOpChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::LogicOpChunkBase::*getType_function_type )(  ) ;
            
            LogicOpChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LogicOpChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LogicOpChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::LogicOpChunkBase::*getType_function_type )(  ) const;
            
            LogicOpChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LogicOpChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LogicOpChunkBase::setLogicOp
        
            typedef void ( ::OSG::LogicOpChunkBase::*setLogicOp_function_type )( ::GLenum const & ) ;
            
            LogicOpChunkBase_exposer.def( 
                "setLogicOp"
                , setLogicOp_function_type( &::OSG::LogicOpChunkBase::setLogicOp )
                , ( bp::arg("value") ) );
        
        }
        LogicOpChunkBase_exposer.staticmethod( "create" );
        LogicOpChunkBase_exposer.staticmethod( "createDependent" );
        LogicOpChunkBase_exposer.staticmethod( "createLocal" );
        LogicOpChunkBase_exposer.staticmethod( "getClassGroupId" );
        LogicOpChunkBase_exposer.staticmethod( "getClassType" );
        LogicOpChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}