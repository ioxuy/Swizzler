/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class CopyableTableViewCell, NSString, UITextField, UITextView, UIWebView;

@interface CellContainer : _ABAddressBookAddRecord
{
    CopyableTableViewCell *cell;
    UITextField *textField;
    UITextView *textView;
    UIWebView *webView;
    float height;
    NSString *value;
    int fieldID;
    int flag;
}

- (void)setWebView:(id)fp8;
- (id)webView;
- (void)setFieldID:(int)fp8;
- (int)fieldID;
- (void)setFlag:(int)fp8;
- (int)flag;
- (void)setValue:(id)fp8;
- (id)value;
- (void)setHeight:(float)fp8;
- (float)height;
- (void)setTextView:(id)fp8;
- (id)textView;
- (void)setTextField:(id)fp8;
- (id)textField;
- (void)setCell:(id)fp8;
- (id)cell;
- (void)dealloc;
- (id)initWithValue:(id)fp8;

@end

