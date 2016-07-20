//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "GTSocketCommunicationDelegate.h"

@class NSData;

@interface GFEAttachCrypto : NSObject <GTSocketCommunicationDelegate>
{
    id <GTSocketCommunicationDelegate> _delegate;
    BOOL _isEncrypting;
    unsigned int _blockSize;
    NSData *_leftoverData;
    unsigned int _totalBytesCoded;
    unsigned int _totalReceived;
}

+ (id)attachDecrypterTo:(id)arg1;
+ (id)attachEncrypterTo:(id)arg1;
+ (void)encryptData:(id)arg1 delegate:(id)arg2;
@property id <GTSocketCommunicationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finalizeCoding;
- (void)handleDataCoding:(id)arg1;
- (id)initWithDecryptDelegate:(id)arg1;
- (id)initWithEncryptDelegate:(id)arg1;
- (void)dealloc;
- (void)streamDidReceiveData:(id)arg1;
- (void)streamEndedWithError:(id)arg1;

@end

