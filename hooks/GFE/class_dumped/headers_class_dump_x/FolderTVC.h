/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PullToReconnectTVC.h"

#import "FolderListViewControllerDelegate-Protocol.h"
#import "FolderSubscriptionCellDelegate-Protocol.h"
#import "FolderViewDataDelegate-Protocol.h"
#import "FolderViewFilterSortTVCDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"

@class EmailRootNC, FolderViewData, FolderViewSwipeMenu, GUBarButtonItem, GUButton, GUGrayBarButtonItem, NSIndexPath, NSMutableArray, NSMutableSet, NSString, NSTimer, UIActivityIndicatorView, UILabel, UISearchDisplayController, UITableViewCell, UIToolbar, UIView;

@interface FolderTVC : PullToReconnectTVC <UIActionSheetDelegate, FolderListViewControllerDelegate, FolderViewFilterSortTVCDelegate, FolderViewDataDelegate, FolderSubscriptionCellDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    UISearchDisplayController *_folderSearchDisplayController;
    UITableViewCell *_loadingCell;
    UIView *_footerView;
    UILabel *_labelTotalMessages;
    UILabel *_labelLoadingMoreMessages;
    UILabel *_labelSortKey;
    UILabel *_labelSortPrompt;
    UILabel *_searchingLabel;
    UIActivityIndicatorView *_searchingActivityIndicator;
    UIToolbar *_toolbarMultiSelect;
    GUGrayBarButtonItem *_multiMoveButton;
    GUGrayBarButtonItem *_multiDeleteButton;
    FolderViewSwipeMenu *_swipeMenu;
    NSMutableArray *_overrideSections;
    EmailRootNC *_rootVC;
    FolderViewData *_data;
    NSTimer *_timerSubscription;
    GUButton *_titleButton;
    UILabel *_titleLabel;
    BOOL _searchViewEnabled;
    BOOL _mailTrashed;
    BOOL _flag;
    unsigned short _selectedRecord;
    BOOL _skipDraftsOpening;
    BOOL _viewIsLoaded;
    BOOL _cancelledMove;
    BOOL _swipeToDeleteActive;
    NSMutableArray *_multiSelectedMessages;
    GUBarButtonItem *_editButton;
    GUBarButtonItem *_cancelEditButton;
    unsigned short _recNumForDeletion;
    NSIndexPath *_lastSelectedPath;
    BOOL _showSecurityIcon;
    NSMutableSet *_messagesToMarkAsRead;
    NSIndexPath *_savedCurrentSelectedIndex;
    NSString *_curSearchString;
    int _curSearchScopeButtonIndex;
    BOOL _viewAppeared;
}

