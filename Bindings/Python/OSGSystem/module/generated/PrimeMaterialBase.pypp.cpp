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
#include "PrimeMaterialBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PrimeMaterialBase_class(){

    { //::OSG::PrimeMaterialBase
        typedef bp::class_< OSG::PrimeMaterialBase, bp::bases< OSG::Material >, boost::noncopyable > PrimeMaterialBase_exposer_t;
        PrimeMaterialBase_exposer_t PrimeMaterialBase_exposer = PrimeMaterialBase_exposer_t( "PrimeMaterialBase", bp::no_init );
        bp::scope PrimeMaterialBase_scope( PrimeMaterialBase_exposer );
        bp::scope().attr("CoreGLChunkLimitFieldId") = (int)OSG::PrimeMaterialBase::CoreGLChunkLimitFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::PrimeMaterialBase::NextFieldId;
        { //::OSG::PrimeMaterialBase::copyFromBin
        
            typedef void ( ::OSG::PrimeMaterialBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PrimeMaterialBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PrimeMaterialBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PrimeMaterialBase::copyToBin
        
            typedef void ( ::OSG::PrimeMaterialBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PrimeMaterialBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PrimeMaterialBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PrimeMaterialBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PrimeMaterialBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PrimeMaterialBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PrimeMaterialBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PrimeMaterialBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PrimeMaterialBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PrimeMaterialBase::getClassGroupId ) );
        
        }
        { //::OSG::PrimeMaterialBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PrimeMaterialBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PrimeMaterialBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PrimeMaterialBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PrimeMaterialBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PrimeMaterialBase::getClassTypeId ) );
        
        }
        { //::OSG::PrimeMaterialBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PrimeMaterialBase::*getContainerSize_function_type )(  ) const;
            
            PrimeMaterialBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PrimeMaterialBase::getContainerSize ) );
        
        }
        { //::OSG::PrimeMaterialBase::getCoreGLChunkLimit
        
            typedef ::OSG::UInt32 ( ::OSG::PrimeMaterialBase::*getCoreGLChunkLimit_function_type )(  ) const;
            
            PrimeMaterialBase_exposer.def( 
                "getCoreGLChunkLimit"
                , getCoreGLChunkLimit_function_type( &::OSG::PrimeMaterialBase::getCoreGLChunkLimit ) );
        
        }
        { //::OSG::PrimeMaterialBase::getSFCoreGLChunkLimit
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::PrimeMaterialBase::*getSFCoreGLChunkLimit_function_type )(  ) const;
            
            PrimeMaterialBase_exposer.def( 
                "getSFCoreGLChunkLimit"
                , getSFCoreGLChunkLimit_function_type( &::OSG::PrimeMaterialBase::getSFCoreGLChunkLimit )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PrimeMaterialBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PrimeMaterialBase::*getType_function_type )(  ) ;
            
            PrimeMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PrimeMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PrimeMaterialBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PrimeMaterialBase::*getType_function_type )(  ) const;
            
            PrimeMaterialBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PrimeMaterialBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PrimeMaterialBase::setCoreGLChunkLimit
        
            typedef void ( ::OSG::PrimeMaterialBase::*setCoreGLChunkLimit_function_type )( ::OSG::UInt32 const ) ;
            
            PrimeMaterialBase_exposer.def( 
                "setCoreGLChunkLimit"
                , setCoreGLChunkLimit_function_type( &::OSG::PrimeMaterialBase::setCoreGLChunkLimit )
                , ( bp::arg("value") ) );
        
        }
        PrimeMaterialBase_exposer.staticmethod( "getClassGroupId" );
        PrimeMaterialBase_exposer.staticmethod( "getClassType" );
        PrimeMaterialBase_exposer.staticmethod( "getClassTypeId" );
    }

}
