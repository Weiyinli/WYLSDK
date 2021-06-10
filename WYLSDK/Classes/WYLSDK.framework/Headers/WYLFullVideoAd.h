//
//  WYLFullVideoAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/12.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WYLFullVideoAd;
@protocol WYLFullVideoAdDelegate <NSObject>
//广告请求成功
- (void)fullVideoAdDidLoad:(WYLFullVideoAd *) ad;
//广告请求失败
- (void)fullVideoAdFailToLoad:(WYLFullVideoAd *) ad;
//广告成功展示
- (void)fullVideoAdSuccessPresentScreen:(WYLFullVideoAd *) ad;
//广告点击回调
- (void)fullVideoAdDidClicked:(WYLFullVideoAd *) ad;
//广告关闭回调
- (void)fullVideoAdDidDismissScreen:(WYLFullVideoAd *) ad;
//落地页已经关闭
- (void)fullVideoAdDidDismissDetailPage:(WYLFullVideoAd *) ad ;
//发生错误
- (void)fullVideoAdDidFail:(WYLFullVideoAd *) ad withError:(NSError *)error;

@end

@interface WYLFullVideoAd : WYLAd
//委托对象
@property(nonatomic,weak) id<WYLFullVideoAdDelegate> delegate;

//加载广告
- (void) loadAd;
- (void) showAdFromRootViewController:(UIViewController*) rootController;
@end

NS_ASSUME_NONNULL_END
