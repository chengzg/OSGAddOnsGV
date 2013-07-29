/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGVLCVideoTextureObjChunk.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGVLCVideoTextureObjChunkBase.cpp file.
// To modify it, please change the .fcd file (OSGVLCVideoTextureObjChunk.fcd)
// and regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void VLCVideoTextureObjChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

VLCVideoTextureObjChunk::VLCVideoTextureObjChunk(void) :
    Inherited()
{
    libvlc = NULL;
    vlcmediaplayer = NULL;
    needsUpdate = false;
    vlcmediaplayer = NULL;
}

VLCVideoTextureObjChunk::VLCVideoTextureObjChunk(
    const VLCVideoTextureObjChunk &source) :

    Inherited(source)
{
    libvlc = NULL;
    vlcmediaplayer = NULL;
    needsUpdate = false;
    vlcmediaplayer = NULL;
}

VLCVideoTextureObjChunk::~VLCVideoTextureObjChunk(void)
{
    cleanVLC();
}

/*----------------------------- class specific ----------------------------*/

void VLCVideoTextureObjChunk::changed(ConstFieldMaskArg whichField, 
                                      UInt32            origin,
                                      BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if (0x0000 != (whichField & UrlFieldMask)) {
        // init VLC internal structures
        if (getUrl().length()>1) {            
            createVLCInstance();            
        }
    } else
    if ((0x0000 != (whichField & WidthFieldMask)) ||
        (0x0000 != (whichField & HeightFieldMask))) 
    {
        // reinit VLC internal structures
        if (getUrl().length()>1)
        {            
            resizeVideo();
        }
    }

    if (0x0000 != (whichField & StatusFieldMask)) {
        // update VLC
    }

    if (0x0000 != (whichField & TimestampFieldMask)) {
        // update VLC
        if (getUrl().length()>1)
        { 
            if (!this->getIsMaster()) 
            {
                updateTime();
            }
        }
    }
}

void VLCVideoTextureObjChunk::dump(      UInt32    ,
                                   const BitVector ) const
{
    SLOG << "Dump VLCVideoTextureObjChunk NI" << std::endl;
}

void VLCVideoTextureObjChunk::frame(Time oTime, UInt32 uiFrame)
{
    VLCVideoTextureObjChunk::triggerUpdate();
}

void VLCVideoTextureObjChunk::triggerUpdate(void)
{
    // update all video textures    
    int toDel = -1;
    for (unsigned int i=0; i<allVideoTextures.size(); i++)
    {
        if (allVideoTextures[i]!=NULL)
        {
            if (allVideoTextures[i]->idstr!=NULL) 
            {
                if (allVideoTextures[i]->self->needsUpdate) 
                {
                    allVideoTextures[i]->self->ctx.lock->acquire();
                    GLenum id = allVideoTextures[i]->self->_sfGLId.getValue();
                    Window::refreshGLObject(id);
                    allVideoTextures[i]->self->needsUpdate = false;
                    allVideoTextures[i]->self->ctx.lock->release();
                    allVideoTextures[i]->self->checkForSync();
                    
                }
            } else {
                if (toDel<0) toDel=i;                                    
            }
        }
    }    
    if (toDel>-1) allVideoTextures.erase(allVideoTextures.begin()+toDel); // delete them one by one ...

   
}

void VLCVideoTextureObjChunk::activate(DrawEnv *pEnv, UInt32 idx)
{
    
    

    Inherited::activate(pEnv,idx);
}

// ----------------------------------------------------------------------------------------
static void *vlc_lock(void *data, void **p_pixels)
{ 
    ctxStruct *_ctx = static_cast<ctxStruct *>(data);
    if (_ctx->idstr==NULL) 
    {
        *p_pixels = NULL;
        return NULL;
    }

    if (_ctx->videothread==NULL) 
    {
        std::string name = std::string("THREAD__")+std::string(_ctx->idstr);
        _ctx->videothread = ExternalThread::get(name.c_str(), true);
        _ctx->videothread->initialize(0);  //using the same aspect -> no mem copy         
    }

    _ctx->lock->acquire();
   
    *p_pixels = static_cast<void *>(_ctx->img->editData());
    return NULL; /* picture identifier, not needed here */
}

static void vlc_unlock(void *data, void *id, void *const *p_pixels)
{
    ctxStruct *_ctx = static_cast<ctxStruct *>(data);
    if (_ctx->idstr==NULL) return;
        
    _ctx->lock->release();
    _ctx->self->needsUpdate = true;
                
    assert(id == NULL); // picture identifier, not needed here
}

static void vlc_display(void *data, void *id)
{
    // VLC wants to display the video
//    ctxStruct *_ctx = static_cast<ctxStruct *>(data);
    assert(id == NULL);
}


static std::string getVideoID()
{
    static int number=0;
    number++;
    std::stringstream ss;
    ss << number;
    return ss.str();
}

// ----------------------------------------------------------------------------------------


