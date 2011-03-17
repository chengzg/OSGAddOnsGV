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
#include "VertexProgramChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VertexProgramChunk_class(){

    { //::OSG::VertexProgramChunk
        typedef bp::class_< OSG::VertexProgramChunk, bp::bases< OSG::VertexProgramChunkBase >, OSG::VertexProgramChunk::ObjRecPtr, boost::noncopyable > VertexProgramChunk_exposer_t;
        VertexProgramChunk_exposer_t VertexProgramChunk_exposer = VertexProgramChunk_exposer_t( "VertexProgramChunk", bp::no_init );
        bp::scope VertexProgramChunk_scope( VertexProgramChunk_exposer );
        { //::OSG::VertexProgramChunk::changed
        
            typedef void ( ::OSG::VertexProgramChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            VertexProgramChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::VertexProgramChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::VertexProgramChunk::dump
        
            typedef void ( ::OSG::VertexProgramChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            VertexProgramChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::VertexProgramChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::VertexProgramChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::VertexProgramChunk::*getClass_function_type )(  ) const;
            
            VertexProgramChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::VertexProgramChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VertexProgramChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            VertexProgramChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::VertexProgramChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::VertexProgramChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            VertexProgramChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::VertexProgramChunk::getStaticClassId ) );
        
        }
        VertexProgramChunk_exposer.staticmethod( "getStaticClass" );
        VertexProgramChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::VertexProgramChunk >::execute();
        bp::implicitly_convertible< OSG::VertexProgramChunk::ObjRecPtr, OSG::VertexProgramChunk* >();
        bp::implicitly_convertible< OSG::VertexProgramChunk::ObjRecPtr, OSG::VertexProgramChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::VertexProgramChunk::ObjRecPtr, OSG::ProgramChunk* >();
        bp::implicitly_convertible< OSG::VertexProgramChunk::ObjRecPtr, OSG::ProgramChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::VertexProgramChunk::ObjRecPtr, OSG::ProgramChunk::ObjCPtr>();
    }

}