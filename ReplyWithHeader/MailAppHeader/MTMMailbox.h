#import <objc/NSObject.h>

#import "MFUIMailbox-Protocol.h"

@class NSArray, NSColor, NSDictionary, NSEnumerator, NSFont, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol MTMMailboxControllerProtocol;

@interface MTMMailbox : NSObject <MFUIMailbox>
{
    NSMutableArray *_subMailboxes;	// 8 = 0x8
    NSMutableArray *_messages;	// 16 = 0x10
    NSMutableArray *_pendingMessages;	// 24 = 0x18
    id <MTMMailboxControllerProtocol> _controller;	// 32 = 0x20
    NSMutableDictionary *_messageColumnAttributes;	// 40 = 0x28
    BOOL _messagesLoaded;	// 48 = 0x30
    BOOL _updatePaused;	// 49 = 0x31
    NSDictionary *_mailboxDict;	// 56 = 0x38
    MTMMailbox *_parentMailbox;	// 64 = 0x40
    NSEnumerator *_messageEnumerator;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (Class)mailboxClassForMailboxDictionary:(id)arg1;
+ (void)setSectionOrder:(id)arg1;
@property(nonatomic) BOOL updatePaused; // @synthesize updatePaused=_updatePaused;
@property(retain, nonatomic) NSEnumerator *messageEnumerator; // @synthesize messageEnumerator=_messageEnumerator;
@property(nonatomic) BOOL messagesLoaded; // @synthesize messagesLoaded=_messagesLoaded;
@property(readonly, nonatomic) __weak MTMMailbox *parentMailbox; // @synthesize parentMailbox=_parentMailbox;
@property(readonly, copy, nonatomic) NSDictionary *mailboxDict; // @synthesize mailboxDict=_mailboxDict;
- (void).cxx_destruct;
- (unsigned long long)numberOfMessage:(id)arg1;
- (void)discardMailbox;
- (void)resumeMailboxUpdate;
- (void)pauseMailboxUpdate;
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;
- (void)_updateMessagesWhilePaused:(id)arg1;
- (void)_updateMessages:(id)arg1;
- (BOOL)needsToLoadMessagesInBackground;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSFont *messageListFont;
@property(readonly, nonatomic) NSColor *messageListColor;
@property(readonly, copy, nonatomic) NSString *subRestoreString;
@property(readonly, copy, nonatomic) NSString *restoreString;
@property(readonly, copy, nonatomic) NSString *defaultMessageColumnAttributesKey;
@property(readonly, copy, nonatomic) NSDictionary *messageColumnAttributes;
- (BOOL)_addAttributesFromInfo:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageColumnConfiguration;
@property(readonly, copy, nonatomic) NSString *restoreMode;
@property(readonly, copy, nonatomic) NSString *displayMode;
@property(readonly, nonatomic) BOOL canCollapse;
@property(readonly, nonatomic) BOOL showSender;
@property(readonly, copy, nonatomic) NSString *senderTitleString;
@property(readonly, copy, nonatomic) NSString *dateTitleString;
- (long long)compareIndexInOutline:(id)arg1;
- (long long)_compareName:(id)arg1;
- (void)sortSubMailboxes;
@property(readonly, nonatomic) SEL sortSelector;
- (unsigned long long)indexInOutline;
- (id)_messagesFolderPathFromMailboxFolderPath:(id)arg1;
- (id)getMessageEnumerator;
- (void)reloadMessages;
- (id)messageWithIdentifier:(id)arg1;
- (void)addMessages:(id)arg1;
- (void)addMessagesObject:(id)arg1;
@property(copy, nonatomic) NSArray *messages;
- (void)_loadMessages;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (void)_addSubMailbox:(id)arg1;
- (void)_addSubMailboxesFromDictionaries:(id)arg1;
- (id)_sortedMaiboxDictsForMailboxDicts:(id)arg1;
- (BOOL)_shouldSortMailboxes;
- (BOOL)hasChildren;
- (unsigned long long)numberOfChildren;
- (id)subMailboxWithIdentifier:(id)arg1;
- (id)children;
@property(readonly, copy, nonatomic) NSArray *subMailboxes;
@property(readonly) BOOL isVisibleFlaggedMailbox;
- (BOOL)isPlaceholder;
- (BOOL)isSmartMailbox;
- (BOOL)isStore;
- (unsigned long long)displayCount;
- (BOOL)isContainer;
@property(readonly, copy, nonatomic) NSString *displayNameInMessageList;
@property(readonly, copy) NSString *displayNameInTitleBar;
- (id)_severalMessagesFormatString;
- (id)_oneMesageString;
- (id)extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayNameForList;
- (id)displayName;
@property(readonly, copy, nonatomic) NSArray *paths;
@property(readonly, nonatomic) NSURL *timeMachineURL;
@property(readonly, copy, nonatomic) NSString *path;
- (id)accountURLString;
- (id)account;
@property(readonly, nonatomic) BOOL enabled;
@property(readonly, nonatomic) BOOL asyncLoading;
@property int type;
@property(readonly, nonatomic) long long backupType;
@property(readonly, nonatomic) id revisionID;
- (id)persistentIdentifier;
@property(readonly, nonatomic) id identifier;
- (id)mailboxWithMailboxPath:(id)arg1;
- (id)mailboxPath;
- (id)mailboxWithIndexPath:(id)arg1;
- (id)indexPathFromMailbox:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 controller:(id)arg2;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> controller;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

