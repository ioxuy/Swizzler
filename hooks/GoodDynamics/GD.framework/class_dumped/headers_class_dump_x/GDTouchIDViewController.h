/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GDViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class GDAlertView;

@interface GDTouchIDViewController : GDViewController <UIAlertViewDelegate>
{
    BOOL _keepUI;
    BOOL _openChangePwdAfterAlertDismiss;
    struct GSSecureManagerTouchIdCallback *_touchIdCallback;
    struct GSSecureManagerSetPasswordCallback *_passwordCallback;
    GDAlertView *_gdAlertView;
}

+ (BOOL)isTouchIdSupportedByDevice;
- (void)setOpenChangePwdAfterAlertDismiss:(BOOL)fp8;
- (BOOL)openChangePwdAfterAlertDismiss;
- (void)setKeepUI:(BOOL)fp8;
- (BOOL)keepUI;
- (void)setGdAlertView:(id)fp8;
- (id)gdAlertView;
- (void)setPasswordCallback:(struct GSSecureManagerSetPasswordCallback *)fp8;
- (struct GSSecureManagerSetPasswordCallback *)passwordCallback;
- (void)setTouchIdCallback:(struct GSSecureManagerTouchIdCallback *)fp8;
- (struct GSSecureManagerTouchIdCallback *)touchIdCallback;
- (void)loadViewForAll;
- (void)loadViewForiPhone;
- (void)loadViewForiPad;
- (void)displayDisallowAlert:(id)fp8;
- (void)displayAllowAlert:(id)fp8;
- (void)closeAlertView:(BOOL)fp8;
- (void)updateVisibleAlert;
- (void)handleVisibleAlertUpdate;
- (void)updateAlert;
- (void)handleDisallowedAlertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)handleAllowedAlertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)dismissUI:(id)fp(null);
- (void)dismissIfNeeded;
- (void)openChangePassword;
- (void)setTouchIdValue:(BOOL)fp8;
- (void)showDialog:(BOOL)fp8;
- (void)updateAllViews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)dealloc;
- (void)viewDidLoad;

@end

