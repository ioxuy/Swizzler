/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString;

@interface ButtonForCalendarEvent : _ABAddressBookAddRecord <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_title;
    SEL _selectionSelector;
    id _selectorTarget;
    BOOL _enabled;
}

- (BOOL)enabled;
- (id)title;
- (void)setTitle:(id)fp8;
- (void)setEnabled:(BOOL)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)removeBackground;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 buttonTitle:(id)fp24 target:(id)fp28 selector:(SEL)fp32;

@end

