#import <objc/NSObject.h>

#import "MFMessageSortContext-Protocol.h"
#import "MFMessageSortingValueDelegate-Protocol.h"

@class MCInvocationQueue, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSNumber, NSString;
@protocol MessageFilterDelegate;

@interface MessageFilter : NSObject <MFMessageSortContext, MFMessageSortingValueDelegate>
{
    int _taskCounter;	// 8 = 0x8
    NSMutableArray *_filteredMessages;	// 16 = 0x10
    NSMutableArray *_allStores;	// 24 = 0x18
    NSMutableSet *_storesWaitingToLoad;	// 32 = 0x20
    NSMutableDictionary *_allMessagesByStore;	// 40 = 0x28
    NSMutableDictionary *_nonDeletedMessagesByStore;	// 48 = 0x30
    NSMutableSet *_hiddenMessages;	// 56 = 0x38
    NSMutableSet *_undeletedMessages;	// 64 = 0x40
    NSMutableSet *_storesBeingOpened;	// 72 = 0x48
    NSString *_primarySortOrder;	// 80 = 0x50
    NSString *_secondarySortOrder;	// 88 = 0x58
    NSMutableDictionary *_messageSortValues;	// 96 = 0x60
    NSMutableDictionary *_conversationIDByMessage;	// 104 = 0x68
    NSMutableDictionary *_threadsByConversationID;	// 112 = 0x70
    NSMutableIndexSet *_openThreadIndexes;	// 120 = 0x78
    NSMutableDictionary *_originalMessageByMessageID;	// 128 = 0x80
    NSMutableDictionary *_messageCopiesByMessageID;	// 136 = 0x88
    NSMutableSet *_pendingSelectedMessageIdentifiers;	// 144 = 0x90
    NSMutableSet *_pendingSelectedThreadIdentifiers;	// 152 = 0x98
    NSMutableSet *_pendingOpenThreadIdentifiers;	// 160 = 0xa0
    BOOL _isSortedAscending;	// 168 = 0xa8
    BOOL _includeDeleted;	// 169 = 0xa9
    BOOL _isInThreadedMode;	// 170 = 0xaa
    BOOL _awaitingInitialMessages;	// 171 = 0xab
    id <MessageFilterDelegate> _delegate;	// 176 = 0xb0
    MCInvocationQueue *_filterTasks;	// 184 = 0xb8
    unsigned long long _totalMessageCount;	// 192 = 0xc0
    NSNumber *_pendingScrollStyle;	// 200 = 0xc8
    id _pendingPinnedMessageIdentifier;	// 208 = 0xd0
    NSNumber *_pendingPinnedThreadIdentifier;	// 216 = 0xd8
    double _pendingPinningOffset;	// 224 = 0xe0
}

