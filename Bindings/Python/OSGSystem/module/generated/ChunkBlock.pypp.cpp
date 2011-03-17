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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ChunkBlock.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ChunkBlock_class(){

    { //::OSG::ChunkBlock
        typedef bp::class_< OSG::ChunkBlock, bp::bases< OSG::ChunkBlockBase >, OSG::ChunkBlock::ObjRecPtr, boost::noncopyable > ChunkBlock_exposer_t;
        ChunkBlock_exposer_t ChunkBlock_exposer = ChunkBlock_exposer_t( "ChunkBlock", bp::no_init );
        bp::scope ChunkBlock_scope( ChunkBlock_exposer );
        { //::OSG::ChunkBlock::addChunk
        
            typedef bool ( ::OSG::ChunkBlock::*addChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkBlock_exposer.def( 
                "addChunk"
                , addChunk_function_type( &::OSG::ChunkBlock::addChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        { //::OSG::ChunkBlock::beginChunks
        
            typedef ::OSG::PointerMFieldConstIterator< OSG::StateChunk*, OSG::UnrecordedRefCountPolicy, 0 > ( ::OSG::ChunkBlock::*beginChunks_function_type )(  ) const;
            
            ChunkBlock_exposer.def( 
                "beginChunks"
                , beginChunks_function_type( &::OSG::ChunkBlock::beginChunks ) );
        
        }
        { //::OSG::ChunkBlock::changed
        
            typedef void ( ::OSG::ChunkBlock::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ChunkBlock_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ChunkBlock::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ChunkBlock::clearChunks
        
            typedef void ( ::OSG::ChunkBlock::*clearChunks_function_type )(  ) ;
            
            ChunkBlock_exposer.def( 
                "clearChunks"
                , clearChunks_function_type( &::OSG::ChunkBlock::clearChunks ) );
        
        }
        { //::OSG::ChunkBlock::dump
        
            typedef void ( ::OSG::ChunkBlock::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ChunkBlock_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ChunkBlock::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ChunkBlock::endChunks
        
            typedef ::OSG::PointerMFieldConstIterator< OSG::StateChunk*, OSG::UnrecordedRefCountPolicy, 0 > ( ::OSG::ChunkBlock::*endChunks_function_type )(  ) const;
            
            ChunkBlock_exposer.def( 
                "endChunks"
                , endChunks_function_type( &::OSG::ChunkBlock::endChunks ) );
        
        }
        { //::OSG::ChunkBlock::find
        
            typedef ::OSG::Int32 ( ::OSG::ChunkBlock::*find_function_type )( ::OSG::StateChunk * ) ;
            
            ChunkBlock_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkBlock::find )
                , ( bp::arg("chunk") ) );
        
        }
        { //::OSG::ChunkBlock::find
        
            typedef ::OSG::StateChunk * ( ::OSG::ChunkBlock::*find_function_type )( ::OSG::StateChunkClass const &,::OSG::Int32 ) ;
            
            ChunkBlock_exposer.def( 
                "find"
                , find_function_type( &::OSG::ChunkBlock::find )
                , ( bp::arg("type"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ChunkBlock::subChunk
        
            typedef bool ( ::OSG::ChunkBlock::*subChunk_function_type )( ::OSG::StateChunk *,::OSG::Int32 ) ;
            
            ChunkBlock_exposer.def( 
                "subChunk"
                , subChunk_function_type( &::OSG::ChunkBlock::subChunk )
                , ( bp::arg("chunk"), bp::arg("slot")=(::OSG::Int32)(OSG::State::AutoSlotReplace) ) );
        
        }
        pyopensg::register_transit< OSG::ChunkBlock >::execute();
        bp::implicitly_convertible< OSG::ChunkBlock::ObjRecPtr, OSG::ChunkBlock* >();
        bp::implicitly_convertible< OSG::ChunkBlock::ObjRecPtr, OSG::ChunkBlock::ObjCPtr >();
        bp::implicitly_convertible< OSG::ChunkBlock::ObjRecPtr, OSG::FieldContainer* >();
        bp::implicitly_convertible< OSG::ChunkBlock::ObjRecPtr, OSG::FieldContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ChunkBlock::ObjRecPtr, OSG::FieldContainer::ObjCPtr>();
    }

}