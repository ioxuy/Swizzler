/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "ArchiveEntry.h"

@class NSData, NSString;

@interface ZipEntry : ArchiveEntry
{
    NSData *zipData;
    NSString *leadingPath;
    unsigned int headerOffset;
    unsigned int CRC;
    unsigned int compressionType;
    unsigned int bytesToRead;
    unsigned int bytesToWrite;
    unsigned int dataOffset;
    unsigned int needVersion;
    unsigned int bitflags;
    unsigned short lastModTime;
    unsigned int key[3];
    BOOL isEncrypted;
}

- (unsigned int)compressionType;
- (unsigned int)CRC;
- (unsigned int)headerOffset;
- (void)dealloc;
- (id)extract;
- (id)extractWithPasswd:(id)fp8;
- (unsigned char)pwdDecryptByte:(const char *)fp8;
- (void)pwdKeyInitialize:(id)fp8;
- (void)pwdUpdateKeys:(unsigned char)fp8;
- (BOOL)hasPassword;
- (BOOL)addToRootEntry:(id)fp8 withID:(int)fp12;
- (id)childDirectoryEntryWithName:(id)fp8 createIfNotPresent:(BOOL)fp12;
- (BOOL)addChildEntry:(id)fp8;
- (int)compare:(id)fp8;
- (id)path;
- (void)readHeader;
- (id)initWithData:(id)fp8 path:(id)fp12 headerOffset:(unsigned int)fp16 CRC:(unsigned int)fp20 compressedSize:(unsigned int)fp24 uncompressedSize:(unsigned int)fp28 compressionType:(unsigned int)fp32 encrypted:(BOOL)fp36;

@end

