#import <objc/NSObject.h>

#import "MCMessageDataSource-Protocol.h"
#import "MessageFilterDelegate-Protocol.h"

@class MFLibraryStore, MessageFilter, NSArray, NSDictionary, NSIndexSet, NSString;

@interface MessageMall : NSObject <MessageFilterDelegate, MCMessageDataSource>
{
    BOOL _isSortedAscending;	// 8 = 0x8
    BOOL _includeDeleted;	// 9 = 0x9
    BOOL _isInThreadedMode;	// 10 = 0xa
    BOOL _displayingToColumn;	// 11 = 0xb
    BOOL _useLibraryIDNumbering;	// 12 = 0xc
    NSArray *_selectedMailboxes;	// 16 = 0x10
    NSArray *_expandedSelectedMailboxes;	// 24 = 0x18
    NSString *_sortOrder;	// 32 = 0x20
    NSString *_secondarySortOrder;	// 40 = 0x28
    NSArray *_filteredMessages;	// 48 = 0x30
    NSDictionary *_originalMessageByMessageID;	// 56 = 0x38
    NSDictionary *_messageCopiesByMessageID;	// 64 = 0x40
    MFLibraryStore *_searchStore;	// 72 = 0x48
    BOOL _filteredListIncludesAllMessages;	// 80 = 0x50
    BOOL _isOpened;	// 81 = 0x51
    BOOL _inSearchMode;	// 82 = 0x52
    BOOL _wasPreviouslyOrderedAscending;	// 83 = 0x53
    BOOL _wasPreviouslyInThreadedMode;	// 84 = 0x54
    BOOL _wasPreviouslyIncludingDeleted;	// 85 = 0x55
    int _activeSearchTarget;	// 88 = 0x58
    MessageFilter *_filter;	// 96 = 0x60
    long long _activeSearchField;	// 104 = 0x68
    NSString *_lastQueryStringFragment;	// 112 = 0x70
    NSArray *_previouslySelectedMailboxes;	// 120 = 0x78
    NSString *_previousSortOrder;	// 128 = 0x80
    NSIndexSet *_openThreadIndexes;	// 136 = 0x88
    unsigned long long _totalMessageCount;	// 144 = 0x90
}

