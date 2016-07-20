/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "KLMonthViewMgr.h"

@class CalendarSplitViewController, UIPopoverController;

@interface KLMonthViewMgriPad : KLMonthViewMgr
{
    CalendarSplitViewController *mainViewController;
    UIPopoverController *popover;
}

- (void)setMainViewController:(id)fp8;
- (id)mainViewController;
- (void)dealloc;
- (void)monthViewMgr:(id)fp8 tappedTile:(id)fp12 action:(id)fp16;
- (void)didChangeMonths;
- (void)dateUpdatedTo:(id)fp8;
- (void)PickAPeriod;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)securityLockWillDisplay:(id)fp8;
- (id)initWithSplitViewController:(id)fp8 model:(id)fp12 view:(id)fp16 controller:(id)fp20;
- (float)getMonthViewRowHeight_L;
- (float)getMonthViewRowHeight;
- (float)getViewWidth_L;
- (float)getViewWidth;

@end

