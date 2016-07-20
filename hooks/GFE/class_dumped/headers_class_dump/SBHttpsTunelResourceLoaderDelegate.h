//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "SBResourceLoaderDelegate.h"

@class NSString;

@interface SBHttpsTunelResourceLoaderDelegate : NSObject <SBResourceLoaderDelegate>
{
    NSString *_mainDocumentUrl;
}

@property(retain, nonatomic) NSString *mainDocumentUrl; // @synthesize mainDocumentUrl=_mainDocumentUrl;
- (void)receivedResourceLastPartForUrl:(id)arg1 resDesc:(struct SBResourceDesc *)arg2 token:(struct SBResourceRequesterToken *)arg3;
- (void)receivedResourcePart:(id)arg1 url:(id)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (void)receivedResourceFirstPartForUrl:(id)arg1 dataLen:(int)arg2 resDesc:(struct SBResourceDesc *)arg3 token:(struct SBResourceRequesterToken *)arg4;
- (void)processErrorResponseForUrl:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithMainDocumentUrlString:(id)arg1;

@end

