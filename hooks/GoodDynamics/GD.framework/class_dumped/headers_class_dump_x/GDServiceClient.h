/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDServiceClient : _CATransform3DMakeScale
{
    id <GDServiceClientDelegate> delegate;
}

+ (BOOL)cancelRequest:(id)fp8 toApplication:(id)fp12;
+ (BOOL)bringToFront:(id)fp8 error:(id *)fp12;
+ (BOOL)sendTo:(id)fp8 withService:(id)fp12 withVersion:(id)fp16 withMethod:(id)fp20 withParams:(id)fp24 withAttachments:(id)fp28 bringServiceToFront:(int)fp32 requestID:(id *)fp36 error:(id *)fp40;
- (id)getDelegate;
- (void)setDelegate:(id)fp8;

@end

