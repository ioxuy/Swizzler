/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@interface _CATransform3DMakeScale (GDFHProxy)
+ (id)replacementFileHandleForUpdatingURL:(id)fp8 error:(id *)fp12;
+ (id)originalFileHandleForUpdatingURL:(id)fp8 error:(id *)fp12;
+ (id)replacementFileHandleForUpdatingAtPath:(id)fp8;
+ (id)originalFileHandleForUpdatingAtPath:(id)fp8;
+ (id)replacementFileHandleForWritingToURL:(id)fp8 error:(id *)fp12;
+ (id)originalFileHandleForWritingToURL:(id)fp8 error:(id *)fp12;
+ (id)replacementFileHandleForWritingAtPath:(id)fp8;
+ (id)originalFileHandleForWritingAtPath:(id)fp8;
+ (id)replacementFileHandleForReadingFromURL:(id)fp8 error:(id *)fp12;
+ (id)originalFileHandleForReadingFromURL:(id)fp8 error:(id *)fp12;
+ (id)replacementFileHandleForReadingAtPath:(id)fp8;
+ (id)originalFileHandleForReadingAtPath:(id)fp8;
- (void)replacementWriteData:(id)fp8;
- (void)originalWriteData:(id)fp8;
- (void)replacementTruncateFileAtOffset:(unsigned long long)fp8;
- (void)originalTruncateFileAtOffset:(unsigned long long)fp8;
- (void)replacementSynchronizeFile;
- (void)originalSynchronizeFile;
- (int)replacementFileDescriptor;
- (int)originalFileDescriptor;
- (void)replacementCloseFile;
- (void)originalCloseFile;
- (void)replacementSeekToFileOffset:(unsigned long long)fp8;
- (void)originalSeekToFileOffset:(unsigned long long)fp8;
- (unsigned long long)replacementSeekToEndOfFile;
- (unsigned long long)originalSeekToEndOfFile;
- (unsigned long long)replacementOffsetInFile;
- (unsigned long long)originalOffsetInFile;
- (id)replacementReadDataToEndOfFile;
- (id)originalReadDataToEndOfFile;
- (id)replacementReadDataOfLength:(unsigned int)fp8;
- (id)originalReadDataOfLength:(unsigned int)fp8;
- (id)replacementAvailableData;
- (id)originalAvailableData;
- (id)replacementInitWithFileDescriptorCloseOnDealloc:(int)fp8 closeOnDealloc:(BOOL)fp12;
- (id)originalInitWithFileDescriptorCloseOnDealloc:(int)fp8 closeOnDealloc:(BOOL)fp12;
- (id)replacementInitWithFileDescriptor:(int)fp8;
- (id)originalInitWithFileDescriptor:(int)fp8;
- (id)commonInit:(int)fp8;
- (id)fileHandle;
- (void)setFileHandle:(id)fp8;
@end

