//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "SendLogCommandDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class CellWithGUTextView, GUBarButtonItem, NSString, SendLogCommand, UILabel, UISwitch, UITableView, UITableViewCell;

@interface SendFeedbackViewController : UIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, SendLogCommandDelegate>
{
    SendLogCommand *_sendLogCommand;
    int _selectedType;
    UILabel *_sendLogs;
    UISwitch *_logSwitch;
    UITableView *_feedbackTableView;
    GUBarButtonItem *_sendButton;
    CellWithGUTextView *_cellWithText;
    UITableViewCell *_footerCell;
    NSString *_feedbackText;
    unsigned short _sentEmailRecNum;
}

@property(retain, nonatomic) NSString *feedbackText; // @synthesize feedbackText=_feedbackText;
@property(retain, nonatomic) CellWithGUTextView *cellWithText; // @synthesize cellWithText=_cellWithText;
@property(retain, nonatomic) UITableView *feedbackTableView; // @synthesize feedbackTableView=_feedbackTableView;
@property(retain, nonatomic) GUBarButtonItem *sendButton; // @synthesize sendButton=_sendButton;
- (void)dealloc;
- (void)handleSendLogCommandBackground;
- (void)handleSendLogCommandOkCancel;
- (void)handleSendLogCommandResume;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)sendFeedbackAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollIntoView:(id)arg1;
- (void)screenHeightReducedBy:(float)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)getDefaultAutomationScreenName;

@end

