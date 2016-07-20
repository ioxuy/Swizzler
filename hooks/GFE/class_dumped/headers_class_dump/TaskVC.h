//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

#import "TaskViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class ClearDateButton, ClearPriorityButton, DatePickerTableViewCell, DateTableViewCell, DeleteTableViewCell, GMMTask, NSArray, NSDateFormatter, NSMutableArray, NotesTableViewCell, PriorityPickerTableViewCell, PriorityTableViewCell, TitleTableViewCell, UIActionSheet;

@interface TaskVC : UITableViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITextViewDelegate, UITextFieldDelegate, UIActionSheetDelegate, TaskViewDelegate>
{
    NSMutableArray *_cellsOrder;
    NSArray *_priorityList;
    NSDateFormatter *_dateFormatter;
    BOOL _newTask;
    TitleTableViewCell *_titleCell;
    DateTableViewCell *_dueDateCell;
    DateTableViewCell *_startDateCell;
    DateTableViewCell *_reminderDateCell;
    PriorityTableViewCell *_priorityCell;
    NotesTableViewCell *_notesCell;
    DeleteTableViewCell *_deleteCell;
    DatePickerTableViewCell *_datePickerCell;
    PriorityPickerTableViewCell *_priorityPickerCell;
    ClearDateButton *_clearDateButton;
    ClearPriorityButton *_clearPriorityButton;
    id <TaskViewDelegate> _delegate;
    GMMTask *_task;
    UIActionSheet *_actionSheet;
}

+ (void)showModallyInViewController:(id)arg1 withTask:(id)arg2 withDelegate:(id)arg3 isNewTask:(BOOL)arg4;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) BOOL newTask; // @synthesize newTask=_newTask;
@property(retain, nonatomic) GMMTask *task; // @synthesize task=_task;
@property(nonatomic) id <TaskViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ClearPriorityButton *clearPriorityButton; // @synthesize clearPriorityButton=_clearPriorityButton;
@property(retain, nonatomic) ClearDateButton *clearDateButton; // @synthesize clearDateButton=_clearDateButton;
@property(retain, nonatomic) PriorityPickerTableViewCell *priorityPickerCell; // @synthesize priorityPickerCell=_priorityPickerCell;
@property(retain, nonatomic) DatePickerTableViewCell *datePickerCell; // @synthesize datePickerCell=_datePickerCell;
@property(retain, nonatomic) DeleteTableViewCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property(retain, nonatomic) NotesTableViewCell *notesCell; // @synthesize notesCell=_notesCell;
@property(retain, nonatomic) PriorityTableViewCell *priorityCell; // @synthesize priorityCell=_priorityCell;
@property(retain, nonatomic) DateTableViewCell *reminderDateCell; // @synthesize reminderDateCell=_reminderDateCell;
@property(retain, nonatomic) DateTableViewCell *startDateCell; // @synthesize startDateCell=_startDateCell;
@property(retain, nonatomic) DateTableViewCell *dueDateCell; // @synthesize dueDateCell=_dueDateCell;
@property(retain, nonatomic) TitleTableViewCell *titleCell; // @synthesize titleCell=_titleCell;
- (void)clearPriority:(id)arg1;
- (void)clearDate:(id)arg1;
- (void)checkBoxTapped:(id)arg1;
- (void)actionDelete;
- (void)actionCancel:(id)arg1;
- (void)actionDone:(id)arg1;
- (void)dateAction:(id)arg1;
- (void)priorityAction:(id)arg1;
- (void)updateForSelectedPriority:(id)arg1;
- (id)dateFromDate:(id)arg1;
- (void)hideKeyboard;
- (void)dismissActionSheet;
- (id)createNewDateToNoon:(id)arg1;
- (void)refreshPriorityCell:(id)arg1 withColor:(id)arg2;
- (void)refreshDateCell:(id)arg1 withColor:(id)arg2;
- (void)updatePriorityPickerForCell:(id)arg1;
- (void)hidePriorityPickerCellAtIndexPath:(id)arg1;
- (void)displayPriorityPickerForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateDatePickerForCell:(id)arg1;
- (void)hideDatePickerCellAtIndexPath:(id)arg1;
- (void)displayDatePickerForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setCellsProperties;
- (void)setVCTitle;
- (void)initPriorityList;
- (void)initCellsOrder;
- (void)setTask:(id)arg1 withDelegate:(id)arg2 isNewTask:(BOOL)arg3;
- (void)taskDeleted;
- (void)doneWithEditing:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;

@end

