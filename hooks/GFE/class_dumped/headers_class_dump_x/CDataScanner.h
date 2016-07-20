/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSCharacterSet, NSData;

@interface CDataScanner : _ABAddressBookAddRecord
{
    NSData *data;
    char *start;
    char *end;
    char *current;
    unsigned int length;
    NSCharacterSet *doubleCharacters;
}

+ (id)scannerWithData:(id)fp8;
- (void)setDoubleCharacters:(id)fp8;
- (id)doubleCharacters;
- (id)remainingString;
- (void)skipWhitespace;
- (BOOL)scanNumber:(id *)fp8;
- (BOOL)scanUpToCharactersFromSet:(id)fp8 intoString:(id *)fp12;
- (BOOL)scanUpToString:(id)fp8 intoString:(id *)fp12;
- (BOOL)scanCharactersFromSet:(id)fp8 intoString:(id *)fp12;
- (BOOL)scanString:(id)fp8 intoString:(id *)fp12;
- (BOOL)scanUTF8String:(const char *)fp8 intoString:(id *)fp12;
- (BOOL)scanCharacter:(unsigned short)fp8;
- (unsigned short)scanCharacter;
- (unsigned short)currentCharacter;
- (BOOL)isAtEnd;
- (void)setScanLocation:(unsigned int)fp8;
- (void)setData:(id)fp8;
- (id)data;
- (unsigned int)scanLocation;
- (void)dealloc;
- (id)init;
- (id)userInfoForScanLocation;
- (unsigned int)lineOfScanLocation;
- (BOOL)scanCPlusPlusStyleComment:(id *)fp8;
- (BOOL)scanCStyleComment:(id *)fp8;

@end

