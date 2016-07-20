//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDFileSystem : NSObject
{
}

+ (int)getGDErrorDomainCode:(int)arg1;
+ (int)createErrorObject:(id)arg1 errnoVal:(int)arg2 errorObj:(id *)arg3;
+ (id)readFromFile:(id)arg1 error:(id *)arg2;
+ (BOOL)writeToFile:(id)arg1 name:(id)arg2 fromOffset:(int)arg3 error:(id *)arg4;
+ (BOOL)writeToFile:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (BOOL)uploadLogs:(id *)arg1;
+ (BOOL)exportLogFileToDocumentsFolder:(id *)arg1;
+ (id)getAbsoluteEncryptedPath:(id)arg1;
+ (BOOL)truncateFileAtPath:(id)arg1 atOffset:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
+ (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
+ (id)getWriteStream:(id)arg1 appendmode:(BOOL)arg2 error:(id *)arg3;
+ (id)getReadStream:(id)arg1 error:(id *)arg2;
+ (BOOL)removeItemAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)getFileStat:(id)arg1 to:(CDStruct_6479bfda *)arg2 error:(id *)arg3;
+ (BOOL)moveFileToSecureContainer:(id)arg1 error:(id *)arg2;

@end

