/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGRTTRIANGLEACCELFIELDS_H_
#define _OSGRTTRIANGLEACCELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGMField.h"
#include "OSGSField.h"
#include "OSGRTTriangleAccel.h"
#include "OSGBoxVolume.h"

OSG_BEGIN_NAMESPACE

template <>
struct FieldTraits<RTTriAccelBarycentric> : 
    public FieldTraitsTemplateBase<RTTriAccelBarycentric>
{
  private:

    static  DataType                   _type;

  public:

    typedef FieldTraits<RTTriAccelBarycentric>  Self;

    enum                  { Convertible = (Self::FromStringConvertible |
                                           Self::ToStreamConvertible   )     };

    static OSG_BASE_DLLMAPPING
                 DataType     &getType     (void);

    static const Char8        *getSName    (void) 
    {
        return "SFRTTriAccelBarycentric"; 
    }

    static const Char8        *getMName    (void) 
    { 
        return "MFRTTriAccelBarycentric"; 
    }

    static const RTTriAccelBarycentric getDefault  (void) 
    {
        return RTTriAccelBarycentric();   
    }


    static bool getFromCString(      RTTriAccelBarycentric &outVal,
                               const Char8         *&inVal)
    {
#if 0
        Real32 valStore[  6];
        Char8  str     [256];

        UInt32  length = strlen(inVal);
        Char8  *c      = str;
    
        if(length > 256)
        {
            std::cerr << "FieldDataTraits<DynamicVolume>::getFromString(): "
                      << "Input too long" << std::endl;

            return false;
        }

        strncpy(str, inVal, length);

        while(*c != '\0')
        {
            if(*c == '[')
                *c = ' ';
            if(*c == ']')
                *c = ' ';
            if(*c == ',')
                *c = ' ';

            c++;
        }
        
        Int16 count = sscanf(str, "%f %f %f %f %f %f",
                             &valStore[0], &valStore[1], &valStore[2],
                             &valStore[3], &valStore[4], &valStore[5]);
        
        if(count == 4)
        {
            outVal.setVolumeType(DynamicVolume::SPHERE_VOLUME);

            SphereVolume *pSVol = 
                    dynamic_cast<SphereVolume *>(&(outVal.getInstance()));

            pSVol->setCenter(Pnt3r(valStore[0], valStore[1], valStore[2]));
            pSVol->setRadius(valStore[3]);
            
            outVal.instanceChanged();

            return true;
        }
        else if(count == 6)
        {
            outVal.setVolumeType(DynamicVolume::BOX_VOLUME);

            BoxVolume *pBVol = 
                dynamic_cast<BoxVolume *>(&(outVal.getInstance()));

            pBVol->setBounds(valStore[0], valStore[1], valStore[2],
                             valStore[3], valStore[4], valStore[5]);
            
            outVal.instanceChanged();

            return true;
        }
        else
        {
            outVal.setVolumeType(DynamicVolume::BOX_VOLUME);

            BoxVolume *pBVol = 
                dynamic_cast<BoxVolume *>(&(outVal.getInstance()));

            pBVol->setBounds(0.f,0.f,0.f, 0.f,0.f,0.f);
            
            outVal.instanceChanged();

            return false;
        }
#endif
    }


    static void putToStream(const RTTriAccelBarycentric &val,
                                  OutStream             &str)
    {
        str << "\"";
        val.putToStream(str);
        str << "\"";
        
#if 0
        Pnt3r min, max;

        switch(val.getType())
        {
            case DynamicVolume::BOX_VOLUME:

				typedef TypeTraits<Pnt3r::ValueType> TypeTrait;

                val.getBounds(min, max);

                TypeTrait::putToStream(min[0], str);
                str << " ";
                
                TypeTrait::putToStream(min[1], str);
                str << " ";

                TypeTrait::putToStream(min[2], str);
                str << " ";

                TypeTrait::putToStream(max[0], str);
                str << " ";

                TypeTrait::putToStream(max[1], str);
                str << " ";

                TypeTrait::putToStream(max[2], str);

                break;


            case DynamicVolume::SPHERE_VOLUME:

				typedef TypeTraits<Pnt3r::ValueType> TypeTrait;

                const SphereVolume &sVol = 
                    dynamic_cast<const SphereVolume&>(val.getInstance());

                TypeTrait::putToStream(sVol.getCenter()[0], str);
                str << " ";

                TypeTrait::putToStream(sVol.getCenter()[1], str);
                str << " ";
 
                TypeTrait::putToStream(sVol.getCenter()[2], str);
                str << " ";

				TypeTraits<Real>::putToStream(sVol.getRadius(), str);

                break;
        }
#endif
    }

    static UInt32 getBinSize(const RTTriAccelBarycentric &oObject)
    {
#if 0
        UInt32  type = oObject.getType();
        UInt32  size = sizeof(DynamicVolume::Type) + sizeof(UInt16);

        switch(type)
        {
            case DynamicVolume::BOX_VOLUME : 
                size += sizeof(Pnt3f) + sizeof(Pnt3f);
                break;

            case DynamicVolume::SPHERE_VOLUME :
                size += sizeof(Pnt3f) + sizeof(Real32);
                break;

            default :
                SWARNING << "Unknown volume type in getBinSize" << std::endl;
        }

        return size;
#endif
        return 0;
    }


    static UInt32 getBinSize(const RTTriAccelBarycentric *pObjectStore,
                                   UInt32                 uiNumObjects)
    {
        UInt32 size = 0;
#if 0
        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            size += getBinSize(pObjectStore[i]);
        }
#endif
        return size;
    }

    static void copyToBin(      BinaryDataHandler     &pMem, 
                          const RTTriAccelBarycentric &oObject)
    {
#if 0
        UInt32 type = (UInt32) (oObject.getType());

        pMem.putValue(type);

        switch(type)
        {
            case DynamicVolume::BOX_VOLUME : 
            {
                const BoxVolume *pBVol = 
                    dynamic_cast<const BoxVolume *>(
                        &(oObject.getInstance()));

                UInt16 state = pBVol->getState();
                
                pMem.putValue(state);

                pMem.putValues(&(pBVol->getMin()[0]), 3);
                pMem.putValues(&(pBVol->getMax()[0]), 3);

                break;
            }
            case DynamicVolume::SPHERE_VOLUME :
            {
                const SphereVolume *pSVol = 
                    dynamic_cast<const SphereVolume *>(
                        &(oObject.getInstance()));

				Real radius = pSVol->getRadius();

                UInt16 state = pSVol->getState();
                
                pMem.putValue(state);

                pMem.putValues(&(pSVol->getCenter()[0]), 3);
                pMem.putValue (radius);

                break;
            }

            default:
                SWARNING << "Unknown volume type in copyToBin" << std::endl;
        }
#endif
    }

    static void copyToBin(      BinaryDataHandler     &pMem, 
                          const RTTriAccelBarycentric *pObjectStore,
                                UInt32                 uiNumObjects)
    {
#if 0
        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            copyToBin(pMem, pObjectStore[i]);
        }
