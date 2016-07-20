/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, UILabel;

@interface GUTextView : _ABAddressBookAddRecord
{
    UILabel *_placeholderLabel;
    NSString *_placeholder;
}

- (id)placeholder;
- (void)textDidChange:(id)fp8;
- (void)setText:(id)fp8;
- (void)setPlaceholder:(id)fp8;
- (id)placeholderColor;
- (void)setPlaceholderColor:(id)fp8;
- (void)createPlaceholderLabel;
- (BOOL)textViewTapped:(id)fp8;
- (void)setupViewDefaults;
- (void)scrollToVisibleCaretAnimated:(BOOL)fp8;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8 textContainer:(id)fp24;
- (id)init;

@end

