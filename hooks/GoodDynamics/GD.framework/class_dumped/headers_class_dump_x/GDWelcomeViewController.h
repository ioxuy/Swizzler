/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GDStartViewController.h"

@class GDActivityIndicatorView;

@interface GDWelcomeViewController : GDStartViewController
{
    GDActivityIndicatorView *_activityIndicator;
}

- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (void)dealloc;
- (void)nextButtonPressed;
- (void)initInputUIData;
- (void)didReceiveMemoryWarning;
- (void)updateUIToOrientation:(int)fp8;
- (void)makeiPadLayout:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

