//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIActionSheet.h"

@class NSIndexPath, UIView;

@interface DocumentsActionSheet : UIActionSheet
{
    UIView *_blockedView;
    NSIndexPath *indexPathOfInitiatingDocument;
}

@property(retain, nonatomic) UIView *blockedView; // @synthesize blockedView=_blockedView;
@property(retain, nonatomic) NSIndexPath *indexPathOfInitiatingDocument; // @synthesize indexPathOfInitiatingDocument;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 andBlockView:(id)arg3;
- (void)cancelActionSheet;
- (id)init;

@end
