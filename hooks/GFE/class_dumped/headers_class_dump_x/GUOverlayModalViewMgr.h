/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIView, UIViewController, UIWindow;

@interface GUOverlayModalViewMgr : _ABAddressBookAddRecord
{
    UIView *overlayView;
    UIView *containerView;
    BOOL removing;
    float viewHeight;
    UIWindow *window;
    UIViewController *_viewController;
}

- (void)dealloc;
- (void)animationDidStop:(id)fp8;
- (void)animateContainerView:(float)fp8;
- (void)dismiss:(BOOL)fp8;
- (void)show:(BOOL)fp8;
- (id)initWithHeight:(float)fp8 window:(id)fp12;
- (id)initWithHeight:(float)fp8 withController:(id)fp12;

@end

