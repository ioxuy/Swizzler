/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol GTCalendarViewDataSource <NSObject>
- (void)removeFilteredCache:(id)fp8;
- (id)calendarListFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)allDayFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)filteredCacheForDay:(id)fp8 delegate:(id)fp12;
- (id)compositeFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)filteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
@end

