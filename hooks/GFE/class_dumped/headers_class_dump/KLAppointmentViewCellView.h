//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class AppointmentWrapper, UIViewController;

@interface KLAppointmentViewCellView : UIView
{
    AppointmentWrapper *appWrapper;
    BOOL highlighted;
    UIViewController *controller;
    BOOL showDetails;
}

@property(nonatomic) BOOL showDetails; // @synthesize showDetails;
@property(nonatomic) UIViewController *controller; // @synthesize controller;
@property(nonatomic) AppointmentWrapper *appWrapper; // @synthesize appWrapper;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

