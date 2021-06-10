//
//  WYLFeedAd.h
//  WYLSDK
//
//  Created by Hacker on 2021/4/12.
//  Copyright © 2021 微引力. All rights reserved.
//

#import "WYLAd.h"
#import "WYLFeedView.h"
NS_ASSUME_NONNULL_BEGIN


@class WYLFeedAd;
@protocol WYLFeedAdDelegate <NSObject>

- (void)feedAdSuccessToLoad:(WYLFeedAd *)feedAd views:(NSArray<__kindof WYLFeedView *> *)views;

- (void)feedAdFailToLoad:(WYLFeedAd *)feedAd error:(NSError *)error;

- (void)feedAd:(WYLFeedAd *)feedAd feedAdViewDidShow:(WYLFeedView *)feedView;
- (void)feedAd:(WYLFeedAd *)feedAd feedAdViewDidClick:(WYLFeedView *)feedView;
- (void)feedAd:(WYLFeedAd *)feedAd feedAdViewDislike:(WYLFeedView *)feedView withReason:(NSString*) reason;
- (void)feedAd:(WYLFeedAd *)feedAd feedAdViewDidClosed:(WYLFeedView *)feedView;
- (void)feedAd:(WYLFeedAd *)feedAd feedAdViewDidCloseDetailController:(WYLFeedView *)feedView;

@end

@interface WYLFeedAd : WYLAd
@property(nonatomic,weak) id<WYLFeedAdDelegate> delegate;
@property(nonatomic,assign) CGSize adSize;
-(void) loadAd:(NSInteger) count;

@end

NS_ASSUME_NONNULL_END
