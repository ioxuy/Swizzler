//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GDTrust;

@protocol GDTrustDelegate
- (void)authenticateWithTrust:(GDTrust *)arg1;

@optional
- (void)securityPolicyDidChange:(GDTrust *)arg1;
@end

