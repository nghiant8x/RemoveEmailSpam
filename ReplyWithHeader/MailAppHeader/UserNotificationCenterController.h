#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class MFMailbox, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface UserNotificationCenterController : NSObject <NSUserNotificationCenterDelegate>
{
    MFMailbox *_userNotificationMailbox;	// 8 = 0x8
    long long _userNotificationScope;	// 16 = 0x10
    NSMutableDictionary *_messagesInNeedingSnippetsInMailboxes;	// 24 = 0x18
    NSMutableSet *_messagesSentBySelf;	// 32 = 0x20
    NSMutableSet *_forcedNotificationMessageIDs;	// 40 = 0x28
    NSMutableArray *_mostRecentMessageDates;	// 48 = 0x30
    BOOL _isRichList;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    unsigned long long _numberOfSnippetLines;	// 72 = 0x48
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL isRichList; // @synthesize isRichList=_isRichList;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (BOOL)_shouldSendUserNotificationForMessage:(id)arg1 inMailbox:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;
- (void)setUserNotificationScope:(long long)arg1 mailbox:(id)arg2;
- (long long)userNotificationScope;
- (void)_deleteUserNotificationWithKey:(id)arg1 object:(id)arg2;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_viewerLayoutPreferenceChanged:(id)arg1;
- (void)_messagesWereReadOrDeleted:(id)arg1;
- (void)_sendUserNotificationForSenderName:(id)arg1 subject:(id)arg2 snippet:(id)arg3 messageID:(id)arg4 accountID:(id)arg5 mailboxPersistentID:(id)arg6 messageDate:(id)arg7 isVip:(BOOL)arg8 hasAttachments:(BOOL)arg9;
- (void)_postUserNotificationForMessagesInMailboxes:(id)arg1 withSnippets:(id)arg2;
- (void)_messageSnippetsUpdated:(id)arg1;
- (id)_snippetsForMessagesInMailboxes:(id)arg1;
- (void)_ruleWasMatched:(id)arg1;
- (BOOL)_shouldGetSnippetForMessage:(id)arg1;
- (void)_messagesWereAdded:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_setUserNotificationMailbox:(id)arg1;
- (id)userNotificationMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_clearNotificationsForDeletedAccounts;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

