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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PointLight.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PointLight_class(){

    { //::OSG::PointLight
        typedef bp::class_< OSG::PointLight, bp::bases< OSG::PointLightBase >, OSG::PointLight::ObjRecPtr, boost::noncopyable > PointLight_exposer_t;
        PointLight_exposer_t PointLight_exposer = PointLight_exposer_t( "PointLight", bp::no_init );
        bp::scope PointLight_scope( PointLight_exposer );
        { //::OSG::PointLight::callLightEngineEnter
        
            typedef void ( ::OSG::PointLight::*callLightEngineEnter_function_type )( ::OSG::RenderAction * ) ;
            
            PointLight_exposer.def( 
                "callLightEngineEnter"
                , callLightEngineEnter_function_type( &::OSG::PointLight::callLightEngineEnter )
                , ( bp::arg("ract") ) );
        
        }
        { //::OSG::PointLight::callLightEngineLeave
        
            typedef void ( ::OSG::PointLight::*callLightEngineLeave_function_type )( ::OSG::RenderAction * ) ;
            
            PointLight_exposer.def( 
                "callLightEngineLeave"
                , callLightEngineLeave_function_type( &::OSG::PointLight::callLightEngineLeave )
                , ( bp::arg("ract") ) );
        
        }
        { //::OSG::PointLight::changed
        
            typedef void ( ::OSG::PointLight::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PointLight_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PointLight::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::PointLight::dump
        
            typedef void ( ::OSG::PointLight::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PointLight_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PointLight::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PointLight::makeChunk
        
            typedef void ( ::OSG::PointLight::*makeChunk_function_type )(  ) ;
            
            PointLight_exposer.def( 
                "makeChunk"
                , makeChunk_function_type( &::OSG::PointLight::makeChunk ) );
        
        }
        { //::OSG::PointLight::setAttenuation
        
            typedef void ( ::OSG::PointLight::*setAttenuation_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            PointLight_exposer.def( 
                "setAttenuation"
                , setAttenuation_function_type( &::OSG::PointLight::setAttenuation )
                , ( bp::arg("rConstant"), bp::arg("rLinear"), bp::arg("rQuadratic") ) );
        
        }
        { //::OSG::PointLight::setPosition
        
            typedef void ( ::OSG::PointLight::*setPosition_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            PointLight_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::OSG::PointLight::setPosition )
                , ( bp::arg("rX"), bp::arg("rY"), bp::arg("rZ") ) );
        
        }
        { //::OSG::PointLight::setPosition
        
            typedef void ( ::OSG::PointLight::*setPosition_function_type )( ::OSG::Pnt3f const & ) ;
            
            PointLight_exposer.def( 
                "setPosition"
                , setPosition_function_type( &::OSG::PointLight::setPosition )
                , ( bp::arg("pos") ) );
        
        }
        PointLight_exposer.def_readonly( "statNPointLights", OSG::PointLight::statNPointLights );
        pyopensg::register_transit< OSG::PointLight >::execute();
        bp::implicitly_convertible< OSG::PointLight::ObjRecPtr, OSG::PointLight* >();
        bp::implicitly_convertible< OSG::PointLight::ObjRecPtr, OSG::PointLight::ObjCPtr >();
        bp::implicitly_convertible< OSG::PointLight::ObjRecPtr, OSG::Light* >();
        bp::implicitly_convertible< OSG::PointLight::ObjRecPtr, OSG::Light::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PointLight::ObjRecPtr, OSG::Light::ObjCPtr>();
    }

}