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
#include "NestedSampleInfo.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_NestedSampleInfo_class(){

    { //::OSG::NestedSampleInfo
        typedef bp::class_< OSG::NestedSampleInfo > NestedSampleInfo_exposer_t;
        NestedSampleInfo_exposer_t NestedSampleInfo_exposer = NestedSampleInfo_exposer_t( "NestedSampleInfo", bp::init< std::string const & >(( bp::arg("name") )) );
        bp::scope NestedSampleInfo_scope( NestedSampleInfo_exposer );
        bp::implicitly_convertible< std::string const &, OSG::NestedSampleInfo >();
        { //::OSG::NestedSampleInfo::addTime
        
            typedef void ( ::OSG::NestedSampleInfo::*addTime_function_type )( ::OSG::Real32 ) ;
            
            NestedSampleInfo_exposer.def( 
                "addTime"
                , addTime_function_type( &::OSG::NestedSampleInfo::addTime )
                , ( bp::arg("sample") ) );
        
        }
        { //::OSG::NestedSampleInfo::calcPercentage
        
            typedef void ( ::OSG::NestedSampleInfo::*calcPercentage_function_type )( ::OSG::Real32 const ) ;
            
            NestedSampleInfo_exposer.def( 
                "calcPercentage"
                , calcPercentage_function_type( &::OSG::NestedSampleInfo::calcPercentage )
                , ( bp::arg("parentAverage") ) );
        
        }
        { //::OSG::NestedSampleInfo::create
        
            typedef ::OSG::NestedSampleInfoPtr ( *create_function_type )( ::std::string const & );
            
            NestedSampleInfo_exposer.def( 
                "create"
                , create_function_type( &::OSG::NestedSampleInfo::create )
                , ( bp::arg("name") ) );
        
        }
        { //::OSG::NestedSampleInfo::getAverage
        
            typedef ::OSG::Real32 ( ::OSG::NestedSampleInfo::*getAverage_function_type )(  ) const;
            
            NestedSampleInfo_exposer.def( 
                "getAverage"
                , getAverage_function_type( &::OSG::NestedSampleInfo::getAverage ) );
        
        }
        { //::OSG::NestedSampleInfo::getName
        
            typedef ::std::string const & ( ::OSG::NestedSampleInfo::*getName_function_type )(  ) const;
            
            NestedSampleInfo_exposer.def( 
                "getName"
                , getName_function_type( &::OSG::NestedSampleInfo::getName )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::NestedSampleInfo::getPercentage
        
            typedef ::OSG::Real32 ( ::OSG::NestedSampleInfo::*getPercentage_function_type )(  ) const;
            
            NestedSampleInfo_exposer.def( 
                "getPercentage"
                , getPercentage_function_type( &::OSG::NestedSampleInfo::getPercentage ) );
        
        }
        { //::OSG::NestedSampleInfo::getPercentageSamples
        
            typedef ::std::vector< float > ( ::OSG::NestedSampleInfo::*getPercentageSamples_function_type )(  ) const;
            
            NestedSampleInfo_exposer.def( 
                "getPercentageSamples"
                , getPercentageSamples_function_type( &::OSG::NestedSampleInfo::getPercentageSamples ) );
        
        }
        { //::OSG::NestedSampleInfo::getSamples
        
            typedef ::std::vector< float > ( ::OSG::NestedSampleInfo::*getSamples_function_type )(  ) const;
            
            NestedSampleInfo_exposer.def( 
                "getSamples"
                , getSamples_function_type( &::OSG::NestedSampleInfo::getSamples ) );
        
        }
        { //::OSG::NestedSampleInfo::outString
        
            typedef ::std::string ( ::OSG::NestedSampleInfo::*outString_function_type )( ::OSG::UInt32,bool ) ;
            
            NestedSampleInfo_exposer.def( 
                "outString"
                , outString_function_type( &::OSG::NestedSampleInfo::outString )
                , ( bp::arg("indent")=(::OSG::UInt32)(0), bp::arg("detailed")=(bool)(false) ) );
        
        }
        { //::OSG::NestedSampleInfo::start
        
            typedef void ( ::OSG::NestedSampleInfo::*start_function_type )(  ) ;
            
            NestedSampleInfo_exposer.def( 
                "start"
                , start_function_type( &::OSG::NestedSampleInfo::start ) );
        
        }
        { //::OSG::NestedSampleInfo::stop
        
            typedef void ( ::OSG::NestedSampleInfo::*stop_function_type )(  ) ;
            
            NestedSampleInfo_exposer.def( 
                "stop"
                , stop_function_type( &::OSG::NestedSampleInfo::stop ) );
        
        }
        { //::OSG::NestedSampleInfo::updateFrame
        
            typedef void ( ::OSG::NestedSampleInfo::*updateFrame_function_type )(  ) ;
            
            NestedSampleInfo_exposer.def( 
                "updateFrame"
                , updateFrame_function_type( &::OSG::NestedSampleInfo::updateFrame ) );
        
        }
        NestedSampleInfo_exposer.def_readwrite( "mAverage", &OSG::NestedSampleInfo::mAverage );
        NestedSampleInfo_exposer.def_readwrite( "mMax", &OSG::NestedSampleInfo::mMax );
        NestedSampleInfo_exposer.def_readwrite( "mName", &OSG::NestedSampleInfo::mName );
        NestedSampleInfo_exposer.def_readwrite( "mPctSamples", &OSG::NestedSampleInfo::mPctSamples );
        NestedSampleInfo_exposer.def_readwrite( "mPercentage", &OSG::NestedSampleInfo::mPercentage );
        NestedSampleInfo_exposer.def_readwrite( "mSamples", &OSG::NestedSampleInfo::mSamples );
        NestedSampleInfo_exposer.def_readwrite( "mStartTime", &OSG::NestedSampleInfo::mStartTime );
        NestedSampleInfo_exposer.def_readwrite( "mSubSamples", &OSG::NestedSampleInfo::mSubSamples );
        NestedSampleInfo_exposer.def_readwrite( "mTimeSummer", &OSG::NestedSampleInfo::mTimeSummer );
        NestedSampleInfo_exposer.staticmethod( "create" );
        bp::register_ptr_to_python< boost::shared_ptr< OSG::NestedSampleInfo > >();
    }

}