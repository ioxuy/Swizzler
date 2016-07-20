//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTSocketCommunicationDelegate.h"

@class NSData, NSError, NSMutableData;

@interface GTEncryptedFile : NSObject <GTSocketCommunicationDelegate>
{
    NSMutableData *_decryptedData;
    NSData *_inputBuffer;
    NSData *_pushKey;
    BOOL _isEncrypting;
    BOOL _didEncryptFileLength;
    BOOL _didFinalCrc;
    BOOL _isEncryptingFileDone;
    id <GTSocketCommunicationDelegate> _delegate;
    unsigned char _version;
    unsigned int _headerLength;
    unsigned int _hashLength;
    unsigned int _IVLength;
    unsigned int _CRCLength;
    unsigned int _unencryptedFileLength;
    unsigned int _encryptedStream;
    int _readHeader;
    int _readUnencrypted;
    int _wroteEncrypted;
    unsigned int _crc;
    unsigned int _crcLen;
    int _readState;
    unsigned char _arInitilizationVector[16];
    char *_arEncryptionHash;
    struct AES _stream;
    NSError *_pendingError;
}

+ (id)fileEncrypterTo:(id)arg1 pushKey:(id)arg2 fileSize:(unsigned int)arg3;
+ (id)fileDecrypterTo:(id)arg1 pushKey:(id)arg2;
+ (unsigned int)computeCRCForBlock:(char *)arg1 withLength:(unsigned int)arg2 withCrc:(unsigned int)arg3;
@property(readonly, nonatomic) unsigned int fileSize; // @synthesize fileSize=_unencryptedFileLength;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEncryptDelegate:(id)arg1 pushKey:(id)arg2 fileSize:(unsigned int)arg3;
- (id)initWithDecryptDelegate:(id)arg1 pushKey:(id)arg2;
- (void)dealloc;
- (void)streamDidReceiveData:(id)arg1;
- (void)streamEndedWithError:(id)arg1;
- (void)errorEncountered:(id)arg1;

@end

