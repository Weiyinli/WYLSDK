//
//  WYLBannerView.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/12.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class WYLBannerView;
@protocol WYLBannerViewDelegate <NSObject>
//广告请求成功
- (void)bannerViewAdDidLoad:(WYLBannerView *) bannerView;
//广告请求失败
- (void)bannerViewAdFailToLoad:(WYLBannerView *) bannerView;
//广告成功展示
- (void)bannerViewAdSuccessPresentScreen:(WYLBannerView *) bannerView;
//广告点击回调
- (void)bannerViewAdDidClicked:(WYLBannerView *) bannerView;
//广告关闭回调
- (void)bannerViewAdDidDismissScreen:(WYLBannerView *) bannerView;
//落地页已经关闭
- (void)bannerViewAdDidDismissDetailPage:(WYLBannerView *) bannerView;
//发生错误
- (void)bannerViewAdDidFail:(WYLBannerView *) bannerView withError:(NSError *)error;

@end

@interface WYLBannerView : UIView
@property(nonatomic,weak) id<WYLBannerViewDelegate> delegate;

@property(nonatomic,weak) UIViewController *viewController;

- (instancetype)initWithFrame:(CGRect)frame
                      placeId:(NSString *)placeId;

// 拉取并展示广告
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
