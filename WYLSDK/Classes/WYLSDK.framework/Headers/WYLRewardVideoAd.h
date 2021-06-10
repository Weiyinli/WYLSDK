//
//  WYLRewardVideoAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/13.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"

NS_ASSUME_NONNULL_BEGIN
@class WYLRewardVideoAd;
@protocol WYLRewardVideoAdDelegate <NSObject>

//广告数据加载成功
- (void)rewardVideoAdDidLoad:(WYLRewardVideoAd *)rewardedVideoAd;

//视频数据缓存成功
- (void)rewardVideoAdVideoDidLoad:(WYLRewardVideoAd *)rewardedVideoAd;

//视频广告展示
- (void) rewardVideoAdDidShow:(WYLRewardVideoAd *)rewardedVideoAd;

//视频播放页关闭
- (void) rewardVideoAdDidClose:(WYLRewardVideoAd *)rewardedVideoAd;

//视频广告信息点击
- (void) rewardVideoAdDidClicked:(WYLRewardVideoAd *)rewardedVideoAd;

//奖励触发
- (void) rewardVideoAdDidRewardEffective:(WYLRewardVideoAd *)rewardedVideoAd;

//视频广告视频播放完成
- (void) rewardVideoAdDidPlayFinish:(WYLRewardVideoAd *)rewardedVideoAd;

//视频广告错误
- (void) rewardVideoAd:(WYLRewardVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;
@end
@interface WYLRewardVideoAd : WYLAd
@property(nonatomic,weak) id<WYLRewardVideoAdDelegate> delegate;

@property(nonatomic,copy) NSString *userId;
@property(nonatomic,copy) NSString *rewardName;
@property(nonatomic,assign) NSInteger rewardNum;
@property(nonatomic,strong) NSDictionary *extend;
@property(nonatomic,copy,readonly) NSString *rewardId;



- (void) loadAd;
- (void) showAdFromViewController:(UIViewController*)rootController;

@end

NS_ASSUME_NONNULL_END