- (void)setFolderData:(id)fp8;
- (id)folderData;
- (void)setOverrideSections:(id)fp8;
- (id)overrideSections;
- (void)setMultiDeleteButton:(id)fp8;
- (id)multiDeleteButton;
- (void)setMultiMoveButton:(id)fp8;
- (id)multiMoveButton;
- (void)setCancelledMove:(BOOL)fp8;
- (BOOL)cancelledMove;
- (void)setCurSearchString:(id)fp8;
- (id)curSearchString;
- (void)setSavedCurrentSelectedIndex:(id)fp8;
- (id)savedCurrentSelectedIndex;
- (void)setViewIsLoaded:(BOOL)fp8;
- (BOOL)viewIsLoaded;
- (void)setSwipeMenu:(id)fp8;
- (id)swipeMenu;
- (void)setToolbarMultiSelect:(id)fp8;
- (id)toolbarMultiSelect;
- (void)setSearchingActivityIndicator:(id)fp8;
- (id)searchingActivityIndicator;
- (void)setSearchingLabel:(id)fp8;
- (id)searchingLabel;
- (void)setLabelSortPrompt:(id)fp8;
- (id)labelSortPrompt;
- (void)setLabelSortKey:(id)fp8;
- (id)labelSortKey;
- (void)setLabelTotalMessages:(id)fp8;
- (id)labelTotalMessages;
- (void)setLabelLoadingMoreMessages:(id)fp8;
- (id)labelLoadingMoreMessages;
- (void)setFooterView:(id)fp8;
- (id)footerView;
- (void)setLoadingCell:(id)fp8;
- (id)loadingCell;
- (void)setFolderSearchDisplayController:(id)fp8;
- (id)folderSearchDisplayController;
- (BOOL)isMessageToBeMarkedAsRead:(unsigned short)fp8;
- (void)removeMessageToBeMarkedAsRead:(unsigned short)fp8;
- (void)addMessageToBeMarkedAsRead:(unsigned short)fp8;
- (void)commitMarkingAsRead;
- (void)commitMarkingAsRead:(struct GxShortArray *)fp8;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (BOOL)searchDisplayController:(id)fp8 shouldReloadTableForSearchScope:(int)fp12;
- (void)searchDisplayController:(id)fp8 willHideSearchResultsTableView:(id)fp12;
- (BOOL)searchDisplayController:(id)fp8 shouldReloadTableForSearchString:(id)fp12;
- (void)searchDisplayControllerDidBeginSearch:(id)fp8;
- (void)searchDisplayControllerWillBeginSearch:(id)fp8;
- (void)searchDisplayControllerDidEndSearch:(id)fp8;
- (void)searchDisplayControllerWillEndSearch:(id)fp8;
- (BOOL)searchBarShouldBeginEditing:(id)fp8;
- (BOOL)searchBarShouldEndEditing:(id)fp8;
- (void)searchBarSearchButtonClicked:(id)fp8;
- (void)searchBar:(id)fp8 selectedScopeButtonIndexDidChange:(int)fp12;
- (void)folderSubscriptionCellWasTapped:(id)fp8;
- (void)startSearchWithText:(id)fp8 scopeButtonIndex:(int)fp12;
- (BOOL)isSearchViewEnabled;
- (void)searchViewEnabled:(BOOL)fp8;
- (void)folderListViewComplete:(id)fp8;
- (void)anotherFolderSelected:(int)fp8 moveItems:(id)fp16;
- (void)folderViewFilterSortTVC:(id)fp8 didUpdateSortOptionToIndex:(int)fp12;
- (void)multiMove:(id)fp8;
- (void)actionSheetCancel:(id)fp8;
- (void)actionSheet:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)folderViewData:(id)fp8 didUpdateManifest:(BOOL)fp12;
- (void)folderViewData:(id)fp8 didSetFolderType:(int)fp12;
- (void)folderViewData:(id)fp8 didUpdateUnreadCount:(int)fp12;
- (void)folderViewDataEmailReceivedInCurFolder;
- (void)folderViewDataDidFinishSearching:(id)fp8;
- (void)reloadSearchTableData;
- (void)folderViewDataDidBeginSearching:(id)fp8;
- (BOOL)isIndexPath:(id)fp8 validInTableView:(id)fp12;
- (id)syncLock;
- (void)updateSectionsCount;
- (id)titleForFolderButton:(id)fp8 unreadCount:(unsigned int)fp12;
- (void)updateSubscriptionStatus:(int)fp8 forCell:(id)fp12;
- (id)blankCellForTable:(id)fp8;
- (id)folderSubscriptionCellForTable:(id)fp8;
- (void)updateEmailSecurityInfoPosition:(BOOL)fp8;
- (id)getEmailSecurityInfo:(id)fp8;
- (void)updateEmailSecurityInfoIcons:(id)fp8 emailCell:(id)fp12 emailItem:(id)fp16;
- (void)updateEmailAnyProblemsIcons:(id)fp8 emailCell:(id)fp12 emailItem:(id)fp16;
- (struct CGRect)getRectForEmailSecurityInfo:(id)fp8 emailCellTemplate:(id)fp12;
- (void)updateBarsOnFolderChange;
- (void)updateCountOnToolbarButtons;
- (void)setToolbarItemsEnabled:(BOOL)fp8;
- (void)updateViewTitle;
- (void)updateSearchScopeButtonTitles;
- (void)setupNavigationItems;
- (void)updateSortingDisplay;
- (void)setFooterHidden:(BOOL)fp8;
- (id)currentTableView;
- (id)itemAtIndex:(id)fp8;
- (id)footerSectionRows;
- (void)scrollToSelectedPath;
- (void)selectIndexPath:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 didEndEditingRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 willBeginEditingRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)cancelEditMode;
- (void)gotoEditMode;
- (void)multiDelete:(id)fp8;
- (void)showSortOptions:(id)fp8;
- (void)launchFoldersView:(id)fp8;
- (void)setupSubscription:(BOOL)fp8;
- (void)clearSubscriptionStatus:(id)fp8;
- (void)updateSubscriptionStatus:(id)fp8;
- (void)composeMail:(id)fp8;
- (BOOL)selectRecordNumber:(unsigned short)fp8;
- (unsigned short)selectedRecord;
- (int)currentFolderType;
- (BOOL)selectPreviousMessage;
- (BOOL)selectNextMessage;
- (unsigned short)findNextRecordNumber;
- (void)moveItemsAtIndexPaths:(id)fp8 withRecords:(struct GxShortArray *)fp12 toFolder:(int)fp16;
- (id)indexPathForRecord:(unsigned short)fp8;
- (void)removeItemsAtIndexPaths:(id)fp8 withRecords:(struct GxShortArray *)fp12;
- (id)currentSelectedIndex;
- (void)updatePaddedCells;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willForeground:(id)fp8;
- (void)dealloc;
- (void)doComplianceCheckFailed;
- (id)initWithRootVC:(id)fp8;

@end
