//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class NSString;

@interface SBResourceDownloadProgressView : UIView
{
    NSString *_filename;
    UIView *_coveredView;
    id <SBResourceDownloadProgressViewDelegate> _delegate;
    BOOL _dismissed;
}

+ (id)downloadViewWithParentView:(id)arg1 filename:(id)arg2;
@property(nonatomic) id <SBResourceDownloadProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void)onDismissNotification:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)dismiss;
- (void)setProgressValueObject:(id)arg1;
- (void)setProgressValue:(float)arg1;
- (void)layoutSubviews;
- (void)positionSubviews;
- (void)createSubviews;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 filename:(id)arg2;

@end

