//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class PriorityTableViewCell, UIPickerView;

@interface PriorityPickerTableViewCell : UITableViewCell
{
    UIPickerView *_pickerView;
    PriorityTableViewCell *_assignedPriorityCell;
}

@property(retain, nonatomic) PriorityTableViewCell *assignedPriorityCell; // @synthesize assignedPriorityCell=_assignedPriorityCell;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (int)selectedRow;
- (void)selectRow:(int)arg1;
- (void)dealloc;

@end

