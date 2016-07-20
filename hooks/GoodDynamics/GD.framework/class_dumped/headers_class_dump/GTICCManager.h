//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSString, OrderedDictionary;

@interface GTICCManager : NSObject
{
    id <GTServiceClientDelegate> _gtServiceClientDelegate;
    id <GTServiceDelegate> _gtServiceDelegate;
    NSMutableDictionary *_connections;
    OrderedDictionary *_pendingRequests;
    NSString *_authDelegate;
    OrderedDictionary *_pendingSendTLSRequests;
    OrderedDictionary *_pendingSendTLSResponses;
    OrderedDictionary *_pendingSendTLSErrors;
    NSMutableDictionary *_v1Applications;
    unsigned int _backgroundTask;
    NSMutableDictionary *_certificatesCache;
    int _authAttempts;
    NSString *_authApplication;
    NSData *_tsReadKey;
    NSData *_tsWriteKey;
    int _state;
}

+ (BOOL)setError:(id *)arg1 withCode:(int)arg2 withDescription:(id)arg3 withInfo:(id)arg4 withDomain:(id)arg5;
+ (BOOL)bringToFront:(id)arg1;
+ (id)decryptDataByAES:(id)arg1 withKey:(id)arg2;
+ (id)encryptDataByAES:(id)arg1 withKey:(id)arg2;
+ (id)instance;
@property int state; // @synthesize state=_state;
- (void)connectionDidFindError:(id)arg1 isClient:(BOOL)arg2 errorMessage:(id)arg3;
- (void)connectionDidClose:(id)arg1;
- (void)connectionDidReceiveMessage:(id)arg1 command:(id)arg2;
- (void)serviceClientDidReceiveFrom:(id)arg1 params:(id)arg2 attachments:(id)arg3 requestID:(id)arg4;
- (void)serviceDidReceiveFrom:(id)arg1 service:(id)arg2 version:(id)arg3 method:(id)arg4 params:(id)arg5 attachments:(id)arg6 requestId:(id)arg7;
- (BOOL)serviceDidReceiveAttachmentData:(id)arg1 filename:(id)arg2 lastBlock:(BOOL)arg3 isClient:(BOOL)arg4;
- (void)serviceDidFinishSendingTo:(id)arg1 attachments:(id)arg2 requestID:(id)arg3 isClient:(BOOL)arg4 params:(id)arg5;
- (BOOL)serviceWillSendAttachmentData:(id *)arg1 blockLength:(unsigned int)arg2 filename:(id)arg3 filesize:(int *)arg4 isClient:(BOOL)arg5 toApplication:(id)arg6 correspondingToRequestID:(id)arg7;
- (BOOL)serverDidConnect:(id)arg1 peerCertificateAsDERFromTLS:(id)arg2 peerCertificateAsDERFromOpen:(id)arg3;
- (BOOL)clientDidConnect:(id)arg1 peerCertificateAsDERFromTLS:(id)arg2 peerCertificateAsDERFromOpen:(id)arg3;
- (BOOL)obtainCertificateAndKey:(id)arg1 certificateAsDER:(id *)arg2 privateKey:(id *)arg3 password:(id *)arg4 enterpriseUserNumberRef:(int *)arg5 isClient:(BOOL)arg6;
- (void)removeConnectionForApp:(id)arg1;
- (id)downgradeConnection:(id)arg1;
- (id)createAndAddConnection:(id)arg1 isClient:(BOOL)arg2 version:(int)arg3;
- (id)connectionForApp:(id)arg1;
- (void)shutdownICC;
- (BOOL)validateTimestamp:(id)arg1 usingSignature:(id)arg2;
- (void)processTimestamp:(id)arg1;
- (id)signTimestamp:(long long)arg1;
- (void)addTimestamp:(id)arg1;
- (BOOL)encodeNSDataToBase64:(id)arg1 andAddtoJson:(struct json_object *)arg2 forKey:(const char *)arg3;
- (id)retriveDataFromJson:(struct json_object *)arg1 forKey:(const char *)arg2;
- (BOOL)prepareConnectionForPush:(id)arg1 annotation:(id)arg2;
- (BOOL)handleStreamPush:(id)arg1 annotation:(id)arg2 retry:(char *)arg3;
- (BOOL)handleURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 isLocked:(BOOL)arg4;
- (BOOL)handleFrontCommand:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4 communication:(id)arg5;
- (int)handleConReq:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4;
- (BOOL)handleConResp:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4 communication:(id)arg5;
- (BOOL)sendStreamPush:(id)arg1;
- (BOOL)shouldProcessStreamPushNow:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (BOOL)canSendFileToApplication:(id)arg1;
- (BOOL)sendResponse:(id)arg1 resultValue:(id)arg2 attachments:(id)arg3 toApplication:(id)arg4 bringToFront:(int)arg5 error:(id *)arg6;
- (BOOL)sendRequest:(id *)arg1 toService:(id)arg2 withVersion:(id)arg3 withMethod:(id)arg4 withParams:(id)arg5 withAttachments:(id)arg6 toApplication:(id)arg7 bringToFront:(int)arg8 withError:(id *)arg9;
- (BOOL)sendError:(id)arg1 code:(int)arg2 message:(id)arg3 data:(id)arg4 attachments:(id)arg5 application:(id)arg6 bringToFront:(int)arg7 error:(id *)arg8;
- (BOOL)handleActReq:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4;
- (BOOL)handleActResp:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 connection:(id)arg4 communication:(id)arg5;
- (void)clearPendingRequests;
- (void)removePendingRequest:(id)arg1;
- (void)addPendingRequest:(id)arg1 command:(id)arg2 annotation:(id)arg3;
- (void)clearPendingTLSRequests;
- (void)addPendingTLSRequest:(id)arg1 toService:(id)arg2 withVersion:(id)arg3 withMethod:(id)arg4 withParams:(id)arg5 withAttachments:(id)arg6 toApplication:(id)arg7 bringToFront:(int)arg8;
- (void)clearPendingTLSErrors;
- (void)addPendingTLSError:(id)arg1 withCode:(int)arg2 withMessage:(id)arg3 withData:(id)arg4 withAttachments:(id)arg5 toApplication:(id)arg6 bringToFront:(int)arg7;
- (void)clearPendingTLSResponses;
- (void)addPendingTLSResponse:(id)arg1 resultValue:(id)arg2 withAttachments:(id)arg3 toApplication:(id)arg4 bringToFront:(int)arg5;
- (void)processPendingRequests:(id)arg1;
- (void)processPendingRequests;
- (BOOL)sendActRespAsync:(id)arg1 withStatus:(int)arg2 withProvId:(id)arg3 withPin:(id)arg4 failMsg:(id *)arg5;
- (BOOL)sendActReqAsync:(id)arg1 appId:(id)arg2 appName:(id)arg3 appVersion:(id)arg4 nonce:(id)arg5 failMsg:(id *)arg6;
- (BOOL)sendConReqAsync:(id)arg1 shouldConnect:(BOOL)arg2 shouldAuthorize:(BOOL)arg3 failMsg:(id *)arg4;
- (BOOL)setupConnection:(id)arg1 shouldConnect:(BOOL)arg2 shouldAuthorize:(BOOL)arg3 failMsg:(id *)arg4;
- (BOOL)sendRequestAsync:(id)arg1 command:(id)arg2 shouldAuthorize:(BOOL)arg3 annotation:(id)arg4 failureCallback:(CDUnknownBlockType)arg5;
- (BOOL)cancelPendingTLSRequest:(id)arg1 toApplication:(id)arg2;
- (void)processPendingTLSErrors;
- (void)processPendingTLSResponses;
- (void)processPendingTLSRequests;
- (void)processPendingTLSQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)processPendingTLSQueues:(id)arg1;
- (void)beginBackgroundTask;
- (void)completeBackgroundTask;
- (BOOL)ifPeerCanFinishInForeground:(int)arg1;
- (BOOL)setError:(id *)arg1 code:(int)arg2 description:(id)arg3 info:(id)arg4 domain:(id)arg5;
- (void)setCurrentAuthDelegate:(id)arg1;
- (id)getServiceDelegate;
- (id)getServiceClientDelegate;
- (void)setServiceDelegate:(id)arg1;
- (void)setServiceClientDelegate:(id)arg1;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (void)initialise;

@end

