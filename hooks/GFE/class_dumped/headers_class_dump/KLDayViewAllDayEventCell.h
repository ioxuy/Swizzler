//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class AppointmentWrapper, KLDayViewAllDayEventCellView;

@interface KLDayViewAllDayEventCell : UITableViewCell
{
    KLDayViewAllDayEventCellView *customView;
    AppointmentWrapper *appointment;
    BOOL topRow;
    int appDayCount;
}

@property(nonatomic) int appDayCount; // @synthesize appDayCount;
@property(nonatomic) BOOL topRow; // @synthesize topRow;
@property(retain, nonatomic) AppointmentWrapper *appointment; // @synthesize appointment;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

