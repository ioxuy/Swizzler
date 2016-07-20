//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface CompressedFileBrowserViewCell : UITableViewCell
{
    UIImageView *fileIcon;
    UILabel *fileName;
    UILabel *fileSizeLabel;
    UILabel *fileSizeValue;
    UILabel *fileProgressValue;
    UIImageView *padlockIcon;
    UIActivityIndicatorView *activityIndicator;
    BOOL canOpenInFileViewer;
    int _cellMode;
    UIView *cellContentView;
}

@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView;
@property(nonatomic) int cellMode; // @synthesize cellMode=_cellMode;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic) BOOL canOpenInFileViewer; // @synthesize canOpenInFileViewer;
@property(retain, nonatomic) UIImageView *padlockIcon; // @synthesize padlockIcon;
@property(retain, nonatomic) UILabel *fileProgressValue; // @synthesize fileProgressValue;
@property(retain, nonatomic) UILabel *fileSizeValue; // @synthesize fileSizeValue;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel;
@property(retain, nonatomic) UILabel *fileName; // @synthesize fileName;
@property(retain, nonatomic) UIImageView *fileIcon; // @synthesize fileIcon;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

