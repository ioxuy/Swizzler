/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface SBTimerCallback : _ABAddressBookAddRecord
{
    struct ISBConstantConnectionTimerCallback *_timerCallback;
}

- (void)fireTimer;
- (id)initWithTimerCallback:(struct ISBConstantConnectionTimerCallback *)fp8;

@end

