/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GUAlertView, GUBarButtonItem, NSString, UITextField;

@interface SaveViewController : _ABAddressBookAddRecord <UITextFieldDelegate, UIAlertViewDelegate>
{
    id <SourceDataProtocol> _source;
    int _attachmentID;
    NSString *_originalAttachmentName;
    NSString *_filePath;
    NSString *_extension;
    GUAlertView *_duplicateAlertView;
    UITextField *textFieldWithFileName;
    GUBarButtonItem *cancelButton;
    GUBarButtonItem *saveButton;
}

+ (void)refreshUIForFile:(id)fp8;
+ (void)replaceSaveBothFilesFromAttachment:(struct AnAttachment)fp8 goodID:(int)fp64 withOriginalName:(id)fp68;
+ (void)replaceSaveBothFilesAtPath:(id)fp8 withOriginalName:(id)fp12;
+ (void)replaceSaveBothFilesAtPath:(id)fp8;
+ (void)replaceFileAtFilePath:(id)fp8;
+ (id)presentSaveViewControllerIn:(id)fp8 withDelegate:(id)fp12 source:(id)fp16 attachmentID:(int)fp20 rename:(BOOL)fp24;
+ (id)presentSaveViewControllerIn:(id)fp8 source:(id)fp12 attachmentID:(int)fp16 rename:(BOOL)fp20;
+ (id)presentSaveViewControllerIn:(id)fp8 withDelegate:(id)fp12 filePath:(id)fp16 originalName:(id)fp20 rename:(BOOL)fp24;
+ (void)delegate:(id)fp8 alertView:(id)fp12 clickedButtonAtIndex:(int)fp16;
- (void)setSaveButton:(id)fp8;
- (id)saveButton;
- (void)setCancelButton:(id)fp8;
- (id)cancelButton;
- (void)setTextFieldWithFileName:(id)fp8;
- (id)textFieldWithFileName;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (BOOL)textFieldShouldClear:(id)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)save;
- (void)cancel;
- (void)autoDismiss:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)reconfigureFilenameCell;
- (id)initWithSource:(id)fp8 attachmentID:(int)fp12;
- (id)initWithFilePath:(id)fp8 andOriginalName:(id)fp12;
- (void)dealloc;
- (id)getDefaultAutomationScreenName;

@end

