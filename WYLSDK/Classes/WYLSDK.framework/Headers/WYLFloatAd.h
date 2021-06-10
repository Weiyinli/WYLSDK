//
//  WYLFloatAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/6/9.
//  Copyright © 2021 微引力. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WYLAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WYLFloatAd;
@protocol WYLFloatAdDelegate <NSObject>


//广告请求成功
- (void)floatAdDidLoad:(WYLFloatAd *) floatAd;
//开屏广告成功展示
- (void)floatAdSuccessPresentScreen:(WYLFloatAd *) floatAd;
//开屏广告点击回调
- (void)floatAdDidClicked:(WYLFloatAd *) floatAd;
//开屏广告关闭回调
- (void)floatAdDidClosed:(WYLFloatAd *) floatAd;

//广告发生错误
- (void)floatAdDidFail:(WYLFloatAd *) floatAd withError:(NSError *)error;

@end

@interface WYLFloatAd : WYLAd

//委托对象
@property(nonatomic,weak) id<WYLFloatAdDelegate> delegate;
/** 必传
 悬浮素材显示的位置，{top, left, bottom, right}，表示在当前视图控制器的view上显示时的边距（除去导航栏高度）。水平、垂直方向分别只会有一个值生效，例如{TAT_FlOAT_UNDEFINED, TAT_FlOAT_UNDEFINED, 32, 16}表示显示在右下角。若有负值则表示超出view的距离。
 */
@property (nonatomic, assign) UIEdgeInsets displayPosition;
/** 必传
 设置显示悬浮素材的视图控制器
 */
@property (nonatomic, weak) UIViewController *parentViewController;


-(void) showFloatAd;

/**
 * 为了避免浮标被遮挡，在添加其他可能遮挡的view后，调用此方法将浮标移到视图层级的最前面。
 */
- (void)bringViewToFront;


/**
 * 主动移除掉悬浮升级广告view
 */
- (BOOL)removeFloatAdView;

@end

NS_ASSUME_NONNULL_END
