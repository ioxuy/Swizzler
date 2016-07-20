//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RoundedCornerTableViewController.h"

#import "UITextFieldDelegate.h"

@class CellWithSecureTextField, UINavigationController;

@interface ConfirmPassword : RoundedCornerTableViewController <UITextFieldDelegate>
{
    struct CSecurityManager *securityManager;
    UINavigationController *prefController;
    BOOL showCancelButton;
    CellWithSecureTextField *_cellTextField;
}

@property(retain, nonatomic) CellWithSecureTextField *cellTextField; // @synthesize cellTextField=_cellTextField;
@property(nonatomic) BOOL showCancelButton; // @synthesize showCancelButton;
@property(nonatomic) UINavigationController *prefController; // @synthesize prefController;
@property(nonatomic) struct CSecurityManager *securityManager; // @synthesize securityManager;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)ValidatePassword:(id)arg1;
- (void)textFieldDidChange;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)dismiss;
- (void)presentSecurityVC;
- (void)presentSmartCardSetup;
- (void)cancel:(id)arg1;
- (void)viewDidLoad;
- (id)getDefaultAutomationScreenName;

@end

