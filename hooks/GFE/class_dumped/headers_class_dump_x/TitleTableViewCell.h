/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class GUTextField, UIButton;

@interface TitleTableViewCell : _ABAddressBookAddRecord
{
    GUTextField *_titleTextField;
    UIButton *_checkbox;
}

- (void)setCheckbox:(id)fp8;
- (id)checkbox;
- (void)setTitleTextField:(id)fp8;
- (id)titleTextField;
- (BOOL)resignFirstResponder;
- (void)selectCheckbox:(BOOL)fp8;
- (void)setTitlePlaceholder:(id)fp8 withColor:(id)fp12;
- (void)setTitleText:(id)fp8;
- (void)dealloc;

@end

