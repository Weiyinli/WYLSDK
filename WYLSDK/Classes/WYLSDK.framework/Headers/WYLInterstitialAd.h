//
//  WYLInterstitialAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/12.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WYLInterstitialAd;
@protocol WYLInterstitialAdDelegate <NSObject>
//广告请求成功
- (void)interstitialAdDidLoad:(WYLInterstitialAd *) ad;
//广告请求失败
- (void)interstitialAdFailToLoad:(WYLInterstitialAd *) ad;
//广告成功展示
- (void)interstitialAdSuccessPresentScreen:(WYLInterstitialAd *) ad;
//广告点击回调
- (void)interstitialAdDidClicked:(WYLInterstitialAd *) ad;
//广告关闭回调
- (void)interstitialAdDidDismissScreen:(WYLInterstitialAd *) ad;
//落地页已经关闭
- (void)interstitialAdDidDismissDetailPage:(WYLInterstitialAd *) ad ;
//发生错误
- (void)interstitialAdDidFail:(WYLInterstitialAd *) ad withError:(NSError *)error;

@end

@interface WYLInterstitialAd : WYLAd
//委托对象
@property(nonatomic,weak) id<WYLInterstitialAdDelegate> delegate;

//加载广告
- (void) loadAd;
- (void) showAdFromRootViewController:(UIViewController*) rootController;

@end

NS_ASSUME_NONNULL_END
