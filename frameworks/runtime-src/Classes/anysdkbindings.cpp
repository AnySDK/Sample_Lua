/*
** Lua binding: sdk
** Generated automatically by tolua++-1.0.92 on Wed Jul  2 17:07:32 2014.
*/

/****************************************************************************
 Copyright (c) 2011 cocos2d-x.org

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

extern "C" {
#include "scripting/lua-bindings/manual/tolua_fix.h"
}

#include <map>
#include <string>
#include "anysdkbindings.h"
#include "AgentManager.h"
#include "PluginManager.h"
#include "PluginFactory.h"
#include "AgentManager.h"
#include "PluginProtocol.h"
#include "ProtocolPush.h"
#include "PluginFactory.h"     
#include "ProtocolAds.h"     
#include "ProtocolShare.h"
#include "PluginManager.h"
#include "ProtocolAnalytics.h" 
#include "ProtocolSocial.h"
#include "PluginParam.h"      
#include "ProtocolIAP.h"     
#include "ProtocolUser.h"
#include "ProtocolREC.h"
#include "ProtocolCustom.h"
#include "ProtocolCrash.h"
#include "ProtocolAdTracking.h"

#include "cocos2d.h"

using namespace anysdk::framework;

USING_NS_CC;


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_AgentManager (lua_State* tolua_S)
{
 AgentManager* self = (AgentManager*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_PluginManager (lua_State* tolua_S)
{
 PluginManager* self = (PluginManager*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_PluginFactory (lua_State* tolua_S)
{
 PluginFactory* self = (PluginFactory*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"PluginParam");
    tolua_usertype(tolua_S,"ProtocolUser");
    tolua_usertype(tolua_S,"ProtocolSocial");
    tolua_usertype(tolua_S,"PluginManager");
    tolua_usertype(tolua_S,"ProtocolAnalytics");
    tolua_usertype(tolua_S,"ProtocolShare");
    tolua_usertype(tolua_S,"ProtocolPush");
    tolua_usertype(tolua_S,"ParamType");
    tolua_usertype(tolua_S,"ProtocolIAP");
    tolua_usertype(tolua_S,"PluginFactory");
    tolua_usertype(tolua_S,"AdsType");
    tolua_usertype(tolua_S,"AgentManager");
    tolua_usertype(tolua_S,"PluginProtocol");
    tolua_usertype(tolua_S,"ProtocolAds");
    tolua_usertype(tolua_S,"ProtocolREC");
    tolua_usertype(tolua_S,"ProtocolCrash");
    tolua_usertype(tolua_S,"ProtocolCustom");
    tolua_usertype(tolua_S,"ProtocolAdTracking");

}

/* method: delete of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_delete00
static int tolua_anysdk_AgentManager_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getInstance00
static int tolua_anysdk_AgentManager_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AgentManager* tolua_ret = (AgentManager*)  AgentManager::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AgentManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: end of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_endManager00
static int tolua_anysdk_AgentManager_endManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AgentManager::end();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_init00
static int tolua_anysdk_AgentManager_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
  std::string appKey = ((std::string)  tolua_tocppstring(tolua_S,2,0));
  std::string appSecret = ((std::string)  tolua_tocppstring(tolua_S,3,0));
  std::string privateKey = ((std::string)  tolua_tocppstring(tolua_S,4,0));
  std::string oauthLoginServer = ((std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init(appKey,appSecret,privateKey,oauthLoginServer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadALLPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_loadALLPlugin00
static int tolua_anysdk_AgentManager_loadALLPlugin00(lua_State* tolua_S)
{
    CCLOG("\n********** \nloadALLPlugin was deprecated, please use loadAllPlugins instead.\n**********");
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadALLPlugin'", NULL);
#endif
  {
   self->loadALLPlugin();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadALLPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadALLPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_unloadALLPlugin00
static int tolua_anysdk_AgentManager_unloadALLPlugin00(lua_State* tolua_S)
{
    CCLOG("\n********** \nunloadALLPlugin was deprecated, please use unloadAllPlugins instead.\n**********");
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadALLPlugin'", NULL);
#endif
  {
   self->unloadALLPlugin();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadALLPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadAllPlugins of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_loadAllPlugins00
static int tolua_anysdk_AgentManager_loadAllPlugins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadAllPlugins'", NULL);
#endif
        {
            self->loadAllPlugins();
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'loadAllPlugins'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadAllPlugins of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_unloadAllPlugins00
static int tolua_anysdk_AgentManager_unloadAllPlugins00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadAllPlugins'", NULL);
#endif
        {
            self->unloadAllPlugins();
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'unloadAllPlugins'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnalyticsPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getAnalyticsPlugin00
static int tolua_anysdk_AgentManager_getAnalyticsPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnalyticsPlugin'", NULL);
#endif
  {
   ProtocolAnalytics* tolua_ret = (ProtocolAnalytics*)  self->getAnalyticsPlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolAnalytics");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnalyticsPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getUserPlugin00
static int tolua_anysdk_AgentManager_getUserPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserPlugin'", NULL);
#endif
  {
   ProtocolUser* tolua_ret = (ProtocolUser*)  self->getUserPlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolUser");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSharePlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getSharePlugin00
static int tolua_anysdk_AgentManager_getSharePlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSharePlugin'", NULL);
#endif
  {
   ProtocolShare* tolua_ret = (ProtocolShare*)  self->getSharePlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolShare");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSharePlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSocialPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getSocialPlugin00
static int tolua_anysdk_AgentManager_getSocialPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSocialPlugin'", NULL);
#endif
  {
   ProtocolSocial* tolua_ret = (ProtocolSocial*)  self->getSocialPlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolSocial");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSocialPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAdsPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getAdsPlugin00
static int tolua_anysdk_AgentManager_getAdsPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAdsPlugin'", NULL);
#endif
  {
   ProtocolAds* tolua_ret = (ProtocolAds*)  self->getAdsPlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolAds");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAdsPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChannelId of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getChannelId00
static int tolua_anysdk_AgentManager_getChannelId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChannelId'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getChannelId();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChannelId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPushPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getPushPlugin00
static int tolua_anysdk_AgentManager_getPushPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPushPlugin'", NULL);
#endif
  {
   ProtocolPush* tolua_ret = (ProtocolPush*)  self->getPushPlugin();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolPush");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPushPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRECPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getRECPlugin00
static int tolua_anysdk_AgentManager_getRECPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRECPlugin'", NULL);
#endif
        {
            ProtocolREC* tolua_ret = (ProtocolREC*)  self->getRECPlugin();
            tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolREC");
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'getRECPlugin'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCustomPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getCustomPlugin00
static int tolua_anysdk_AgentManager_getCustomPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCustomPlugin'", NULL);
#endif
        {
            ProtocolCustom* tolua_ret = (ProtocolCustom*)  self->getCustomPlugin();
            tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolCustom");
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'getCustomPlugin'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCrashPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getCrashPlugin00
static int tolua_anysdk_AgentManager_getCrashPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCrashPlugin'", NULL);
#endif
        {
            ProtocolCrash* tolua_ret = (ProtocolCrash*)  self->getCrashPlugin();
            tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolCrash");
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'getCrashPlugin'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAdTrackingPlugin of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getAdTrackingPlugin00
static int tolua_anysdk_AgentManager_getAdTrackingPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAdTrackingPlugin'", NULL);
#endif
        {
            ProtocolAdTracking* tolua_ret = (ProtocolAdTracking*)  self->getAdTrackingPlugin();
            tolua_pushusertype(tolua_S,(void*)tolua_ret,"ProtocolAdTracking");
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'getCrashPlugin'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE



/* method: getCustomParam of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_getCustomParam00
static int tolua_anysdk_AgentManager_getCustomParam00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCustomParam'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getCustomParam();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCustomParam'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsAnaylticsEnabled of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_setIsAnaylticsEnabled00
static int tolua_anysdk_AgentManager_setIsAnaylticsEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsAnaylticsEnabled'", NULL);
#endif
  {
    int argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
      bool tolua_ret = ((bool)  tolua_toboolean(tolua_S,2,true));
      CCLOG("setIsAnaylticsEnabled:%d", tolua_ret);
      self->setIsAnaylticsEnabled(tolua_ret);
    }
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsAnaylticsEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAnaylticsEnabled of class  AgentManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_AgentManager_isAnaylticsEnabled00
static int tolua_anysdk_AgentManager_isAnaylticsEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AgentManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AgentManager* self = (AgentManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAnaylticsEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAnaylticsEnabled();
    CCLOG("setIsAnaylticsEnabled:%d", tolua_ret);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
    return 1;
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAnaylticsEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PluginFactory */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginFactory_delete00
static int tolua_anysdk_PluginFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginFactory* self = (PluginFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  PluginFactory */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginFactory_getInstance00
static int tolua_anysdk_PluginFactory_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PluginFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PluginFactory* tolua_ret = (PluginFactory*)  PluginFactory::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PluginFactory");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeFactory of class  PluginFactory */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginFactory_purgeFactory00
static int tolua_anysdk_PluginFactory_purgeFactory00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PluginFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PluginFactory::purgeFactory();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeFactory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  PluginManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginManager_delete00
static int tolua_anysdk_PluginManager_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginManager* self = (PluginManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getInstance of class  PluginManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginManager_getInstance00
static int tolua_anysdk_PluginManager_getInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PluginManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PluginManager* tolua_ret = (PluginManager*)  PluginManager::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PluginManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: end of class  PluginManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginManager_endManager00
static int tolua_anysdk_PluginManager_endManager00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PluginManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PluginManager::end();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'endManager'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadPlugin of class  PluginManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginManager_loadPlugin00
static int tolua_anysdk_PluginManager_loadPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginManager* self = (PluginManager*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  int pluginType = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadPlugin'", NULL);
#endif
  {
   PluginProtocol* tolua_ret = (PluginProtocol*)  self->loadPlugin(name,pluginType);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PluginProtocol");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadPlugin of class  PluginManager */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginManager_unloadPlugin00
static int tolua_anysdk_PluginManager_unloadPlugin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginManager* self = (PluginManager*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  int pluginType = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadPlugin'", NULL);
#endif
  {
   self->unloadPlugin(name,pluginType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadPlugin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPluginName of class  PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_setPluginName00
static int tolua_anysdk_PluginProtocol_setPluginName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPluginName'", NULL);
#endif
  {
   self->setPluginName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPluginName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPluginName of class  PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_getPluginName00
static int tolua_anysdk_PluginProtocol_getPluginName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPluginName'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPluginName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPluginName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPluginVersion of class  PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_getPluginVersion00
static int tolua_anysdk_PluginProtocol_getPluginVersion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPluginVersion'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getPluginVersion();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPluginVersion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSDKVersion of class  PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_getSDKVersion00
static int tolua_anysdk_PluginProtocol_getSDKVersion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSDKVersion'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getSDKVersion();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSDKVersion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFunctionSupported of class PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_isFunctionSupported00
static int tolua_anysdk_PluginProtocol_isFunctionSupported00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
        !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,3,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
        std::string functionName = ((std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFunctionSupported'", NULL);
#endif
        {
            bool tolua_ret = (bool)  self->isFunctionSupported(functionName);
            tolua_pushboolean(tolua_S,(bool)tolua_ret);
        }
    }
    return 1;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'isFunctionSupported'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDebugMode of class  PluginProtocol */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginProtocol_setDebugMode00
static int tolua_anysdk_PluginProtocol_setDebugMode00(lua_State* tolua_S)
{
    CCLOG("\n********** \nsetDebugMode was deprecated.\n**********");
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginProtocol",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginProtocol* self = (PluginProtocol*)  tolua_tousertype(tolua_S,1,0);
  bool bDebug = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDebugMode'", NULL);
#endif
  {
   self->setDebugMode(bDebug);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDebugMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showAds of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_showAds00
static int tolua_anysdk_ProtocolAds_showAds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) ) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
  AdsType adsType =  (AdsType) ((int)  tolua_tonumber(tolua_S,2,0));
  int idx = ((int)  tolua_tonumber(tolua_S,3,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showAds'", NULL);
#endif
  {
    CCLOG("showAds, adsType:%d, %x\n", adsType, self);
   self->showAds(adsType, idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showAds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hideAds of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_hideAds00
static int tolua_anysdk_ProtocolAds_hideAds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) ) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
  AdsType adsType =  (AdsType) ((int)  tolua_tonumber(tolua_S,2,0));
  int idx = ((int)  tolua_tonumber(tolua_S,3,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hideAds'", NULL);
#endif
  {
    CCLOG("hideAds, adsType:%d, %x\n", adsType, self);
   self->hideAds(adsType, idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hideAds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: preloadAds of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_preloadAds00
static int tolua_anysdk_ProtocolAds_preloadAds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) ) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
  AdsType adsType =  (AdsType) ((int)  tolua_tonumber(tolua_S,2,0));
  int idx = ((int)  tolua_tonumber(tolua_S,3,1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'preloadAds'", NULL);
#endif
  {
    CCLOG("preloadAds, adsType:%d, %x\n", adsType, self);
   self->preloadAds(adsType, idx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'preloadAds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: queryPoints of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_queryPoints00
static int tolua_anysdk_ProtocolAds_queryPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'queryPoints'", NULL);
#endif
  {
   float tolua_ret = (float)  self->queryPoints();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'queryPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spendPoints of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_spendPoints00
static int tolua_anysdk_ProtocolAds_spendPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
  int points = ((int)  tolua_tonumber(tolua_S,2,0));
  CCLOG("spendPoints: %x, points: %d \n", self, points);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'spendPoints'", NULL);
#endif
  {
   self->spendPoints(points);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spendPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isAdTypeSupported of class  ProtocolAds */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAds_isAdTypeSupported00
static int tolua_anysdk_ProtocolAds_isAdTypeSupported00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAds",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAds* self = (ProtocolAds*)  tolua_tousertype(tolua_S,1,0);
  AdsType adsType = (AdsType) ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isAdTypeSupported'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isAdTypeSupported(adsType);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isAdTypeSupported'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startSession of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_startSession00
static int tolua_anysdk_ProtocolAnalytics_startSession00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startSession'", NULL);
#endif
  {
   self->startSession();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startSession'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopSession of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_stopSession00
static int tolua_anysdk_ProtocolAnalytics_stopSession00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopSession'", NULL);
#endif
  {
   self->stopSession();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopSession'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE



/* method: setSessionContinueMillis of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_setSessionContinueMillis00
static int tolua_anysdk_ProtocolAnalytics_setSessionContinueMillis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
  long millis = ((long)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSessionContinueMillis'", NULL);
#endif
  {
   self->setSessionContinueMillis(millis);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSessionContinueMillis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: logError of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_logError00
static int tolua_anysdk_ProtocolAnalytics_logError00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
  const char* errorId = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* message = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logError'", NULL);
#endif
  {
   self->logError(errorId,message);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logError'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: logTimedEventBegin of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_logTimedEventBegin00
static int tolua_anysdk_ProtocolAnalytics_logTimedEventBegin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
  const char* eventId = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logTimedEventBegin'", NULL);
#endif
  {
   self->logTimedEventBegin(eventId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logTimedEventBegin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: logTimedEventEnd of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_logTimedEventEnd00
static int tolua_anysdk_ProtocolAnalytics_logTimedEventEnd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
  const char* eventId = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logTimedEventEnd'", NULL);
#endif
  {
   self->logTimedEventEnd(eventId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logTimedEventEnd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCaptureUncaughtException of class  ProtocolAnalytics */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAnalytics_setCaptureUncaughtException00
static int tolua_anysdk_ProtocolAnalytics_setCaptureUncaughtException00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAnalytics",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAnalytics* self = (ProtocolAnalytics*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCaptureUncaughtException'", NULL);
#endif
  {
   self->setCaptureUncaughtException(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCaptureUncaughtException'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOrderId of class  ProtocolIAP */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolIAP_getOrderId00
static int tolua_anysdk_ProtocolIAP_getOrderId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolIAP",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolIAP* self = (ProtocolIAP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOrderId'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getOrderId();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOrderId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPluginId of class  ProtocolIAP */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolIAP_getPluginId00
static int tolua_anysdk_ProtocolIAP_getPluginId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolIAP",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolIAP* self = (ProtocolIAP*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPluginId'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getPluginId();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPluginId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resetPayState of class  ProtocolIAP */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolIAP_resetPayState00
static int tolua_anysdk_ProtocolIAP_resetPayState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ProtocolIAP",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ProtocolIAP::resetPayState();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resetPayState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentType of class  PluginParam */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginParam_getCurrentType00
static int tolua_anysdk_PluginParam_getCurrentType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginParam",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginParam* self = (PluginParam*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentType'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getIntValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIntValue of class  PluginParam */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginParam_getIntValue00
static int tolua_anysdk_PluginParam_getIntValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginParam",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginParam* self = (PluginParam*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIntValue'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getIntValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFloatValue of class  PluginParam */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginParam_getFloatValue00
static int tolua_anysdk_PluginParam_getFloatValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginParam",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginParam* self = (PluginParam*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFloatValue'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFloatValue();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFloatValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoolValue of class  PluginParam */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginParam_getBoolValue00
static int tolua_anysdk_PluginParam_getBoolValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginParam",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginParam* self = (PluginParam*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoolValue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getBoolValue();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoolValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringValue of class  PluginParam */
#ifndef TOLUA_DISABLE_tolua_anysdk_PluginParam_getStringValue00
static int tolua_anysdk_PluginParam_getStringValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PluginParam",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PluginParam* self = (PluginParam*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringValue'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getStringValue();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startPush of class  ProtocolPush */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolPush_startPush00
static int tolua_anysdk_ProtocolPush_startPush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolPush",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolPush* self = (ProtocolPush*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startPush'", NULL);
#endif
  {
   self->startPush();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startPush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: closePush of class  ProtocolPush */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolPush_closePush00
static int tolua_anysdk_ProtocolPush_closePush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolPush",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolPush* self = (ProtocolPush*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'closePush'", NULL);
#endif
  {
   self->closePush();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'closePush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAlias of class  ProtocolPush */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolPush_setAlias00
static int tolua_anysdk_ProtocolPush_setAlias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolPush",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolPush* self = (ProtocolPush*)  tolua_tousertype(tolua_S,1,0);
  string alias = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAlias'", NULL);
#endif
  {
   self->setAlias(alias);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAlias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delAlias of class  ProtocolPush */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolPush_delAlias00
static int tolua_anysdk_ProtocolPush_delAlias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolPush",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolPush* self = (ProtocolPush*)  tolua_tousertype(tolua_S,1,0);
  string alias = ((string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delAlias'", NULL);
#endif
  {
   self->delAlias(alias);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delAlias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: signIn of class  ProtocolSocial */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolSocial_signIn00
static int tolua_anysdk_ProtocolSocial_signIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolSocial",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolSocial* self = (ProtocolSocial*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'signIn'", NULL);
#endif
  {
   self->signIn();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'signIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: signOut of class  ProtocolSocial */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolSocial_signOut00
static int tolua_anysdk_ProtocolSocial_signOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolSocial",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolSocial* self = (ProtocolSocial*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'signOut'", NULL);
#endif
  {
   self->signOut();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'signOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: submitScore of class  ProtocolSocial */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolSocial_submitScore00
static int tolua_anysdk_ProtocolSocial_submitScore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolSocial",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolSocial* self = (ProtocolSocial*)  tolua_tousertype(tolua_S,1,0);
  const char* leadboardID = ((const char*)  tolua_tostring(tolua_S,2,0));
  long score = ((long)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'submitScore'", NULL);
#endif
  {
   self->submitScore(leadboardID,score);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'submitScore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showLeaderboard of class  ProtocolSocial */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolSocial_showLeaderboard00
static int tolua_anysdk_ProtocolSocial_showLeaderboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolSocial",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolSocial* self = (ProtocolSocial*)  tolua_tousertype(tolua_S,1,0);
  const char* leaderboardID = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showLeaderboard'", NULL);
#endif
  {
   self->showLeaderboard(leaderboardID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showLeaderboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: showAchievements of class  ProtocolSocial */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolSocial_showAchievements00
static int tolua_anysdk_ProtocolSocial_showAchievements00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolSocial",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolSocial* self = (ProtocolSocial*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'showAchievements'", NULL);
#endif
  {
   self->showAchievements();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'showAchievements'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: login of class  ProtocolUser */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolUser_login00
static int tolua_anysdk_ProtocolUser_login00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolUser",0,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
     if(lua_type(tolua_S, 2) == LUA_TNONE){
        ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
         if (!self) tolua_error(tolua_S,"invalid 'self' in function 'login'", NULL);
#endif
         {
             self->login();
         }
     }
     else if(lua_type(tolua_S, 2) == LUA_TSTRING)
     {
         ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
         std::string server_id = ((std::string)  tolua_tocppstring(tolua_S,2,0));
         std::string server_ip = "";
         if ( lua_type(tolua_S, 3) == LUA_TSTRING )
         {
             server_ip = ((std::string)  tolua_tocppstring(tolua_S,3,0));
         }
#ifndef TOLUA_RELEASE
         if (!self) tolua_error(tolua_S,"invalid 'self' in function 'login'", NULL);
#endif
         {
             self->login(server_id, server_ip);
         }
     }
     else
     {
         ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
         std::map<std::string, std::string> strmap;
         lua_pushnil(tolua_S);
         while ( 0 != lua_next(tolua_S, 2 ) )                             /* L: lotable ..... key value */
         {
             if (!lua_isstring(tolua_S, -2))
             {
                 lua_pop(tolua_S, 1);                                      /* removes 'value'; keep 'key' for next iteration*/
                 continue;
             }
             if (lua_isnil(tolua_S, -1) || !lua_isstring(tolua_S, -1))
             {
                 lua_pop(tolua_S, 1);
                 continue;
             }
             std::string key = "";
             key = tolua_tocppstring(tolua_S, -2, NULL);
             std::string value = "";
             value = tolua_tocppstring(tolua_S, -1, NULL);
             strmap.insert( StringMap::value_type(key, value) );
             lua_pop(tolua_S, 1);                                          /* L: lotable ..... key */
         }
#ifndef TOLUA_RELEASE
         if (!self) tolua_error(tolua_S,"invalid 'self' in function 'login'", NULL);
#endif
         {
             self->login(strmap);
         }
         return 0;
         
     }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'login'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isLogined of class  ProtocolUser */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolUser_isLogined00
static int tolua_anysdk_ProtocolUser_isLogined00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolUser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isLogined'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isLogined();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isLogined'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserID of class  ProtocolUser */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolUser_getUserID00
static int tolua_anysdk_ProtocolUser_getUserID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolUser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserID'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getUserID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE


/* method: getPluginId of class  ProtocolUser */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolUser_getPluginId00
static int tolua_anysdk_ProtocolUser_getPluginId00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolUser",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolUser* self = (ProtocolUser*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPluginId'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getPluginId();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPluginId'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reportException of class  ProtocolCrash */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolCrash_reportException00
static int tolua_anysdk_ProtocolCrash_reportException00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"ProtocolCrash",0,&tolua_err) ||
        !tolua_isstring(tolua_S,2,0,&tolua_err) ||
        !tolua_isstring(tolua_S,3,0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,4,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        ProtocolCrash* self = (ProtocolCrash*)  tolua_tousertype(tolua_S,1,0);
        const char* errorId = ((const char*)  tolua_tostring(tolua_S,2,0));
        const char* message = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reportException'", NULL);
#endif
        {
            self->reportException(errorId,message);
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'reportException'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserIdentifier of class  ProtocolCrash */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolCrash_setUserIdentifier00
static int tolua_anysdk_ProtocolCrash_setUserIdentifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"ProtocolCrash",0,&tolua_err) ||
        !tolua_isstring(tolua_S,2,0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,3,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        ProtocolCrash* self = (ProtocolCrash*)  tolua_tousertype(tolua_S,1,0);
        const char* identifier = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserIdentifier'", NULL);
#endif
        {
            self->setUserIdentifier(identifier);
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'setUserIdentifier'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: leaveBreadcrumb of class  ProtocolCrash */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolCrash_leaveBreadcrumb00
static int tolua_anysdk_ProtocolCrash_leaveBreadcrumb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"ProtocolCrash",0,&tolua_err) ||
        !tolua_isstring(tolua_S,2,0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,3,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        ProtocolCrash* self = (ProtocolCrash*)  tolua_tousertype(tolua_S,1,0);
        const char* breadcrumb = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'leaveBreadcrumb'", NULL);
#endif
        {
            self->leaveBreadcrumb(breadcrumb);
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'leaveBreadcrumb'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startRecording of class  ProtocolREC */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolREC_startRecording00
static int tolua_anysdk_ProtocolREC_startRecording00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"ProtocolREC",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        ProtocolREC* self = (ProtocolREC*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startRecording'", NULL);
#endif
        {
            self->startRecording();
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'startRecording'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopRecording of class  ProtocolREC */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolREC_stopRecording00
static int tolua_anysdk_ProtocolREC_stopRecording00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
    tolua_Error tolua_err;
    if (
        !tolua_isusertype(tolua_S,1,"ProtocolREC",0,&tolua_err) ||
        !tolua_isnoobj(tolua_S,2,&tolua_err)
        )
        goto tolua_lerror;
    else
#endif
    {
        ProtocolREC* self = (ProtocolREC*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
        if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopRecording'", NULL);
#endif
        {
            self->stopRecording();
        }
    }
    return 0;
#ifndef TOLUA_RELEASE
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'stopRecording'.",&tolua_err);
    return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onRegister of class  ProtocolAdTracking */
#ifndef TOLUA_DISABLE_tolua_anysdk_ProtocolAdTracking_onRegister00
static int tolua_anysdk_ProtocolAdTracking_onRegister00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ProtocolAdTracking",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ProtocolAdTracking* self = (ProtocolAdTracking*)  tolua_tousertype(tolua_S,1,0);
  const char* userId = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onRegister'", NULL);
#endif
  {
   self->onRegister(userId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onRegister'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE



/* Open function */
TOLUA_API int tolua_anysdk_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"AgentManager","AgentManager","",tolua_collect_AgentManager);
  #else
  tolua_cclass(tolua_S,"AgentManager","AgentManager","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"AgentManager");
   tolua_function(tolua_S,"delete",tolua_anysdk_AgentManager_delete00);
   tolua_function(tolua_S,"getInstance",tolua_anysdk_AgentManager_getInstance00);
   tolua_function(tolua_S,"endManager",tolua_anysdk_AgentManager_endManager00);
   tolua_function(tolua_S,"init",tolua_anysdk_AgentManager_init00);
   tolua_function(tolua_S,"loadALLPlugin",tolua_anysdk_AgentManager_loadALLPlugin00);
   tolua_function(tolua_S,"unloadALLPlugin",tolua_anysdk_AgentManager_unloadALLPlugin00);
   tolua_function(tolua_S,"loadAllPlugins",tolua_anysdk_AgentManager_loadAllPlugins00);
   tolua_function(tolua_S,"unloadAllPlugins",tolua_anysdk_AgentManager_unloadAllPlugins00);
   tolua_function(tolua_S,"getAnalyticsPlugin",tolua_anysdk_AgentManager_getAnalyticsPlugin00);
   tolua_function(tolua_S,"getUserPlugin",tolua_anysdk_AgentManager_getUserPlugin00);
   tolua_function(tolua_S,"getSharePlugin",tolua_anysdk_AgentManager_getSharePlugin00);
   tolua_function(tolua_S,"getSocialPlugin",tolua_anysdk_AgentManager_getSocialPlugin00);
   tolua_function(tolua_S,"getAdsPlugin",tolua_anysdk_AgentManager_getAdsPlugin00);
   tolua_function(tolua_S,"getChannelId",tolua_anysdk_AgentManager_getChannelId00);
   tolua_function(tolua_S,"getPushPlugin",tolua_anysdk_AgentManager_getPushPlugin00);
   tolua_function(tolua_S,"getRECPlugin",tolua_anysdk_AgentManager_getRECPlugin00);
   tolua_function(tolua_S,"getCustomPlugin",tolua_anysdk_AgentManager_getCustomPlugin00);
   tolua_function(tolua_S,"getCrashPlugin",tolua_anysdk_AgentManager_getCrashPlugin00);
   tolua_function(tolua_S,"getAdTrackingPlugin",tolua_anysdk_AgentManager_getAdTrackingPlugin00);
   tolua_function(tolua_S,"getCustomParam",tolua_anysdk_AgentManager_getCustomParam00);
   tolua_function(tolua_S,"setIsAnaylticsEnabled",tolua_anysdk_AgentManager_setIsAnaylticsEnabled00);
   tolua_function(tolua_S,"isAnaylticsEnabled",tolua_anysdk_AgentManager_isAnaylticsEnabled00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PluginFactory","PluginFactory","",tolua_collect_PluginFactory);
  #else
  tolua_cclass(tolua_S,"PluginFactory","PluginFactory","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PluginFactory");
   tolua_function(tolua_S,"delete",tolua_anysdk_PluginFactory_delete00);
   tolua_function(tolua_S,"getInstance",tolua_anysdk_PluginFactory_getInstance00);
   tolua_function(tolua_S,"purgeFactory",tolua_anysdk_PluginFactory_purgeFactory00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"PluginManager","PluginManager","",tolua_collect_PluginManager);
  #else
  tolua_cclass(tolua_S,"PluginManager","PluginManager","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"PluginManager");
   tolua_function(tolua_S,"delete",tolua_anysdk_PluginManager_delete00);
   tolua_function(tolua_S,"getInstance",tolua_anysdk_PluginManager_getInstance00);
   tolua_function(tolua_S,"endManager",tolua_anysdk_PluginManager_endManager00);
   tolua_function(tolua_S,"loadPlugin",tolua_anysdk_PluginManager_loadPlugin00);
   tolua_function(tolua_S,"unloadPlugin",tolua_anysdk_PluginManager_unloadPlugin00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PluginProtocol","PluginProtocol","",NULL);
  tolua_beginmodule(tolua_S,"PluginProtocol");
   tolua_function(tolua_S,"isFunctionSupported",tolua_anysdk_PluginProtocol_isFunctionSupported00);
   tolua_function(tolua_S,"setPluginName",tolua_anysdk_PluginProtocol_setPluginName00);
   tolua_function(tolua_S,"getPluginName",tolua_anysdk_PluginProtocol_getPluginName00);
   tolua_function(tolua_S,"getPluginVersion",tolua_anysdk_PluginProtocol_getPluginVersion00);
   tolua_function(tolua_S,"getSDKVersion",tolua_anysdk_PluginProtocol_getSDKVersion00);
   tolua_function(tolua_S,"setDebugMode",tolua_anysdk_PluginProtocol_setDebugMode00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolAds","ProtocolAds","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolAds");
   tolua_function(tolua_S,"showAds",tolua_anysdk_ProtocolAds_showAds00);
   tolua_function(tolua_S,"hideAds",tolua_anysdk_ProtocolAds_hideAds00);
   tolua_function(tolua_S,"preloadAds",tolua_anysdk_ProtocolAds_preloadAds00);
   tolua_function(tolua_S,"queryPoints",tolua_anysdk_ProtocolAds_queryPoints00);
   tolua_function(tolua_S,"spendPoints",tolua_anysdk_ProtocolAds_spendPoints00);
   tolua_function(tolua_S,"isAdTypeSupported",tolua_anysdk_ProtocolAds_isAdTypeSupported00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolAnalytics","ProtocolAnalytics","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolAnalytics");
   tolua_function(tolua_S,"startSession",tolua_anysdk_ProtocolAnalytics_startSession00);
   tolua_function(tolua_S,"stopSession",tolua_anysdk_ProtocolAnalytics_stopSession00);

   tolua_function(tolua_S,"setSessionContinueMillis",tolua_anysdk_ProtocolAnalytics_setSessionContinueMillis00);
   tolua_function(tolua_S,"logError",tolua_anysdk_ProtocolAnalytics_logError00);
   tolua_function(tolua_S,"logTimedEventBegin",tolua_anysdk_ProtocolAnalytics_logTimedEventBegin00);
   tolua_function(tolua_S,"logTimedEventEnd",tolua_anysdk_ProtocolAnalytics_logTimedEventEnd00);
   tolua_function(tolua_S,"setCaptureUncaughtException",tolua_anysdk_ProtocolAnalytics_setCaptureUncaughtException00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolIAP","ProtocolIAP","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolIAP");
   tolua_function(tolua_S,"getOrderId",tolua_anysdk_ProtocolIAP_getOrderId00);
   tolua_function(tolua_S,"getPluginId",tolua_anysdk_ProtocolIAP_getPluginId00);
   tolua_function(tolua_S,"resetPayState",tolua_anysdk_ProtocolIAP_resetPayState00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"PluginParam","PluginParam","",NULL);
  tolua_beginmodule(tolua_S,"PluginParam");
   tolua_function(tolua_S,"getCurrentType",tolua_anysdk_PluginParam_getCurrentType00);
   tolua_function(tolua_S,"getIntValue",tolua_anysdk_PluginParam_getIntValue00);
   tolua_function(tolua_S,"getFloatValue",tolua_anysdk_PluginParam_getFloatValue00);
   tolua_function(tolua_S,"getBoolValue",tolua_anysdk_PluginParam_getBoolValue00);
   tolua_function(tolua_S,"getStringValue",tolua_anysdk_PluginParam_getStringValue00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolPush","ProtocolPush","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolPush");
   tolua_function(tolua_S,"startPush",tolua_anysdk_ProtocolPush_startPush00);
   tolua_function(tolua_S,"closePush",tolua_anysdk_ProtocolPush_closePush00);
   tolua_function(tolua_S,"setAlias",tolua_anysdk_ProtocolPush_setAlias00);
   tolua_function(tolua_S,"delAlias",tolua_anysdk_ProtocolPush_delAlias00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolSocial","ProtocolSocial","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolSocial");
   tolua_function(tolua_S,"signIn",tolua_anysdk_ProtocolSocial_signIn00);
   tolua_function(tolua_S,"signOut",tolua_anysdk_ProtocolSocial_signOut00);
   tolua_function(tolua_S,"submitScore",tolua_anysdk_ProtocolSocial_submitScore00);
   tolua_function(tolua_S,"showLeaderboard",tolua_anysdk_ProtocolSocial_showLeaderboard00);
   tolua_function(tolua_S,"showAchievements",tolua_anysdk_ProtocolSocial_showAchievements00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolUser","ProtocolUser","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolUser");
   tolua_function(tolua_S,"login",tolua_anysdk_ProtocolUser_login00);
    tolua_function(tolua_S,"isLogined",tolua_anysdk_ProtocolUser_isLogined00);
   tolua_function(tolua_S,"getUserID",tolua_anysdk_ProtocolUser_getUserID00);
   tolua_function(tolua_S,"getPluginId",tolua_anysdk_ProtocolUser_getPluginId00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ProtocolShare","ProtocolShare","PluginProtocol",NULL);
  tolua_beginmodule(tolua_S,"ProtocolShare");
  tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ProtocolREC","ProtocolREC","PluginProtocol",NULL);
    tolua_beginmodule(tolua_S,"ProtocolREC");
    tolua_function(tolua_S,"startRecording",tolua_anysdk_ProtocolREC_startRecording00);
    tolua_function(tolua_S,"stopRecording",tolua_anysdk_ProtocolREC_stopRecording00);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ProtocolCrash","ProtocolCrash","PluginProtocol",NULL);
    tolua_beginmodule(tolua_S,"ProtocolCrash");
    tolua_function(tolua_S,"setUserIdentifier",tolua_anysdk_ProtocolCrash_setUserIdentifier00);
    tolua_function(tolua_S,"reportException",tolua_anysdk_ProtocolCrash_reportException00);
    tolua_function(tolua_S,"leaveBreadcrumb",tolua_anysdk_ProtocolCrash_leaveBreadcrumb00);
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ProtocolCustom","ProtocolCustom","PluginProtocol",NULL);
    tolua_beginmodule(tolua_S,"ProtocolCustom");
    tolua_endmodule(tolua_S);
    tolua_cclass(tolua_S,"ProtocolAdTracking","ProtocolAdTracking","PluginProtocol",NULL);
    tolua_beginmodule(tolua_S,"ProtocolAdTracking");
    tolua_function(tolua_S,"onRegister",tolua_anysdk_ProtocolAdTracking_onRegister00);
    tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_anysdk (lua_State* tolua_S) {
 return tolua_anysdk_open(tolua_S);
};
#endif

