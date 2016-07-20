/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "CalendarEventDAOProtocol-Protocol.h"

@interface CalendarEventDAO : _ABAddressBookAddRecord <CalendarEventDAOProtocol>
{
}

+ (id)calendarEventDAO;
- (id)getCalendarEventDetailWithCalendarOccurrence:(id)fp8;
- (id)getCalendarOccurrencesForCalendarEventWithRecordId:(unsigned int)fp8 startDate:(id)fp12 toEndDate:(id)fp16;
- (id)getCalendarOccurrencesFromStartDate:(id)fp8 toEndDate:(id)fp12 lazy:(BOOL)fp16;

@end

