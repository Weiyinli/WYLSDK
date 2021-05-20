//
//  WYLSDKManager.h
//  WYLSDK
//
//  Created by Hacker on 2021/5/18.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WYLSDKManager : NSObject
+(void) registerAppId:(NSString*) appId;
+(BOOL) hasInit;
@end

NS_ASSUME_NONNULL_END
