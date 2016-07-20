//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class GUTextField, UIButton;

@interface TitleTableViewCell : UITableViewCell
{
    GUTextField *_titleTextField;
    UIButton *_checkbox;
}

@property(retain, nonatomic) UIButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain, nonatomic) GUTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (BOOL)resignFirstResponder;
- (void)selectCheckbox:(BOOL)arg1;
- (void)setTitlePlaceholder:(id)arg1 withColor:(id)arg2;
- (void)setTitleText:(id)arg1;
- (void)dealloc;

@end

