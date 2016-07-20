/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSMutableString, ServerPrefsWrapper;

@interface ServerPrefsWrapperBuilderFromXml : _ABAddressBookAddRecord <NSXMLParserDelegate>
{
    NSMutableString *curValue;
    NSMutableArray *myContactsSyncFields;
    ServerPrefsWrapper *myServerPrefsWrapper;
}

- (void)setMyServerPrefsWrapper:(id)fp8;
- (id)myServerPrefsWrapper;
- (void)setMyContactsSyncFields:(id)fp8;
- (id)myContactsSyncFields;
- (void)setCurValue:(id)fp8;
- (id)curValue;
- (void)dealloc;
- (void)resetCurValue;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (id)buildFromXml:(id)fp8;
- (id)init;

@end

