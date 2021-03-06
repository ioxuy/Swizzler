%group GDDumpedHeaders
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

// #import "NSObject.h"

// @interface GDFileHandle : NSObject
// {
//     struct auto_ptr<GSCFileReaderV2> m_apReader;
//     struct auto_ptr<GSCFileWriterV2> m_apWriter;
//     basic_string_075b6133 m_name;
//     _Bool m_isFile;
//     _Bool m_isOpen;
//     int m_opType;
// }
%hook GDFileHandle
// - (id).cxx_construct;
// - (void).cxx_destruct;
// - (void)truncateFileAtOffset:(unsigned long long)arg1;
// - (void)synchronizeFile;
// - (int)fileDescriptor;
// - (void)closeFile;
// - (void)seekToFileOffset:(unsigned long long)arg1;
// - (unsigned long long)seekToEndOfFile;
// - (unsigned long long)offsetInFile;
- (void)writeData:(id)arg1
{
	NSLog(@"GDFileHandle writeData: %@", arg1);
	%orig;
};
// - (id)readDataOfLength:(unsigned int)arg1;
// - (id)readDataToEndOfFile;
// - (id)availableData;
// - (id)sharedFileReader:(unsigned long)arg1;
// - (BOOL)isFile;
- (BOOL)isWriting
{
	BOOL ret = %orig;
	NSLog(@"GDFileHandle isWriting: %d", ret);
	return ret;
};

- (BOOL)isReading
{
	BOOL ret = %orig;
	NSLog(@"GDFileHandle isReading: %d", ret);
	return ret;
};
// - (void)validate;
- (id)initWithFilePath:(id)arg1 opType:(int)arg2
{
	NSLog(@"GDFileHandle initWithFilePath: %@", arg1);
	id ret = %orig;
	return ret;
};
// - (id)realFile:(id)arg1;

// @end
%end
%end
