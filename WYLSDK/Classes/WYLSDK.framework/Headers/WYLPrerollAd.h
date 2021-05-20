//
//  WYLPrerollAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/13.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"

NS_ASSUME_NONNULL_BEGIN
@class WYLPrerollAd;
@protocol WYLPrerollAdDelegate <NSObject>

//广告加载成功
- (void)prerollAdDidLoad:(WYLPrerollAd *)prerollAd;

//广告加载失败
- (void)prerollAdFailToLoad:(WYLPrerollAd *)prerollAd;

//广告展示
- (void) prerollAdDidStart:(WYLPrerollAd *)prerollAd;

//广告展示结束
- (void) prerollAdDidFinish:(WYLPrerollAd *)prerollAd;

//广告信击
- (void) prerollAdDidClicked:(WYLPrerollAd *)prerollAd;

//广告错误
- (void) prerollAd:(WYLPrerollAd *)prerollAd didFailWithError:(NSError *)error;

@end

@interface WYLPrerollAd : WYLAd
//委托对象
@property(nonatomic,weak) id<WYLPrerollAdDelegate> delegate;
//设置贴片baseview
@property(nonatomic,weak) UIView *renderView;

@property(nonatomic,weak) UIViewController* viewController;

//加载广告
- (void) loadAd;
- (void) closeAd;

@end

NS_ASSUME_NONNULL_END
