//
//  AdsWrapper.h
//  PluginProtocol
//
//  Created by cocos2dx on 14-8-29.
//  Copyright (c) 2014年 cocos2dx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum{
    AD_TYPE_BANNER = 0,
    AD_TYPE_FULLSCREEN,
    AD_TYPE_MOREAPP,
    AD_TYPE_OFFERWALL
} ADS_TYPE;

typedef enum {
    POS_CENTER = 0,
    POS_TOP,
    POS_TOP_LEFT,
    POS_TOP_RIGHT,
    POS_BOTTOM,
    POS_BOTTOM_LEFT,
    POS_BOTTOM_RIGHT
}AD_POS;

typedef enum {
    RESULT_CODE_AdsReceived = 0,    // The ad is received
    RESULT_CODE_AdsShown, // The advertisement shown
    RESULT_CODE_AdsDismissed, // The advertisement
    // dismissed
    RESULT_CODE_PointsSpendSucceed, // The points
    // spend succeed
    RESULT_CODE_PointsSpendFailed, // The points
    // spend failed
    RESULT_CODE_NetworkError, // Network error
    RESULT_CODE_UnknownError, // Unknown error
    RESULT_CODE_OfferWallOnPointsChanged, // Change the point of offerwall
}AD_RESULT_CODE;

@interface AdsWrapper : NSObject

+ (UIViewController *)getCurrentRootViewController;

+ (UIWindow*) getTopWindow;

+ (void)onAdsResult:(id)target retCode:(int)code msg:(NSString*)msg;

+ (void) addAdView:(UIView*) view atPos:(AD_POS) pos;

+ (NSString*)getAdNameWithType:(int)adType;

@end
