/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString;

@interface EmailStatusIndicatorQueueItem : _ABAddressBookAddRecord
{
    NSString *text;
    BOOL playSound;
}

- (void)setPlaySound:(BOOL)fp8;
- (BOOL)playSound;
- (void)setText:(id)fp8;
- (id)text;
- (void)dealloc;
- (id)initWithText:(id)fp8 playSound:(BOOL)fp12;

@end

