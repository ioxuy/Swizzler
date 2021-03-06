/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "RoundedCornerTableViewController.h"

#import "SendLogCommandDelegate-Protocol.h"

@class SendLogCommand, UIButton, UITextView, UIView;

@interface AboutScreenVC : RoundedCornerTableViewController <SendLogCommandDelegate>
{
    SendLogCommand *ftp;
    UIButton *_button;
    UITextView *_textView;
    UIView *_aboutTextView;
}

- (void)setAboutTextView:(id)fp8;
- (id)aboutTextView;
- (void)setTextView:(id)fp8;
- (id)textView;
- (void)setButton:(id)fp8;
- (id)button;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)handleSendLogBackgroundComplete;
- (void)handleSendLogCommandOkCancel;
- (void)handleSendLogCommandBackground;
- (void)handleSendLogCommandResume;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)updateFrames;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)sendLogs:(id)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)getDefaultAutomationScreenName;

@end

