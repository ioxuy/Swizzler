/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FileDecryptionProtocol.h"

@class SBOpenInFileInfo;

@interface SBOpenInProtocolHandler : FileDecryptionProtocol
{
    SBOpenInFileInfo *_fileInfo;
}

+ (id)stringByAddingPercentEscapes:(id)fp8;
+ (id)stringByRepleacingPercentEscapes:(id)fp8;
+ (id)parseUrlQuery:(id)fp8;
+ (BOOL)canInitWithRequest:(id)fp8;
+ (id)fileInfofromUrl:(id)fp8;
+ (id)supportedScheme;
+ (id)urlStringWithFileName:(id)fp8 andMimeType:(id)fp12 andSize:(int)fp16;
+ (void)unregisterProtocol;
+ (void)registerProtocol;
- (void)setFileInfo:(id)fp8;
- (id)fileInfo;
- (void)dealloc;
- (void)startLoading;
- (id)initWithRequest:(id)fp8 cachedResponse:(id)fp12 client:(id)fp16;

@end

