//
//  Wrapper.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-8-29.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Wrapper : NSObject

+(void) setAppParam:(const char*)appKey AppSecret:(const char*)appSeceret PrivateKey:(const char*)privateKey OauthLoginServer:(const char*)oauthLoginServer;

+(NSMutableDictionary*) getDeveloperInfo;

+(NSString*)pluginDecode:(const char*)str;

+(NSString*)dictToNSString:(NSMutableDictionary*)dict;

+(NSString*)getChannelId;

+(NSString*)getCustomParam;

+(void)analysisDeveloperInfo;

+ (BOOL) networkReachable;

+ (NSMutableDictionary*) getXmlInfoByFileName:(NSString*)fileName;

@end
