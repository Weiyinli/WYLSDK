//
//  WYLAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/7.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WYLAd : NSObject

@property(nonatomic,copy,readonly) NSString *placeId;

- (instancetype)initWithPlaceId:(NSString *)placeId;

@end

NS_ASSUME_NONNULL_END
