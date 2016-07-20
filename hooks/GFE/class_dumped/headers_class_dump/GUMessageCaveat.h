//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "GUMessageMarkingProtocol.h"

@class NSArray, NSDictionary;

@interface GUMessageCaveat : NSObject <GUMessageMarkingProtocol>
{
    NSDictionary *options;
    NSArray *caveatsMarkingsCache;
}

+ (id)instance;
@property(retain) NSArray *caveatsMarkingsCache; // @synthesize caveatsMarkingsCache;
@property(retain) NSDictionary *options; // @synthesize options;
- (void)dealloc;
- (id)messageMarkingNames;
- (id)markingTitle;
- (BOOL)isEnabled;
- (int)defaultMessageMarking;
- (id)bottomBody:(int)arg1;
- (id)topBody:(int)arg1;
- (id)subject:(int)arg1;
- (id)select:(int)arg1;
- (BOOL)markingValid:(int)arg1;
- (int)numberOfMarkings;
- (int)noneMarking;
- (BOOL)isNoneMarking:(int)arg1;
- (BOOL)areMarkingsProvidedFromGMC;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)optionsUpdated:(id)arg1;
- (void)caveatsUpdated:(id)arg1;

@end

