//
//  JsonParser.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-9-17.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JsonParser : NSObject

+(NSString*)parseJsonForNSKey:(NSString*)data key:(NSString*)key;
+(NSString*)parseJsonForNSKey:(NSString*)data key:(NSString*)key key2:(NSString*)key2;
+(NSString*)parseJsonForNSKey:(NSString*)data key:(NSString*)key key2:(NSString*)key2 key3:(NSString*)key3;

+(const char*)parseJsonForKey:(const char*)data key:(const char*)key;
+(const char*)parseJsonForKey:(const char*)data key:(const char*)key key2:(const char*)key2;
+(const char*)parseJsonForKey:(const char*)data key:(const char*)key key2:(const char*)key2 key3:(const char*)key3;

@end
