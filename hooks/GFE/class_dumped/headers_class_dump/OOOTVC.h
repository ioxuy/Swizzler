//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RoundedCornerTableViewController.h"

#import "AutoResponseDelegate.h"
#import "OOODatesViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class AutoResponse, CellWithDates, CellWithGUTextView, CellWithSwitch, NSArray, OOODatesViewController, OOOHelper, UIPopoverController;

@interface OOOTVC : RoundedCornerTableViewController <AutoResponseDelegate, OOODatesViewControllerDelegate, UIPopoverControllerDelegate>
{
    OOOHelper *_oooHelper;
    CellWithSwitch *_oooSwitch;
    CellWithGUTextView *_oooTextView;
    CellWithDates *_oooDates;
    UIPopoverController *_datesPopoverController;
    struct shared_ptr<UIAListener> _dbListener;
    AutoResponse *_autoResponseController;
    OOODatesViewController *_datesVC;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) OOODatesViewController *datesVC; // @synthesize datesVC=_datesVC;
@property(retain, nonatomic) AutoResponse *autoResponseController; // @synthesize autoResponseController=_autoResponseController;
@property(retain, nonatomic) UIPopoverController *datesPopoverController; // @synthesize datesPopoverController=_datesPopoverController;
@property(retain, nonatomic) CellWithDates *oooDates; // @synthesize oooDates=_oooDates;
@property(retain, nonatomic) CellWithGUTextView *oooTextView; // @synthesize oooTextView=_oooTextView;
@property(retain, nonatomic) CellWithSwitch *oooSwitch; // @synthesize oooSwitch=_oooSwitch;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)enabledSections;
- (void)handleOutOfOfficeUpdate;
- (void)didReceiveDbNotification:(id)arg1;
- (void)stopListeningToDbNotifications;
- (void)listenToDbNotifications;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellWithLabel;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)securityLockWillDisplay;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)editingCancelled;
- (void)changeLeavingDate:(id)arg1 andReturningDate:(id)arg2;
- (void)hidePopoverAnimated:(BOOL)arg1;
- (void)changeAutoResponse:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)getDefaultAutomationScreenName;

@end

