//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSOperationQueue;

@interface SBDatabaseManager : NSObject
{
    BOOL bTerminating;
    NSOperationQueue *databaseQueue;
}

+ (id)sharedInstance;
@property BOOL bTerminating; // @synthesize bTerminating;
@property(retain, nonatomic) NSOperationQueue *databaseQueue; // @synthesize databaseQueue;
- (void)queueBlock:(CDUnknownBlockType)arg1;
- (void)gracefulShutdown;
- (void)terminate;
- (void)dealloc;
- (id)init;

@end

