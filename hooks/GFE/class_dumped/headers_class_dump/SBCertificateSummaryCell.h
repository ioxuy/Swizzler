//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class NSMutableArray;

@interface SBCertificateSummaryCell : UITableViewCell
{
    float offsetX;
    float borderMargin;
    float offsetY;
    NSMutableArray *_infoLabelsArray;
}

@property(retain, nonatomic) NSMutableArray *infoLabelsArray; // @synthesize infoLabelsArray=_infoLabelsArray;
@property(nonatomic) float offsetY; // @synthesize offsetY;
@property(nonatomic) float borderMargin; // @synthesize borderMargin;
@property(nonatomic) float offsetX; // @synthesize offsetX;
- (void)layoutSubviews;
- (void)setUpDetailWithTitle:(id)arg1 objectValue:(id)arg2;
- (void)setUpMoreDetails;
- (void)setUpDescriptionForServerCert:(BOOL)arg1 expirationDate:(id)arg2;
- (void)setUpCertificateIcon:(int)arg1;
- (void)setUpTrustStatusMessage:(id)arg1 isValid:(BOOL)arg2;
- (void)setUpServerName:(id)arg1 issuerName:(id)arg2;
- (void)cleanUp;
- (float)cellWidth;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

