//
//  SdkHttpListener.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-9-9.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>

//@protocol  <NSObject>
@protocol SdkHttpListener <NSObject>

- (void) onResponse:(NSString*)response;
- (void) onError;

@end
