/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol SmimeUiCallbackProtocol
- (void)showRetrievingCACCertificatesProgress:(BOOL)fp8;
- (void)validationImpSoftTokenResult:(id)fp8;
- (void)requestToResetAttachments:(unsigned short)fp8;
- (void)requestToUpdateDataAttach:(unsigned short)fp8;
- (void)requestToUpdateDataBody:(unsigned short)fp8;
- (void)requestToShowDialog:(id)fp8;
- (void)requestToUpdateStatusForSmimeActionResult:(int)fp8;
- (void)requestToUpdateDownloadProgress:(float)fp8;
@end
