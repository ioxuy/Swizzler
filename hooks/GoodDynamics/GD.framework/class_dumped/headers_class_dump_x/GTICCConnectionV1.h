/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTICCConnectionBridge.h"

#import "GCDAsyncSocketDelegate-Protocol.h"

@class GCDAsyncSocket, NSString;

@interface GTICCConnectionV1 : GTICCConnectionBridge <GCDAsyncSocketDelegate>
{
    int _activeFileDescriptor;
    int _port;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _pendingData;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _command;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _currentAttachmentName;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _currentMessageTimestamp;
    NSString *_attachmentName;
    int _readState;
    int _commandLength;
    int _numAttach;
    int _attachNameLength;
    int _currentAttachLength;
    int _writtenToFile;
    int _currentAttachNumber;
    BOOL _isSecure;
    BOOL _isSocketConnected;
    GCDAsyncSocket *_socket;
    GCDAsyncSocket *_connectedSocket;
}

- (void)setIsSocketConnected:(BOOL)fp8;
- (BOOL)isSocketConnected;
- (void)setIsSecure:(BOOL)fp8;
- (BOOL)isSecure;
- (void)setConnectedSocket:(id)fp8;
- (id)connectedSocket;
- (void)setSocket:(id)fp8;
- (id)socket;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)send:(id)fp8 attachments:(id)fp12;
- (BOOL)sendFileAttachments:(id)fp8;
- (BOOL)sendFile:(id)fp8;
- (BOOL)sendData:(id)fp8 tag:(int)fp12;
- (void)processCommand;
- (void)readData:(id)fp8;
- (void)clearReadParameters;
- (id)obtainCertificate;
- (void)socket:(id)fp8 didReadData:(id)fp12 withTag:(long)fp16;
- (void)socketDidDisconnect:(id)fp8 withError:(id)fp12;
- (void)socketDidSecure:(id)fp8;
- (void)socket:(id)fp8 didWriteDataWithTag:(long)fp12;
- (void)socket:(id)fp8 didAcceptNewSocket:(id)fp12;
- (void)socket:(id)fp8 didConnectToHost:(id)fp12 port:(unsigned short)fp16;
- (struct __SecIdentity *)generateIdentifyRef;
- (int)port;
- (_Bool)createClientOnPort:(int)fp8 readBufferSize:(int)fp12 writeBufferSize:(int)fp16;
- (_Bool)createClientOnPort:(int)fp8;
- (_Bool)createServerWithReadBufferSize:(int)fp8 writeBufferSize:(int)fp12;
- (_Bool)createServer;
- (BOOL)connect:(int)fp8;
- (void)close;
- (void)dealloc;
- (id)initForApplication:(id)fp8 isClient:(BOOL)fp12;

@end

