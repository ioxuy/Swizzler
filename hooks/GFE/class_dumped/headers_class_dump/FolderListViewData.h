//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSTimer;

@interface FolderListViewData : NSObject
{
    struct GxVoidArray *m_folderList;
    id <FolderListViewDataDelegate> _delegate;
    unsigned long m_nLastNotifReceivedTime;
    _Bool m_bTimerCreatedToProcessNotif;
    struct UIAListener *emailDBListener;
    int _mode;
    NSTimer *_timer;
    BOOL _dismissed;
}

@property(nonatomic, getter=isDismissed) BOOL dismissed; // @synthesize dismissed=_dismissed;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) id <FolderListViewDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)signalDelegateOfChangeInManifest;
- (void)unregisterToDBNotifications;
- (void)registerToDBNotifications;
- (void)willForeground:(id)arg1;
- (void)willBackground:(id)arg1;
- (CDStruct_86fb2e49 *)GetFolderInfo:(int)arg1;
- (int)GetSelectedFolder:(int)arg1;
- (int)GetNumberOfFolders;
- (void)moveEmail:(unsigned short)arg1 toFolder:(int)arg2;
- (void)collapseAllFolders;
- (void)expandAllFolders:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)expandOrCollapseFolder:(int)arg1;
- (id)initWithMode:(int)arg1;
- (void)restoreExpandedFolderState;
- (void)removeFromExpandedFolders:(int)arg1 forFolder:(int)arg2;
- (void)addToExpandedFolders:(int)arg1 forFolder:(int)arg2;
- (void)invalidateTimer;
- (void)ListenForMessage:(id)arg1;
- (void)processNotification:(id)arg1;
- (void)callbackToProcessNotif;
- (void)collapseFolder:(CDStruct_86fb2e49 *)arg1 folderIndex:(int)arg2 notifyDelegate:(BOOL)arg3;
- (void)expandFolder:(CDStruct_86fb2e49 *)arg1 folderIndex:(int)arg2 notifyDelegate:(BOOL)arg3;
- (void)expandRootFolder:(BOOL)arg1;
- (void)insertArray:(struct GxVoidArray *)arg1 atIndex:(int)arg2;
- (int)getFolderIndexInArray:(int)arg1;
- (struct GxVoidArray *)createTopLevelChildrenForFolder:(int)arg1;

@end

