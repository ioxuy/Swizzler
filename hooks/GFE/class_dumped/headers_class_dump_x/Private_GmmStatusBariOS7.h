/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GmmStatusBar.h"

@class CALayer, UIView;

@interface Private_GmmStatusBariOS7 : GmmStatusBar
{
    CALayer *_topBorder;
    UIView *_flashingView;
}

- (void)setFlashingView:(id)fp8;
- (id)flashingView;
- (void)setTopBorder:(id)fp8;
- (id)topBorder;
- (void)animationDidStart:(id)fp8;
- (void)cancelFlashAnimation;
- (void)startFlashAniamtionWithDelay:(float)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)layoutSubviews;

@end

