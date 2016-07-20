/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableArray;

@interface IPResolverCache : _ABAddressBookAddRecord
{
    NSMutableArray *m_ipAddressCacheEntries;
    double m_maxExpiryInterval;
    int m_maxEntries;
}

- (void)clearEntries;
- (void)deleteRequiredEntries;
- (_Bool)checkIfEntryCanBeUsed:(id)fp8;
- (_Bool)getIPAddressList:(id)fp8 IPAddressList:(id)fp12;
- (id)getIPAddressListCacheEntry:(id)fp8;
- (_Bool)saveTheIPList:(id)fp8 IPAddressList:(id)fp12;
- (void)setProperties:(double)fp8 MaxEntries:(int)fp16;
- (id)init;

@end

