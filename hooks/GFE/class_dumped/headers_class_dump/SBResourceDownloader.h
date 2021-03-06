//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "SBResourceDownloadProgressViewDelegate.h"
#import "SBResourceDownloaderBaseDelegate.h"

@class SBResourceDownloadProgressView, SBResourceDownloaderBase, SBViewController;

@interface SBResourceDownloader : NSObject <SBResourceDownloaderBaseDelegate, SBResourceDownloadProgressViewDelegate>
{
    SBResourceDownloadProgressView *_progressView;
    id <SBResourceDataContextUIEventReceiver> _delegate;
    SBViewController *_sbViewController;
    SBResourceDownloaderBase *_downloader;
}

@property(retain, nonatomic) SBResourceDownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) id <SBResourceDataContextUIEventReceiver> delegate; // @synthesize delegate=_delegate;
- (void)didCancelDownload;
- (float)countProgressValue;
- (void)receivedErrorResponseForUrl:(id)arg1 error:(id)arg2;
- (void)receivedEmptyResponseForUrl:(id)arg1;
- (void)wasRedirectedFromUrl:(id)arg1 toUrl:(id)arg2;
- (void)lastDataPartReceivedWithUrl:(id)arg1;
- (void)dataPartReceivedWithUrl:(id)arg1 dataPart:(id)arg2;
- (void)firstDataPartReceivedWithUrl:(id)arg1 dataLen:(int)arg2 handlersToAdd:(id *)arg3 stop:(char *)arg4;
- (void)downloadStoppedWithUrl:(id)arg1;
- (void)downloadStartedWithUrl:(id)arg1;
- (void)dismissProgressView;
- (void)stopDownloadingUserCanceled:(BOOL)arg1;
- (void)cleanUp;
- (BOOL)isDownloading;
- (BOOL)startDownloading:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithSbViewController:(id)arg1;

@end

