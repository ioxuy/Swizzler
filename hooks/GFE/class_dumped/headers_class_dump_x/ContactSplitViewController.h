/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GUSplitViewController.h"

@class ContactViewControlleriPad, UIViewController;

@interface ContactSplitViewController : GUSplitViewController
{
    ContactViewControlleriPad *contactMasterVC;
    UIViewController *contactDetailVC;
}

- (id)contactViewController;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)setDetailViewController:(id)fp8;
- (id)init;
- (void)dealloc;

@end

