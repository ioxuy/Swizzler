//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class Delegate;

@interface SmimeAlertView : UIAlertView <UIAlertViewDelegate>
{
    Delegate *callback;
    int tokenUsage;
    BOOL alertViewPresented;
}

@property(nonatomic) BOOL alertViewPresented; // @synthesize alertViewPresented;
@property(nonatomic) int tokenUsage; // @synthesize tokenUsage;
@property(retain, nonatomic) Delegate *callback; // @synthesize callback;
- (void)dismissAlertNow;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)didPresentAlertView:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)dealloc;

@end

