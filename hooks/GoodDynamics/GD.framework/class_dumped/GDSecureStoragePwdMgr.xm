%group GDDumpedHeaders
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

// #import "NSObject.h"
%hook GDSecureStoragePwdMgr
// @interface GDSecureStoragePwdMgr : NSObject
// {
// }

// + (int)checkPasswordStrength:(id)arg1;
// + (BOOL)changePassword:(id)arg1 to:(id)arg2;
+ (BOOL)validatePassword:(id)arg1
{
	NSLog(@"GDSecureStoragePwdMgr validatePassword: %@", arg1);
	return %orig;
}
// + (BOOL)clearInMemoryPassword;
// + (BOOL)isPwdSet;
// + (BOOL)clearPassword:(id)arg1;
// + (BOOL)setPassword:(id)arg1;

// @end
%end
%end

