/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface GDData : _CATransform3DMakeScale
{
}

+ (id)createErrorObject:(int)fp8 domain:(id)fp12 path:(id)fp16;
+ (BOOL)writeToFile:(id)fp8 options:(unsigned int)fp12 error:(id *)fp16 bytes:(const void *)fp20 length:(unsigned int)fp24;
+ (BOOL)writeToFile:(id)fp8 atomically:(BOOL)fp12 bytes:(const void *)fp16 length:(unsigned int)fp20;
+ (id)dataWithContentsOfFile:(id)fp8;
+ (id)dataWithContentsOfFile:(id)fp8 options:(unsigned int)fp12 error:(id *)fp16;

@end

