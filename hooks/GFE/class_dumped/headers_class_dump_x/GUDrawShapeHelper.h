/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GUDrawShapeHelper : _ABAddressBookAddRecord
{
    struct CGColorSpace *colorSpace;
}

- (void)setColorSpace:(struct CGColorSpace *)fp8;
- (struct CGColorSpace *)colorSpace;
- (void)dealloc;
- (void)drawBumpedRoundedRect:(struct CGRect)fp8 inContext:(struct CGContext *)fp24 withColor:(struct CGColor *)fp28;
- (id)initWithColorSpace:(struct CGColorSpace *)fp8;

@end