+ (CDUnknownBlockType)sortComparatorForThreads;
+ (CDUnknownBlockType)sortComparatorForThreadsWithSortOrderAscending:(BOOL)arg1;
+ (void)initialize;
@property(nonatomic) double pendingPinningOffset; // @synthesize pendingPinningOffset=_pendingPinningOffset;
@property(retain, nonatomic) NSNumber *pendingPinnedThreadIdentifier; // @synthesize pendingPinnedThreadIdentifier=_pendingPinnedThreadIdentifier;
@property(copy, nonatomic) id pendingPinnedMessageIdentifier; // @synthesize pendingPinnedMessageIdentifier=_pendingPinnedMessageIdentifier;
@property(retain, nonatomic) NSNumber *pendingScrollStyle; // @synthesize pendingScrollStyle=_pendingScrollStyle;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) BOOL awaitingInitialMessages; // @synthesize awaitingInitialMessages=_awaitingInitialMessages;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(readonly, nonatomic) MCInvocationQueue *filterTasks; // @synthesize filterTasks=_filterTasks;
@property __weak id <MessageFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_indexesAdjustedByOpenThreads:(id)arg1;
- (unsigned long long)_indexAdjustedByOpenThreads:(unsigned long long)arg1;
- (unsigned long long)_removeObjectIfPresent:(id)arg1 fromArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didRemove:(char *)arg5;
- (unsigned long long)_insertObjectIfAbsent:(id)arg1 intoArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didInsert:(char *)arg5;
- (BOOL)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 atIndex:(unsigned long long)arg4;
- (unsigned long long)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 inSortedRange:(struct _NSRange)arg4 usingComparator:(CDUnknownBlockType)arg5 didRemove:(char *)arg6;
- (id)_removeSortedMessages:(id)arg1 fromArray:(id)arg2 sortValues:(id)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)_insertMessageIfAbsent:(id)arg1 intoMallArray:(id)arg2 sortValues:(id)arg3 inSortedRange:(struct _NSRange)arg4 usingComparator:(CDUnknownBlockType)arg5 didInsert:(char *)arg6;
- (id)_mergeMessages:(id)arg1 intoArray:(id)arg2 sortValues:(id)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (long long)sortingUniqueIdentifierForMessageThread:(id)arg1;
- (id)_messagesIncludingHiddenCopies:(id)arg1;
- (unsigned int)sortingMessageFlagsForMessage:(id)arg1;
- (unsigned int)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (unsigned long long)sortingSizeForMessage:(id)arg1;
- (unsigned long long)sizeForMessage:(id)arg1;
- (id)arrayWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2;
- (id)arrayOfSortOrders;
- (id)_storeForMailbox:(id)arg1 cache:(id)arg2;
- (unsigned int)_loadOptions;
- (id)_updateCopiesInfoForMessages:(id)arg1;
- (id)_structureChangesByAdjustingThreads:(id)arg1 messageRemovals:(id)arg2 messageMoves:(id)arg3 deletedThreads:(id *)arg4;
- (id)_filterOutMessages:(id)arg1;
- (id)_filterInMessages:(id)arg1;
- (id)_updateFilteredListByAddingMessages:(id)arg1 removingMessages:(id)arg2;
- (void)_filterTaskCompleted:(id)arg1 taskID:(int)arg2;
- (void)_addTaskToFilterQueue:(id)arg1;
- (id)_filterTaskInfoByMergingTaskInfos:(id)arg1;
- (id)_fullTaskInfoFromChangeDictionary:(id)arg1;
- (void)_performFilterTask:(id)arg1 taskID:(int)arg2;
- (id)_originalForMessage:(id)arg1;
- (BOOL)_shouldAlwaysShowDuplicates;
- (BOOL)_shouldShowCopy:(id)arg1;
- (BOOL)_shouldDisplayMessage:(id)arg1;
- (long long)compareByNumberMessage:(id)arg1 andMessage:(id)arg2 sortedAscending:(BOOL)arg3;
- (void)_removeMessagesFromByStoreTables:(id)arg1;
- (void)_addMessages:(id)arg1 toTablesForStore:(id)arg2;
- (void)_removeMessagesInStores:(id)arg1 fromCopiesInfoWithStoreCache:(id)arg2;
- (void)_removeMessagesInStores:(id)arg1 fromMessages:(id)arg2 storeCache:(id)arg3;
- (id)_handleComponentStoreStructureChanged:(id)arg1;
- (void)_componentStoreStructureChanged:(id)arg1;
- (id)_handleMessagesAdded:(id)arg1;
- (void)_componentStoreMessagesWereAdded:(id)arg1;
- (id)_storeFinishedLoading:(id)arg1;
- (void)_componentStoreFinishedLoading:(id)arg1;
- (id)_addMessages:(id)arg1 toStore:(id)arg2;
- (id)_removeMessages:(id)arg1 reason:(id)arg2;
- (id)_addStore:(id)arg1;
- (void)_addMessagesToByStoreTables:(id)arg1;
- (id)_threadForMessage:(id)arg1;
- (CDUnknownFunctionPointerType)_secondarySortFunction;
- (CDUnknownFunctionPointerType)_primarySortFunction;
- (CDUnknownFunctionPointerType)_sortFunctionForSortOrder:(id)arg1;
- (CDUnknownBlockType)_sortComparatorWithContext:(id)arg1 sortValues:(id)arg2;
- (id)_handleComponentStoreDidOpen:(id)arg1;
- (void)_componentStoreDidOpen:(id)arg1;
- (id)_handleLibraryConversationsWereChanged:(id)arg1;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (id)_handleLibraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (id)_handleLibraryMessagesUpdated:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (BOOL)_isKnownMessage:(id)arg1;
- (id)_knownAndUnknownMessages:(id)arg1 fromMessages:(id)arg2;
- (id)_handleLibraryMessagesFlagsChanged:(id)arg1;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (void)_prepareToDisplayThread:(id)arg1;
- (unsigned long long)_indexOfChildMessage:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)_getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_closeAllThreads;
- (void)closeAllThreads;
- (struct _NSRange)_closeThread:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_closeThreads:(id)arg1 selectingThread:(id)arg2;
- (void)closeThreads:(id)arg1 selectingThread:(id)arg2;
- (id)_openAllThreads;
- (void)openAllThreads;
- (struct _NSRange)_openThread:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_openThreads:(id)arg1;
- (void)openThreads:(id)arg1;
- (id)_unhideMessages:(id)arg1;
- (void)unhideMessages:(id)arg1;
- (id)_hideMessages:(id)arg1 selectingNextMessage:(id)arg2;
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2;
- (id)_refilter;
- (id)_hideDeletedMessages;
- (void)hideDeletedMessages;
- (id)_showDeletedMessages;
- (void)showDeletedMessages;
- (id)_ungroupMessages;
- (void)ungroupMessages;
- (id)_groupMessages;
- (void)groupMessages;
- (id)_findPendingObjectsInList;
- (id)_invertFilteredListWithViewingState:(id)arg1;
- (void)invertFilteredListWithViewingState:(id)arg1;
- (id)_resortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2 viewingState:(id)arg3;
- (void)resortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2 viewingState:(id)arg3;
- (void)_clearAllMessageInfo;
- (void)_unrollViewingState:(id)arg1;
- (id)_setStores:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 viewingState:(id)arg6;
- (void)setStores:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 viewingState:(id)arg6;
- (void)_dumpDiagnosticInfo;
- (void)unregisterForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

