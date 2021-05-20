//
//  WYLSDK.h
//  WYLSDK
//
//  Created by Hacker on 2021/3/18.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <Foundation/Foundation.h>


#if __has_include(<WYLModulebd/WYLModulebd.h>)
#import <WYLModulebd/WYLModulebd.h>

#endif
//! Project version number for WYLSDK.
FOUNDATION_EXPORT double WYLSDKVersionNumber;

//! Project version string for WYLSDK.
FOUNDATION_EXPORT const unsigned char WYLSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WYLSDK/PublicHeader.h>

#import <WYLSDK/WYLSDKManager.h>
#import <WYLSDK/WYLSDKSetting.h>
#import <WYLSDK/WYLAd.h>
#import <WYLSDK/WYLInterstitialAd.h>
#import <WYLSDK/WYLFullVideoAd.h>
#import <WYLSDK/WYLBannerView.h>
#import <WYLSDK/WYLFeedAd.h>
#import <WYLSDK/WYLFeedFullVideoAd.h>
#import <WYLSDK/WYLRewardVideoAd.h>
#import <WYLSDK/WYLPrerollAd.h>

