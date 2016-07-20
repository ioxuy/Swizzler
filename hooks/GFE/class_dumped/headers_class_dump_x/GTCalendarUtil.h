/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class GTDateRange, NSDate, NSDateComponents, UIImage;

@interface GTCalendarUtil : _ABAddressBookAddRecord
{
    BOOL _is24h;
    NSDate *_selectedDate;
    int _selectedTimeOfDayInSeconds;
    GTDateRange *_shownDateRange;
    int _secondsFromGMT;
    NSDateComponents *_selectedDateComponents;
    UIImage *_retainedDayShadowImage;
}

+ (id)selectedDayShadowImage;
+ (id)allDayBorderImage;
+ (id)monthDayFormatter;
+ (id)weekdayWithShortSymbols;
+ (unsigned int)firstDayOfTheWeek;
+ (void)setFirstDayOfTheWeek:(unsigned int)fp8;
+ (id)uncachedImageNamed:(id)fp8;
+ (id)GTCalendarManualLocalizeString:(id)fp8 value:(id)fp12;
+ (id)GTCalendarLocalizeString:(id)fp8 value:(id)fp12;
+ (id)frameworkBundle;
+ (id)instance;
+ (void)load;
+ (void)initialize;
- (void)setRetainedDayShadowImage:(id)fp8;
- (id)retainedDayShadowImage;
- (void)setSelectedDateComponents:(id)fp8;
- (id)selectedDateComponents;
- (void)setIs24h:(BOOL)fp8;
- (BOOL)is24h;
- (void)setSecondsFromGMT:(int)fp8;
- (int)secondsFromGMT;
- (void)setShownDateRange:(id)fp8;
- (id)shownDateRange;
- (int)selectedTimeOfDayInSeconds;
- (void)setSelectedDate:(id)fp8;
- (id)selectedDate;
- (void)setSelectedTimeOfDayInSeconds:(int)fp8;
- (void)timeZoneChanged;
- (id)init;

@end

