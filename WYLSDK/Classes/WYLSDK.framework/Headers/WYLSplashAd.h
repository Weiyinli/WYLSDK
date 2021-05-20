//
//  WYLSplashAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/3/24.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WYLAd.h"
NS_ASSUME_NONNULL_BEGIN

@class WYLSplashAd;
@protocol WYLSplashAdDelegate <NSObject>
//广告请求成功
- (void)splashDidLoad:(WYLSplashAd *) splash;
//开屏广告成功展示
- (void)splashSuccessPresentScreen:(WYLSplashAd *) splash;
//开屏广告点击回调
- (void)splashDidClicked:(WYLSplashAd *) splash;
//开屏广告关闭回调
- (void)splashDidDismissScreen:(WYLSplashAd *) splash;
//广告落地页已经关闭
- (void)splashDidDismissDetailPage:(WYLSplashAd *) splash ;
//广告发生错误
- (void)splashDidFail:(WYLSplashAd *) splash withError:(NSError *)error;

@end

@interface WYLSplashAd : WYLAd
//委托对象
@property(nonatomic,weak) id<WYLSplashAdDelegate> delegate;
//广告请求超时时间，默认3s，单位s
@property(nonatomic,assign) NSTimeInterval timeout;



//加载展示广告，
- (void)loadAndshowInWindow:(UIWindow *)window withBottomView:(nullable UIView *)bottomView;

@end

NS_ASSUME_NONNULL_END
