/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class GTCalendarDatePickerInfiniteScrollView;

@interface GTCalendarDatePickerViewController : _ABAddressBookAddRecord
{
    GTCalendarDatePickerInfiniteScrollView *_scrollView;
    int _mode;
}

- (int)mode;
- (void)setScrollView:(id)fp8;
- (id)scrollView;
- (void)timeZoneChanged;
- (void)setMode:(int)fp8;
- (void)reloadView;
- (void)loadView;
- (void)dealloc;
- (id)initWithMode:(int)fp8;

@end

