//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMailComposeViewController.h"

@class GDMail, NSMutableArray, NSMutableDictionary;

@interface GDMailComposeViewController : MFMailComposeViewController
{
    BOOL _isNativeMailWantedByUser;
    GDMail *_mail;
    NSMutableArray *_gdAttachedFilePaths;
    NSMutableDictionary *_gdAttachmentData;
}

@property(nonatomic) BOOL isNativeMailWantedByUser; // @synthesize isNativeMailWantedByUser=_isNativeMailWantedByUser;
@property(retain, nonatomic) NSMutableDictionary *gdAttachmentData; // @synthesize gdAttachmentData=_gdAttachmentData;
@property(retain, nonatomic) NSMutableArray *gdAttachedFilePaths; // @synthesize gdAttachedFilePaths=_gdAttachedFilePaths;
@property(retain, nonatomic) GDMail *mail; // @synthesize mail=_mail;
- (void)setURL:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setSubject:(id)arg1;
- (oneway void)release;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

