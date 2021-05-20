//
//  WYLSDKSetting.h
//  WYLSDK
//
//  Created by Hacker on 2021/3/24.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WYLSDKSetting : NSObject

//Default Yes
@property(class, nonatomic,assign) BOOL enableDefaultAudioSessionSetting;
//Default Yes
@property(class, nonatomic,assign) BOOL enableCAIDPermission;
//Default No
@property(class, nonatomic,assign) BOOL enableGPS;
@end

NS_ASSUME_NONNULL_END
