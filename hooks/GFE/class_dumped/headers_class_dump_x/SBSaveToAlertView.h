/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertView.h"

@interface SBSaveToAlertView : SBAlertView
{
    int _openedFrom;
}

- (int)openedFrom;
- (id)getFileNameFromTextField;
- (void)addTextField:(id)fp8;
- (void)layoutSubviews;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)showSaveToDialog;
- (id)initWithLaterAndDiscardOptionsWithDelegate:(id)fp8 dialogMessageType:(int)fp12 openedFrom:(int)fp16;

@end
