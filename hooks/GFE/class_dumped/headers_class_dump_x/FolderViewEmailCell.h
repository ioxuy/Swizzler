/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class FolderViewData, FolderViewEmailCellContentView, FolderViewEmailCellTemplate, FolderViewEmailItem, NSTimer, UIButton, UILabel;

@interface FolderViewEmailCell : _ABAddressBookAddRecord
{
    FolderViewEmailCellContentView *_cellContentView;
    FolderViewData *_data;
    UILabel *_labelDate;
    FolderViewEmailItem *_message;
    UIButton *_buttonSelectionToggle;
    FolderViewEmailCellTemplate *_cellTemplate;
    BOOL _stopDeselect;
    BOOL _editing;
    NSTimer *_timerSelection;
    struct CGPoint _touchPointStart;
    struct CGPoint _touchPointEnd;
    BOOL _swipeMenuWasTriggered;
    BOOL _blockedChangeOfSelection;
}

- (void)setBlockedChangeOfSelection:(BOOL)fp8;
- (BOOL)blockedChangeOfSelection;
- (void)setMessage:(id)fp8;
- (id)message;
- (void)setTimerSelection:(id)fp8;
- (id)timerSelection;
- (id)cellTemplate;
- (void)setButtonSelectionToggle:(id)fp8;
- (id)buttonSelectionToggle;
- (id)data;
- (void)setLabelDate:(id)fp8;
- (id)labelDate;
- (void)setCellContentView:(id)fp8;
- (id)cellContentView;
- (id).cxx_construct;
- (void)prepareForReuse;
- (void)setMultiselectedState:(BOOL)fp8;
- (void)setMultiEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setFrame:(struct CGRect)fp8;
- (void)setCellTemplate:(id)fp8;
- (void)setData:(id)fp8;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

