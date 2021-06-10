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
/**
 当用户登录之后设置用户ID，切换账号登录时记得重新设置 ;userId 用户唯一标识，含奖品的活动需要用到
*/
@property(class, nonatomic,copy) NSString *userId;
@end

NS_ASSUME_NONNULL_END
