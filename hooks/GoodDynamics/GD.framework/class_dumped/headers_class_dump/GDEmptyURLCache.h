//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@interface GDEmptyURLCache : NSURLCache
{
}

+ (void)setSharedURLCache:(id)arg1;
- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (void)setDiskCapacity:(unsigned int)arg1;

@end

