#import <objc/NSObject.h>

@class NSArray, NSConditionLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface MailboxesOutlineViewStateStorage : NSObject
{
    NSConditionLock *_shouldShowVariablesLock;	// 8 = 0x8
    unsigned long long _shouldShowVariablesToUpdate;	// 16 = 0x10
    unsigned long long _shouldShowVariablesToReset;	// 24 = 0x18
    BOOL _shouldShowOutbox;	// 32 = 0x20
    BOOL _shouldShowDrafts;	// 33 = 0x21
    BOOL _shouldShowTrash;	// 34 = 0x22
    BOOL _shouldShowJunk;	// 35 = 0x23
    BOOL _shouldShowFlags;	// 36 = 0x24
    BOOL _shouldShowArchive;	// 37 = 0x25
    BOOL _shouldShowVIPs;	// 38 = 0x26
    NSMutableSet *_visibleFlagMailboxes;	// 40 = 0x28
    id _firstUpdateLock;	// 48 = 0x30
    BOOL _firstUpdate;	// 56 = 0x38
    id _isListeningForVariablesLock;	// 64 = 0x40
    BOOL _isListeningForDocumentEditorNotifications;	// 72 = 0x48
    BOOL _isListeningForMessagesAdded;	// 73 = 0x49
    BOOL _isListeningForFlagUpdates;	// 74 = 0x4a
    id _sectionItemsLock;	// 80 = 0x50
    NSArray *_sectionItems;	// 88 = 0x58
    NSArray *_visibleSectionItems;	// 96 = 0x60
    NSArray *_visibleMailboxes;	// 104 = 0x68
    id _defaultSectionItemsLock;	// 112 = 0x70
    id _activityMonitorMailboxMapsLock;	// 120 = 0x78
    NSMutableDictionary *_mailboxesPerActivityMonitor;	// 128 = 0x80
    NSMutableDictionary *_activityMonitorsPerMailbox;	// 136 = 0x88
    NSMutableDictionary *_finishedActivityMonitorCountPerMailbox;	// 144 = 0x90
    NSConditionLock *_changedMailboxesLock;	// 152 = 0x98
    NSMutableSet *_changedMailboxes;	// 160 = 0xa0
    NSArray *_draggedMailboxes;	// 168 = 0xa8
    NSSet *_observedTaskNames;	// 176 = 0xb0
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSSet *observedTaskNames; // @synthesize observedTaskNames=_observedTaskNames;
@property(retain) NSArray *draggedMailboxes; // @synthesize draggedMailboxes=_draggedMailboxes;
- (void).cxx_destruct;
- (BOOL)_archiveMessagesOrSubmailboxesExist;
- (BOOL)flagsExist;
- (BOOL)draftsExist;
- (void)_accountInitializedMailboxList:(id)arg1;
- (id)copyActivityMonitorsForMailboxes:(id)arg1 finishedCount:(unsigned long long *)arg2;
- (void)_postChangedMailboxesNotification;
- (void)_notifyChangedMailboxes;
- (void)_setNeedsToNotifyChangedMailboxes:(id)arg1;
- (void)_triggerChangedMailboxesNotification;
- (BOOL)_removeActivityMonitor:(id)arg1 fromMailbox:(id)arg2;
- (BOOL)_addActivityMonitor:(id)arg1 toMailbox:(id)arg2;
- (id)_copyMailboxesForActivityMonitor:(id)arg1;
- (void)_monitoredActivityChanged:(id)arg1;
- (id)_copyKeyForObject:(id)arg1;
@property BOOL shouldShowVIPs;
@property BOOL shouldShowArchive;
@property BOOL shouldShowFlags;
@property BOOL shouldShowJunk;
@property BOOL shouldShowTrash;
@property BOOL shouldShowDrafts;
@property BOOL shouldShowOutbox;
- (void)_setShouldShowVariable:(char *)arg1 withMask:(unsigned long long)arg2 to:(BOOL)arg3;
@property(readonly, copy) NSArray *visibleMailboxes;
@property(readonly, copy) NSArray *visibleSectionItems;
@property(readonly, copy) NSArray *sectionItems;
- (void)_mailboxDisplayCountChanged:(id)arg1;
- (void)_allViewersDidClose:(id)arg1;
- (void)_mailboxListingDidChange:(id)arg1;
- (void)_editorUserSaved:(id)arg1;
- (void)_editorClosed:(id)arg1;
- (void)_viewerPreferencesChanged:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_handleOutboxCountChange;
- (void)_outboxCountDidChange:(id)arg1;
- (void)_deliveryFailureHappened:(id)arg1;
- (void)_VIPsChanged:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_messagesWereAddedToMailboxes:(id)arg1;
- (void)moveSectionItem:(id)arg1 beforeItem:(id)arg2;
- (void)_updateSectionItemsWithNewlyVisibleFlagMailboxes:(id)arg1;
- (void)_writeVisibleFlagsMailboxesToDefaults;
- (void)_readVisibleFlagsMailboxesFromDefaults;
- (void)_writeSectionItemsToDefaults;
- (void)_writeSectionItems:(id)arg1 toDefaultsWithKey:(id)arg2;
- (void)_readSectionItemsFromDefaults;
- (id)_sectionItemsFromDefaultSectionItems:(id)arg1;
- (BOOL)_draftsHasMessageWithNoWindow;
- (void)_updateIsListeningForVariables;
- (void)_updateShouldShowVariables;
- (void)_setNeedsToResetShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_setNeedsToUpdateShouldShowVariablesWithMask:(unsigned long long)arg1;
- (void)_setShouldShowVariablesNeedUpdateWithUpdateMask:(unsigned long long)arg1 resetMask:(unsigned long long)arg2;
- (void)_triggerShouldShowVariablesUpdate;
- (void)dealloc;
- (id)init;

@end

