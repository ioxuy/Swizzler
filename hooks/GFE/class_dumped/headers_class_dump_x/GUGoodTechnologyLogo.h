/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UIImageView, UILabel;

@interface GUGoodTechnologyLogo : _ABAddressBookAddRecord
{
    UIImageView *_logo;
    UILabel *_title;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setLogo:(id)fp8;
- (id)logo;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)addSubview:(id)fp8;
- (void)setupView;
- (void)dealloc;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

