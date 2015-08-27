#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSOperationQueue;

@interface ConversationsObserver : NSObject
{
    NSCountedSet *_registeredConversationIDs;	// 8 = 0x8
    NSMutableDictionary *_mailboxCriterionByConversationID;	// 16 = 0x10
    NSOperationQueue *_workQueue;	// 24 = 0x18
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (void)_updateRegistrationForConversation:(id)arg1 withNewConversationID:(id)arg2;
- (BOOL)_isRegistered:(id)arg1;
- (void)unregisterConversationID:(long long)arg1;
- (void)registerConversationID:(long long)arg1 withMailboxCriterion:(id)arg2;
- (unsigned int)_loadOptions;
- (id)_criterionForConversationID:(id)arg1;
- (id)_primaryMessagesForConversationIDNumber:(id)arg1;
- (id)_primaryMessagesForConversations:(id)arg1;
- (id)_allMessagesForConversationIDNumber:(id)arg1;
- (id)_allMessagesForConversations:(id)arg1;
- (void)dealloc;
- (id)init;

@end

