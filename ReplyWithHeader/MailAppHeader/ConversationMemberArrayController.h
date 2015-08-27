#import <AppKit/NSArrayController.h>

@class MCMessage, NSMutableSet;

@interface ConversationMemberArrayController : NSArrayController
{
    MCMessage *_focusedMessage;	// 240 = 0xf0
    BOOL _temporarilyToggleRelatedMessages;	// 248 = 0xf8
    NSMutableSet *_directlyLinkedSentMessages;	// 256 = 0x100
}

+ (id)keyPathsForValuesAffectingHasRelatedMessages;
@property(retain, nonatomic) NSMutableSet *directlyLinkedSentMessages; // @synthesize directlyLinkedSentMessages=_directlyLinkedSentMessages;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateDirectlyLinkedSentMessagesForContent:(id)arg1;
- (void)_updateFilterPredicate;
@property(readonly, nonatomic) BOOL viewingRelatedMessages;
@property(readonly, nonatomic) BOOL hasRelatedMessages;
@property(nonatomic) BOOL temporarilyToggleRelatedMessages;
- (void)resetConversationState;
@property(retain, nonatomic) MCMessage *focusedMessage;
- (id)arrangeObjects:(id)arg1;
- (id)automaticRearrangementKeyPaths;
- (BOOL)automaticallyRearrangesObjects;
- (void)setContent:(id)arg1;
- (void)dealloc;
- (void)_conversationMemberArrayControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

