//
//  UserWrapper.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-9-4.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InterfaceUser.h"


typedef enum : NSUInteger {
    ACTION_RET_INIT_SUCCESS = 0,
    ACTION_RET_INIT_FAIL,
    ACTION_RET_LOGIN_SUCCESS,
    ACTION_RET_LOGIN_TIMEOUT,
    ACTION_RET_LOGIN_NO_NEED,
    ACTION_RET_LOGIN_FAIL,
    ACTION_RET_LOGIN_CANCEL,
    ACTION_RET_LOGOUT_SUCCESS,
    ACTION_RET_LOGOUT_FAIL,
    ACTION_RET_PLATFORM_ENTER,
    ACTION_RET_PLATFORM_BACK,
    ACTION_RET_PAUSE_PAGE,
    ACTION_RET_EXIT_PAGE,
    ACTION_RET_ANTIADDICTIONQUERY,
    ACTION_RET_REALNAMEREGISTER,
    ACTION_RET_ACCOUNTSWITCH_SUCCESS,
    ACTION_RET_ACCOUNTSWITCH_FAIL
} ACTION_RET;

@interface UserWrapper : NSObject

+ (void) onActionResult:(id)pPlugin retCode:(int)ret retMsg:(NSString*)msg;

+ (NSString*) getLoginServerID;

+ (NSString*) getLoginServerIP;

+ (void) getAccessToken:(NSMutableDictionary*)data target:(id)target sel:(SEL)sel;

@end
    
