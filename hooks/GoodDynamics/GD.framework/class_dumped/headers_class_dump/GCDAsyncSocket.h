//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncReadPacket, GCDAsyncWritePacket, NSData, NSMutableArray, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface GCDAsyncSocket : NSObject
{
    unsigned int flags;
    unsigned short config;
    id delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int connectIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    GCDAsyncReadPacket *currentRead;
    GCDAsyncWritePacket *currentWrite;
    unsigned long socketFDBytesAvailable;
    NSMutableData *partialReadBuffer;
    CDStruct_304912e7 streamContext;
    struct __CFReadStream *readStream;
    struct __CFWriteStream *writeStream;
    id userData;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
+ (BOOL)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;
+ (unsigned short)portFromAddress:(id)arg1;
+ (id)hostFromAddress:(id)arg1;
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;
+ (void)removeStreamListener:(id)arg1;
+ (void)addStreamListener:(id)arg1;
+ (void)listenerThread;
+ (void)ignoreThis:(id)arg1;
+ (void)startListenerThreadIfNeeded;
- (BOOL)enableBackgroundingOnSocketWithCaveat;
- (BOOL)enableBackgroundingOnSocket;
- (BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)arg1;
- (struct __CFWriteStream *)writeStream;
- (struct __CFReadStream *)readStream;
- (int)socket6FD;
- (int)socket4FD;
- (int)socketFD;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)openStreams;
- (void)removeStreamsFromRunLoop;
- (BOOL)addStreamsToRunLoop;
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg1;
- (BOOL)createReadAndWriteStream;
- (void)maybeStartTLS;
- (void)abortSSLHandshake:(id)arg1;
- (void)finishSSLHandshake;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeoutWithExtension:(double)arg1;
- (void)doWriteTimeout;
- (void)setupWriteTimerWithTimeout:(double)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doWriteData;
- (void)maybeDequeueWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)doReadTimeoutWithExtension:(double)arg1;
- (void)doReadTimeout;
- (void)setupReadTimerWithTimeout:(double)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doReadEOF;
- (void)doReadData;
- (void)flushSSLBuffers;
- (void)maybeDequeueRead;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 maxLength:(unsigned int)arg5 tag:(long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned int)arg3 tag:(long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)readDataToLength:(unsigned int)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataToLength:(unsigned int)arg1 withTimeout:(double)arg2 tag:(long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned int)arg3 maxLength:(unsigned int)arg4 tag:(long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned int)arg3 tag:(long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long)arg2;
- (void)resumeWriteSource;
- (void)suspendWriteSource;
- (void)resumeReadSource;
- (void)suspendReadSource;
- (BOOL)usingCFStream;
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;
- (BOOL)isSecure;
- (BOOL)isIPv6;
- (BOOL)isIPv4;
- (id)localAddress;
- (id)connectedAddress;
- (unsigned short)localPortFromSocket6:(int)arg1;
- (unsigned short)localPortFromSocket4:(int)arg1;
- (id)localHostFromSocket6:(int)arg1;
- (id)localHostFromSocket4:(int)arg1;
- (unsigned short)connectedPortFromSocket6:(int)arg1;
- (unsigned short)connectedPortFromSocket4:(int)arg1;
- (id)connectedHostFromSocket6:(int)arg1;
- (id)connectedHostFromSocket4:(int)arg1;
- (unsigned short)localPort6;
- (unsigned short)localPort4;
- (id)localHost6;
- (id)localHost4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPort4;
- (id)connectedHost6;
- (id)connectedHost4;
- (unsigned short)localPort;
- (id)localHost;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (BOOL)isConnected;
- (BOOL)isDisconnected;
- (id)otherError:(id)arg1;
- (id)connectionClosedError;
- (id)writeTimeoutError;
- (id)readTimeoutError;
- (id)readMaxedOutError;
- (id)connectTimeoutError;
- (id)sslError:(long)arg1;
- (id)errnoError;
- (id)errnoErrorWithReason:(id)arg1;
- (id)gaiError:(int)arg1;
- (id)badParamError:(id)arg1;
- (id)badConfigError:(id)arg1;
- (void)maybeClose;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)closeWithError:(id)arg1;
- (void)doConnectTimeout;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (void)didNotConnect:(int)arg1 error:(id)arg2;
- (void)didConnect:(int)arg1;
- (BOOL)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;
- (void)lookup:(int)arg1 didFail:(id)arg2;
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;
- (void)lookup:(int)arg1 host:(id)arg2 port:(unsigned short)arg3;
- (BOOL)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (BOOL)connectToAddress:(id)arg1 error:(id *)arg2;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (BOOL)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)preConnectWithInterface:(id)arg1 error:(id *)arg2;
- (BOOL)doAccept:(int)arg1;
- (BOOL)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (BOOL)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)setPreferIPv4OverIPv6:(BOOL)arg1;
- (BOOL)isIPv4PreferredOverIPv6;
- (void)setIPv6Enabled:(BOOL)arg1;
- (BOOL)isIPv6Enabled;
- (void)setIPv4Enabled:(BOOL)arg1;
- (BOOL)isIPv4Enabled;
- (void)setAutoDisconnectOnClosedReadStream:(BOOL)arg1;
- (BOOL)autoDisconnectOnClosedReadStream;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(BOOL)arg3;
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (void)synchronouslySetDelegateQueue:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDelegateQueue:(id)arg1 synchronously:(BOOL)arg2;
- (id)delegateQueue;
- (void)synchronouslySetDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 synchronously:(BOOL)arg2;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithSocketQueue:(id)arg1;
- (id)init;

@end

