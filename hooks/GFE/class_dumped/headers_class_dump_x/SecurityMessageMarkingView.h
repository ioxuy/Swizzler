/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIButton, UILabel, UIView;

@interface SecurityMessageMarkingView : _ABAddressBookAddRecord
{
    UILabel *_markingTitle;
    UILabel *_markingMessage;
    UIButton *_markingSelection;
    UIView *_separatorLine;
}

- (id)markingMessage;
- (id)markingSelection;
- (void)setContentSizeCategory:(id)fp8;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8 andDelegate:(id)fp24;
- (void)dealloc;

@end
