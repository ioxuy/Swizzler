/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "CalendarEvent.h"

@class CalendarAttendee, NSArray, NSString;

@interface CalendarEventDetail : CalendarEvent
{
    CalendarAttendee *_organizer;
    NSArray *_attendees;
    NSString *_note;
}

- (void)setNote:(id)fp8;
- (id)note;
- (void)setAttendees:(id)fp8;
- (id)attendees;
- (void)setOrganizer:(id)fp8;
- (id)organizer;
- (void)dealloc;

@end

