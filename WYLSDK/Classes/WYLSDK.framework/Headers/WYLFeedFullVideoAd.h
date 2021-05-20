//
//  WYLFeedFullVideoAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/12.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"
#import "WYLFeedFullVideoView.h"

typedef NS_ENUM(NSUInteger, WYLVideoPlayerStatus) {
    WYLVideoPlayerStatusDefalt = 0,         // 初始状态
    WYLVideoPlayerStatusLoading = 1,         // 加载
    WYLVideoPlayerStatusPlaying = 2,         // 播放
    WYLVideoPlayerStatusPaused = 3,          // 暂停
    WYLVideoPlayerStatusError = 4,           // 出错
    WYLVideoPlayerStatusStoped = 5,          // 停止
};

NS_ASSUME_NONNULL_BEGIN
@class WYLFeedFullVideoAd;
@protocol WYLFeedFullVideoAdDelegate <NSObject>

- (void)feedFullVideoAdSuccessToLoad:(WYLFeedFullVideoAd *)fullVideoAd views:(NSArray<__kindof WYLFeedFullVideoView *> *)views;

- (void)feedFullVideoAdFailToLoad:(WYLFeedFullVideoAd *)fullVideoAd error:(NSError *)error;

- (void)feedFullVideoAd:(WYLFeedFullVideoAd *)fullVideoAd feedAdViewWillShow:(WYLFeedFullVideoView *)videoView;

//视频广告播放状态
- (void)feedFullVideoAdPlayerStateDidChanged:(WYLFeedFullVideoAd *)fullVideoAd view:(WYLFeedFullVideoView*) videoView state:(WYLVideoPlayerStatus) playerState;

//视频广告播放完毕
- (void)feedFullVideoAdPlayerDidPlayFinish:(WYLFeedFullVideoAd *)fullVideoAd view:(WYLFeedFullVideoView*) videoView;

- (void)feedFullVideoAd:(WYLFeedFullVideoAd *)fullVideoAd feedAdViewDidClick:(WYLFeedFullVideoView *)videoView;

- (void)feedFullVideoAd:(WYLFeedFullVideoAd *)fullVideoAd feedAdViewDidClosed:(WYLFeedFullVideoView *)videoView;
- (void)feedFullVideoAd:(WYLFeedFullVideoAd *)fullVideoAd feedAdViewDidCloseDetailController:(WYLFeedFullVideoView *)videoView;

@end
@interface WYLFeedFullVideoAd : WYLAd
@property(nonatomic,weak) id<WYLFeedFullVideoAdDelegate> delegate;
@property(nonatomic,assign) CGSize adSize;
-(void) loadAd:(NSInteger) count;
@end

NS_ASSUME_NONNULL_END
