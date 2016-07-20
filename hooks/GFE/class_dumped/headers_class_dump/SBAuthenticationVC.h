//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "SBTableViewController.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, SBProgressBar, SBViewController, UILabel;

@interface SBAuthenticationVC : SBTableViewController <UITextFieldDelegate>
{
    struct list<GCFHTTPAuthInfo *, std::allocator<GCFHTTPAuthInfo *>> authInfoList;
    struct list<std::basic_string<char>, std::allocator<std::basic_string<char>>> uriList;
    struct UIKerberosCallbackHandler *krbCallbackHandler;
    SBProgressBar *_krbProgressBar;
    UILabel *_krbProgressInfoLabel;
    id _krbObserver;
    _Bool bAuthDismissNeeded;
    BOOL _rememberSwitchIsOn;
    SBViewController *_ownerVC;
    NSMutableArray *_visibleAuthCells;
}

@property(nonatomic) BOOL rememberSwitchIsOn; // @synthesize rememberSwitchIsOn=_rememberSwitchIsOn;
@property(retain, nonatomic) NSMutableArray *visibleAuthCells; // @synthesize visibleAuthCells=_visibleAuthCells;
@property(nonatomic) SBViewController *ownerVC; // @synthesize ownerVC=_ownerVC;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)safeAddAuthInfo:(struct GCFHTTPAuthInfo *)arg1;
- (void)updateKerberosProgressWithStep:(int)arg1 errorCode:(int)arg2 libErrorCode:(int)arg3;
- (id)mapKerberosLibErrorToErrorString:(int)arg1 libErrorCode:(int)arg2;
- (void)setupKerberosProgressBar;
- (id)getDomainFromOptionsDB;
- (BOOL)isAuthenticationTypeIn:(struct GCFHTTPAuthInfo *)arg1 oneOfThe:(id)arg2;
- (BOOL)isKerberosAuthentication:(struct GCFHTTPAuthInfo *)arg1;
- (BOOL)hasDomain:(struct GCFHTTPAuthInfo *)arg1;
- (struct GCFHTTPAuthInfo *)firstAuthInfo;
- (basic_string_075b6133)propertyNameForCellType:(int)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChangedAction:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)placeholderStringForCellType:(int)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)preferencesHasBeenUpdated:(id)arg1;
- (void)onStoringCredentialsSwitchChanged:(id)arg1;
- (BOOL)hasUri:(id)arg1;
- (void)clearAuthInfo;
- (void)dismiss;
- (void)onCancel;
- (void)onDone;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setFocusOnTheFirstCell;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)fillVisibleAuthCells;
- (void)initVisibleAuthCells;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

