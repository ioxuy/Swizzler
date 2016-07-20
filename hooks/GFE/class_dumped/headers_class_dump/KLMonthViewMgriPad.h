//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "KLMonthViewMgr.h"

@class CalendarSplitViewController, UIPopoverController;

@interface KLMonthViewMgriPad : KLMonthViewMgr
{
    CalendarSplitViewController *mainViewController;
    UIPopoverController *popover;
}

@property(retain, nonatomic) CalendarSplitViewController *mainViewController; // @synthesize mainViewController;
- (void)dealloc;
- (void)monthViewMgr:(id)arg1 tappedTile:(id)arg2 action:(id)arg3;
- (void)didChangeMonths;
- (void)dateUpdatedTo:(id)arg1;
- (void)PickAPeriod;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)securityLockWillDisplay:(id)arg1;
- (id)initWithSplitViewController:(id)arg1 model:(id)arg2 view:(id)arg3 controller:(id)arg4;
- (float)getMonthViewRowHeight_L;
- (float)getMonthViewRowHeight;
- (float)getViewWidth_L;
- (float)getViewWidth;

@end

