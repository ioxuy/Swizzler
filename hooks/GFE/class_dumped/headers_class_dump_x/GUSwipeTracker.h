/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableArray, UIView;

@interface GUSwipeTracker : _ABAddressBookAddRecord
{
    UIView *view;
    NSMutableArray *trackedTouchPoints;
    id <GUSwipeTrackerDelegate> delegate;
    int primaryAxisSensitivity;
    int secondaryAxisSensitivity;
    int trackedDirections;
}

- (void)setTrackedDirections:(int)fp8;
- (int)trackedDirections;
- (void)setSecondaryAxisSensitivity:(int)fp8;
- (int)secondaryAxisSensitivity;
- (void)setPrimaryAxisSensitivity:(int)fp8;
- (int)primaryAxisSensitivity;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)view;
- (void)dealloc;
- (BOOL)detectSwipeForDirection:(int)fp8 primaryAxisVal:(int)fp12 secondaryAxisVal:(int)fp16;
- (BOOL)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (id)initWithView:(id)fp8 delegate:(id)fp12;

@end

