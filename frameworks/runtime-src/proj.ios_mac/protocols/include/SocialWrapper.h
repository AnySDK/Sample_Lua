//
//  SocialWrapper.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-10-9.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    kScoreSubmitSucceed = 1,
    kScoreSubmitfail,
    kAchUnlockSucceed,
    kAchUnlockFail,
    kSocialSignInSucceed,
    kSocialSignInFail,
    kSocialSignOutSucceed,
    kSocialSignOutFail,
    kSocialAuthenticationChangeSucceed,
    kSocialAuthenticationChangeFail,
    kSocialRetrieveFriendsSucceed,
    kSocialRetrieveFriendsFail,
    kSocialLoadAchievementSucceed,
    kSocialLoadAchievementFail
} SocialRetCode;

typedef enum : NSUInteger{
    PlayerScopeGlobal = 0,
    PlayerScopeFriendsOnly = 0
} PlayerScope;
    
typedef enum : NSUInteger{
    TimeScopeToday = 0,
    TimeScopeWeek,
    TimeScopeAllTime
} TimeScope;

@interface SocialWrapper : NSObject

+ (void) onSocialResult:(id)pPlugin retCode:(int)ret retMsg:(NSString*)msg;

@end
