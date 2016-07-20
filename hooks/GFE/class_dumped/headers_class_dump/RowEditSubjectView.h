//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowView.h"

@class GUAttachmentButton, NSString, UILabel, UITextField;

@interface RowEditSubjectView : RowView
{
    UILabel *_subjectLabel;
    UITextField *_subjectTextView;
    GUAttachmentButton *_attachmentButton;
    unsigned int _attachmentsCount;
}

@property(nonatomic) unsigned int attachmentsCount; // @synthesize attachmentsCount=_attachmentsCount;
@property(readonly, nonatomic) GUAttachmentButton *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(readonly, nonatomic) UITextField *subjectTextView; // @synthesize subjectTextView=_subjectTextView;
- (float)widthForTextField;
- (void)showAttachmentButton:(BOOL)arg1;
@property(retain, nonatomic) NSString *subject;
- (void)layoutSubviews;
- (void)layoutSubjectTextView;
- (void)layoutSubjectLabel;
- (void)setContentSizeCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