bool VLCVideoTextureObjChunk::createVLCInstance(libvlc_time_t start_time, 
                                                bool          play      )
{
    libvlc_media_t *m;
    
    char const *vlc_master_argv[] =
    {       
        "-I", "dumy",      // No special interface
        "--ignore-config", // Don't use VLC's config
        "--quiet",         // should deactivate the console outputs
        "--no-xlib",       // tell VLC to not use Xlib   
        "--logfile=vlc_log.txt",
        "--transform-type=hflip",  // not working 
        "--no-video-title-show", // no titles
    };

    char const *vlc_argv[] =
    {       
        "-I", "dumy",      // No special interface
        "--ignore-config", // Don't use VLC's config
        "--no-audio",      // skip any audio track TODO: add audio output
        "--quiet",         // should deactivate the console outputs
        "--no-xlib",       // tell VLC to not use Xlib   
        "--logfile=vlc_log.txt",
        "--transform-type=hflip",  // not working 
        "--no-video-title-show", // no titles
    };

    int vlc_master_argc = sizeof(vlc_master_argv) / sizeof(*vlc_master_argv);
    int vlc_argc        = sizeof(vlc_argv       ) / sizeof(*vlc_argv       );
         
    // Initialize libVLC   
    if (libvlc==NULL) 
    {
        if(this->getIsMaster() == true)
        {
            libvlc = libvlc_new(vlc_master_argc, vlc_master_argv);
        }
        else
        {
            libvlc = libvlc_new(vlc_argc, vlc_argv);
        }
    } 
    else 
    {
        if (vlcmediaplayer!=NULL) 
        {
            ctx.idstr = NULL;
            libvlc_media_player_stop(vlcmediaplayer);    
            libvlc_media_player_release(vlcmediaplayer);
            vlcmediaplayer = NULL;
            ctx.videothread->runFunction(NULL,NULL); // reset thread structure: isInititialized=false
            ctx.videothread = NULL;
        }
    }
    m = libvlc_media_new_path(libvlc, getUrl().c_str());
    vlcmediaplayer = libvlc_media_player_new_from_media(m);
   
    libvlc_media_release(m);

    ctx.idstr = strdup((std::string("video")+getVideoID()).c_str());
    ctx.videothread = NULL;        
    ctx.img = Image::create();
    ctx.img->set(OSG::Image::OSG_BGR_PF,getWidth(), getHeight());
    ctx.lock = Lock::create();
    
    this->setImage(ctx.img);
    this->setTarget(GL_TEXTURE_2D);
    ctx.self = this;


    libvlc_video_set_callbacks(vlcmediaplayer, vlc_lock, vlc_unlock, vlc_display, &ctx);
    libvlc_video_set_format(vlcmediaplayer, "RV24", getWidth(), getHeight(), getWidth()*3);
    
    libvlc_media_player_play(vlcmediaplayer);
    libvlc_media_player_set_time(vlcmediaplayer, start_time);
    if (!play) libvlc_media_player_pause(vlcmediaplayer); //not working?
    
    // add to static list
    allVideoTextures.push_back(&ctx);

    lastSync=OSG::getTimeStamp();

    return true;
}


void VLCVideoTextureObjChunk::cleanVLC()
{
    if (libvlc == NULL) return;
    // Stop stream and clean up libVLC
    ctx.idstr = NULL;

    libvlc_media_player_stop(vlcmediaplayer);
    
    libvlc_media_player_release(vlcmediaplayer);
    libvlc_release(libvlc);

    libvlc = NULL;
}

void VLCVideoTextureObjChunk::resizeVideo()
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return;    
    libvlc_time_t current_time=0;
    bool play = true;

    if (libvlc_media_player_is_playing(vlcmediaplayer)!=1) play=false;
    
    current_time = libvlc_media_player_get_time(vlcmediaplayer);           
    SINFO << "restart video at " << current_time << std::endl;
        
    createVLCInstance(current_time,play);
}

//
bool VLCVideoTextureObjChunk::isPlaying()
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return false;  
    if (libvlc_media_player_is_playing(vlcmediaplayer)==1) return true;
    return false;
}

void VLCVideoTextureObjChunk::pause(void)
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return;  
    libvlc_media_player_pause(vlcmediaplayer);    
}

void VLCVideoTextureObjChunk::play(void)
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return;      
    libvlc_media_player_play(vlcmediaplayer);
}


void VLCVideoTextureObjChunk::checkForSync(void)
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return;    
    if (libvlc_media_player_is_playing(vlcmediaplayer)!=1) return;

    // only the master sets the timestamp
    if (getIsMaster()==true) 
    {
        OSG::TimeStamp now = OSG::getTimeStamp();
        if (OSG::getTimeStampMsecs(now-lastSync) > getUpdatefreq()) 
        {
            lastSync=now;
            setTimestamp(libvlc_media_player_get_time(vlcmediaplayer));
            commitChanges();
        }
    }
}

void VLCVideoTextureObjChunk::updateTime(void)
{
    if ((libvlc == NULL) || (vlcmediaplayer == NULL)) return;    
    if (libvlc_media_player_is_playing(vlcmediaplayer)!=1) return;
    // only update if > 300 ms offset
    long test=labs(libvlc_media_player_get_time(vlcmediaplayer)-this->getTimestamp());
    if (test>300)
    {
        libvlc_media_player_set_time(vlcmediaplayer, this->getTimestamp());
        SLOG << "resyncing video: " << test << std::endl;
    }
}



OSG_END_NAMESPACE