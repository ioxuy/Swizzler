//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "DataSourceCache.h"

@class ConversationListItem, EmailListItemDAO, NSLock, NSMutableArray, NSMutableDictionary, NSThread;

@interface EmailDataSourceCache : DataSourceCache
{
    NSLock *_emailProcessLock;
    NSMutableDictionary *_conversationThreadDictionary;
    ConversationListItem *_conversation;
    BOOL _isCompleteLoadingAllEmails;
    EmailListItemDAO *_emailListItemDAO;
    NSThread *_emailLoadThread;
    NSMutableArray *_notificationQueue;
    id <EmailDataSourceCacheDelegate> _delegate;
    int _folderId;
    int _sortKey;
    int _unreadCount;
    int _totalCount;
    NSThread *_notificationQueueThread;
}

@property(retain, nonatomic) NSThread *notificationQueueThread; // @synthesize notificationQueueThread=_notificationQueueThread;
@property(nonatomic) BOOL isCompleteLoadingAllEmails; // @synthesize isCompleteLoadingAllEmails=_isCompleteLoadingAllEmails;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) int sortKey; // @synthesize sortKey=_sortKey;
@property(nonatomic) int folderId; // @synthesize folderId=_folderId;
@property(nonatomic) id <EmailDataSourceCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSThread *emailLoadThread; // @synthesize emailLoadThread=_emailLoadThread;
@property(retain, nonatomic) EmailListItemDAO *emailListItemDAO; // @synthesize emailListItemDAO=_emailListItemDAO;
@property(retain, nonatomic) NSMutableDictionary *conversationThreadDictionary; // @synthesize conversationThreadDictionary=_conversationThreadDictionary;
- (BOOL)isOlderEventEmail:(int)arg1 appointmentExists:(BOOL)arg2;
- (id)findEmailListItemForNotificationObject:(id)arg1 withNotificationType:(int)arg2;
- (id)findEmailListItemWithRecordNumber:(int)arg1;
- (id)findOriginalEmailListItemWithRecordNumber:(int)arg1;
- (void)flagMultiselectedEmailsInBackgroundWithUserInfo:(id)arg1;
- (void)flagEmailInBackgroundWithUserInfo:(id)arg1;
- (void)moveEmailsInBackgroundWithUserInfo:(id)arg1;
- (void)markMultiselectReadStatusInBackgroundWithUserInfo:(id)arg1;
- (void)markReadStatusInBackgroundWithUserInfo:(id)arg1;
- (void)deleteObjectsWithRecordNumbersInBackground:(id)arg1;
- (void)updateTotalCount;
- (void)updateUnreadCount;
- (BOOL)isCurrentFolder:(int)arg1;
- (void)reallyUpdateCounts;
- (void)updateCounts;
- (void)stopProcessingNotificationQueue;
- (void)startProcessNotificationQueue;
- (void)stopLoadingEmailListItems;
- (int)processCacheNotification:(id)arg1;
- (void)receiveProxyNotifications:(id)arg1;
- (void)processBatchLoad:(id)arg1 state:(int)arg2;
- (void)loadEmailsInBackgroundWithUserInfo:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)addOrReplaceObjects:(id)arg1;
- (void)queueNotificationWithEmail:(id)arg1 notification:(id)arg2;
- (void)processNotificationBatch:(id)arg1 type:(int)arg2;
- (void)processNotificationQueue;
- (void)moveMultiselectedEmailItemsToFolderId:(int)arg1;
- (void)moveEmailItems:(id)arg1 ToFolderId:(int)arg2;
- (void)markMultiselectedEmailsWithReadStatus:(BOOL)arg1;
- (void)emptyTrash;
- (void)deleteMultiselectedEmailItems;
- (unsigned int)multiselectedEmailItemCount;
- (id)allMultiselectedEmailAndThreadItems;
- (id)allMultiselectedEmailItems;
- (BOOL)areAllEmailItemsMultiselected;
- (void)setMultiselectedForAllEmailItems;
- (void)clearMultiselectOfAllEmailItems;
- (void)changeMultiselectOfAllEmailItemsInto:(BOOL)arg1;
- (void)flagMultiselectedEmailsWithFlag:(int)arg1;
- (void)userFlagEmailWithId:(int)arg1 withFlag:(int)arg2;
- (void)userUpdateEmailWithId:(int)arg1 toReadStatus:(BOOL)arg2;
- (void)userDeleteEmailsWithRecordNumbers:(id)arg1;
- (void)userMoveEmailsWithRecordNumbers:(id)arg1 toFolder:(int)arg2;
- (void)userDeleteAllEmailsInFolderId:(id)arg1;
- (void)userDeleteEmails:(id)arg1;
- (void)startEmailBatchLoad;
- (void)reloadEmails;
- (void)loadFromConversation;
- (BOOL)loadFolderWithId:(int)arg1 sortKey:(int)arg2;
- (void)conversationThreadingDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) ConversationListItem *conversation; // @synthesize conversation=_conversation;

@end

