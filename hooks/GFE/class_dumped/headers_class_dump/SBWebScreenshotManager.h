//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSMutableDictionary, UIImage;

@interface SBWebScreenshotManager : NSObject
{
    UIImage *_thumbnailEmptyImage;
    NSMutableDictionary *_thumbnailDictionary;
    struct CGSize _thumbnailSize;
}

@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSMutableDictionary *thumbnailDictionary; // @synthesize thumbnailDictionary=_thumbnailDictionary;
@property(retain, nonatomic) UIImage *thumbnailEmptyImage; // @synthesize thumbnailEmptyImage=_thumbnailEmptyImage;
- (id).cxx_construct;
- (id)imageForTag:(int)arg1;
- (void)saveImagesForVCs:(id)arg1;
- (BOOL)saveImageForVC:(id)arg1;
- (void)initializeImageForTag:(int)arg1;
- (id)screenshotFileNameForTag:(int)arg1;
- (id)screenshotImageForVC:(id)arg1;
- (void)dealloc;
- (id)init;

@end

