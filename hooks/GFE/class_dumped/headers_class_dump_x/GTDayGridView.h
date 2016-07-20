/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "GTCalendarGridView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GTGridTiler, NSArray, NSDate;

@interface GTDayGridView : GTCalendarGridView <UIGestureRecognizerDelegate>
{
    GTGridTiler *_gridTiler;
    id <GTDayGridViewDelegate> _delegate;
    NSDate *_date;
    NSArray *_pressedBubbles;
    struct CGPoint _locationOfInitialPress;
}

- (void)setPressedBubbles:(id)fp8;
- (id)pressedBubbles;
- (void)setLocationOfInitialPress:(struct CGPoint)fp8;
- (struct CGPoint)locationOfInitialPress;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setGridTiler:(id)fp8;
- (id)gridTiler;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (id)bubblesCloseToView:(id)fp8;
- (void)createEventFromLongPress:(id)fp8;
- (void)handleEventTouch:(id)fp8;
- (void)addGestureRecognizer;
- (void)setFrame:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;

@end

