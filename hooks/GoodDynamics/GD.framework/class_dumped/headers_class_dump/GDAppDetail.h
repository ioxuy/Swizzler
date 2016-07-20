//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIImage;

@interface GDAppDetail : NSObject
{
    NSString *applicationId;
    NSString *applicationVersion;
    NSString *name;
    NSString *address;
    UIImage *icon;
    NSString *versionId;
    int providerType;
    NSMutableArray *serverList;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon;
@property(retain, nonatomic) NSMutableArray *serverList; // @synthesize serverList;
@property(nonatomic) int providerType; // @synthesize providerType;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion;
@property(retain, nonatomic) NSString *applicationId; // @synthesize applicationId;
- (void)dealloc;
- (id)init;

@end