#endif
    }

    static void copyFromBin(BinaryDataHandler     &pMem, 
                            RTTriAccelBarycentric &oObject)
    {
#if 0
        UInt32 type;
        
        pMem.getValue(type);
        DynamicVolume::Type volumeType=
            static_cast<DynamicVolume::Type>(type);

        oObject.setVolumeType(volumeType);

        switch(type)
        {
            case DynamicVolume::BOX_VOLUME : 
            {
                BoxVolume *pBVol = 
                    dynamic_cast<BoxVolume *>(&(oObject.getInstance()));

                Pnt3r min,max;
                UInt16 state;

                pMem.getValue (state       );
                pMem.getValues(&(min[0]), 3);
                pMem.getValues(&(max[0]), 3);

                pBVol->setState (state   );
                pBVol->setBounds(min, max);

                break;
            }
            case DynamicVolume::SPHERE_VOLUME :
            {
                SphereVolume *pSVol = 
                    dynamic_cast<SphereVolume *>(&(oObject.getInstance()));

                Pnt3r center;
                Real32 radius;
                UInt16 state;

                pMem.getValue(state);
                pMem.getValues(&(center[0]), 3);
                pMem.getValue (radius);

                pSVol->setState (state );
                pSVol->setCenter(center);
                pSVol->setRadius(radius);
                
                break;
            }

            default:
                SWARNING << "Unknown volume type in copyFronBin" << std::endl;
        }
#endif
    }

    static void copyFromBin(BinaryDataHandler     &pMem, 
                            RTTriAccelBarycentric *pObjectStore,
                            UInt32                 uiNumObjects)
    {
#if 0
        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            copyFromBin(pMem, pObjectStore[i]);
        }
#endif
    }
};


typedef MField<RTTriAccelBarycentric> MFRTTriAccelBarycentric;


OSG_END_NAMESPACE

#endif /* _OSGMFIELD_H_ */