+ (id)expandedMailboxes:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(copy, nonatomic) NSIndexSet *openThreadIndexes; // @synthesize openThreadIndexes=_openThreadIndexes;
@property(nonatomic) BOOL wasPreviouslyIncludingDeleted; // @synthesize wasPreviouslyIncludingDeleted=_wasPreviouslyIncludingDeleted;
@property(nonatomic) BOOL wasPreviouslyInThreadedMode; // @synthesize wasPreviouslyInThreadedMode=_wasPreviouslyInThreadedMode;
@property(nonatomic) BOOL wasPreviouslyOrderedAscending; // @synthesize wasPreviouslyOrderedAscending=_wasPreviouslyOrderedAscending;
@property(copy, nonatomic) NSString *previousSortOrder; // @synthesize previousSortOrder=_previousSortOrder;
@property(retain, nonatomic) NSArray *previouslySelectedMailboxes; // @synthesize previouslySelectedMailboxes=_previouslySelectedMailboxes;
@property(copy, nonatomic) NSString *lastQueryStringFragment; // @synthesize lastQueryStringFragment=_lastQueryStringFragment;
@property(nonatomic) int activeSearchTarget; // @synthesize activeSearchTarget=_activeSearchTarget;
@property(nonatomic) long long activeSearchField; // @synthesize activeSearchField=_activeSearchField;
@property(readonly, nonatomic) MessageFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) BOOL inSearchMode; // @synthesize inSearchMode=_inSearchMode;
@property(nonatomic) BOOL isOpened; // @synthesize isOpened=_isOpened;
@property BOOL filteredListIncludesAllMessages; // @synthesize filteredListIncludesAllMessages=_filteredListIncludesAllMessages;
- (void).cxx_destruct;
- (unsigned long long)sizeForMessage:(id)arg1;
- (unsigned int)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (id)originalOfMessage:(id)arg1;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)addMessagesInSameThreadAsMessage:(id)arg1 toSet:(id)arg2;
- (id)filteredThreadForMessage:(id)arg1;
- (id)threadAtIndex:(unsigned long long)arg1;
- (BOOL)messageIsPartOfAThread:(id)arg1;
- (id)parentOfMessage:(id)arg1;
- (id)repliesToMessage:(id)arg1;
- (void)postNotifications:(id)arg1;
- (void)storesLoaded:(BOOL)arg1;
- (void)storesDidOpen;
- (void)setFilteredMessages:(id)arg1 totalMessageCount:(unsigned long long)arg2 openThreadIndexes:(id)arg3 originalMessageByMessageID:(id)arg4 messageCopiesByMessageID:(id)arg5;
- (void)getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)closeAllThreads;
- (void)openAllThreads;
- (void)closeThread:(id)arg1;
- (void)openThread:(id)arg1;
- (BOOL)needTo;
- (void)setDisplayingToColumn:(BOOL)arg1;
- (BOOL)displayingToColumn;
- (void)toggleThreadedMode;
- (void)setIsInThreadedMode:(BOOL)arg1;
- (BOOL)isInThreadedModeExcludingSearch;
- (BOOL)isInThreadedMode;
- (BOOL)isStillSearching;
- (id)uniquedString:(id)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (void)doCompact;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (void)undeleteMessages:(id)arg1;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (id)snippetsForMessages:(id)arg1;
- (BOOL)supportsSnippets;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)dataForMimePart:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)fullBodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)headersForMessage:(id)arg1;
- (id)messageForMessageID:(id)arg1;
- (id)mailbox;
- (id)account;
@property(readonly) BOOL isReadOnly;
- (id)searchScopeMailboxes;
- (id)expandedSelectedMailboxesAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)selectedMailboxes;
- (id)allMailboxes;
@property(readonly, nonatomic) MFLibraryStore *searchStore;
- (id)stores;
- (id)_storesToRebuild;
- (void)rebuildTableOfContentsAsynchronously;
- (BOOL)canRebuild;
- (BOOL)canCompact;
- (void)unhideMessages:(id)arg1;
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2;
- (unsigned long long)unreadCount;
- (void)setMailboxes:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 initialViewingState:(id)arg6;
- (BOOL)isSortedByDateReceived;
- (BOOL)isSortedAscending;
- (void)setIncludeDeleted:(BOOL)arg1;
- (BOOL)includeDeleted;
- (id)secondarySortOrder;
- (id)sortOrder;
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2 viewingState:(id)arg3;
- (BOOL)selectionIncludesSmartMailbox;
- (id)openThreads;
- (id)filteredMessageAtIndex:(unsigned long long)arg1 isChildOfThread:(char *)arg2;
- (id)filteredMessagesInRange:(struct _NSRange)arg1;
- (id)filteredMessages;
- (id)filteredMessagesAtIndexes:(id)arg1;
- (id)filteredMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)filteredMessagesCount;
- (BOOL)supportsSearching;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldShowRecipientForMailboxes:(id)arg1;
- (id)criterionForString:(id)arg1 type:(long long)arg2 scope:(int)arg3 shouldShowRecipient:(char *)arg4;
- (id)criterionForAttachmentType:(id)arg1;
- (void)searchForString:(id)arg1 in:(int)arg2 withOptions:(long long)arg3 isInThreadedMode:(BOOL)arg4 viewingState:(id)arg5;
- (id)queryStringFragmentFromSuggestions:(id)arg1;
- (void)searchForSuggestions:(id)arg1 in:(int)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 isInThreadedMode:(BOOL)arg5 viewingState:(id)arg6;
- (void)clearPreviousQueryString;
- (void)_searchForCriterion:(id)arg1 isInThreadedMode:(BOOL)arg2 viewingState:(id)arg3;
- (void)clearSearchWithViewingState:(id)arg1;
- (id)_delayedReleaseQueue;
- (void)dealloc;
- (void)unregisterForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

