/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class GDLocalStorage;

@interface GDLocalStorageManager : _CATransform3DMakeScale
{
    GDLocalStorage *settingDB;
}

- (void)dealloc;
- (int)clear;
- (int)removeItem:(id)fp8;
- (int)setItem:(id)fp8;
- (id)executeFromArray:(id)fp8;
- (id)getItems;
- (id)init;

@end

