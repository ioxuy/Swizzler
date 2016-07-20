/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GoodTrustServicesHandlerContext : _ABAddressBookAddRecord
{
    id <GoodTrustServicesHandlerObserver> _observer;
    int _service;
}

+ (id)base64ToPlainData:(id)fp8;
- (void)setService:(int)fp8;
- (int)service;
- (void)setObserver:(id)fp8;
- (id)observer;
- (void)requestCanceled;
- (void)errorOccured:(int)fp8 withType:(int)fp12;
- (void)requestSent:(id)fp8;
- (void)responseReceived:(id)fp8;
- (void)dealloc;
- (id)initWithObserver:(id)fp8 andService:(int)fp12;

@end

