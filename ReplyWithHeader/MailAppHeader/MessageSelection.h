#import <objc/NSObject.h>

@class MCMessage, NSArray, NSDictionary;

@interface MessageSelection : NSObject
{
    MCMessage *_initialMessage;	// 8 = 0x8
    NSArray *_conversations;	// 16 = 0x10
    NSDictionary *_focusedMessagesByConversation;	// 24 = 0x18
    NSDictionary *_selectedMessagesForConversation;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, copy, nonatomic) NSDictionary *selectedMessagesByConversation; // @synthesize selectedMessagesByConversation=_selectedMessagesForConversation;
@property(readonly, copy, nonatomic) NSDictionary *focusedMessagesByConversation; // @synthesize focusedMessagesByConversation=_focusedMessagesByConversation;
@property(readonly, copy, nonatomic) NSArray *conversations; // @synthesize conversations=_conversations;
@property(readonly, nonatomic) MCMessage *initialMessage; // @synthesize initialMessage=_initialMessage;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)_messageSelectionCommonInitWithInitialMessage:(id)arg1 conversations:(id)arg2 focusedMessagesByConversation:(id)arg3 selectedMessagesByConversation:(id)arg4 messages:(id)arg5;
- (id)initWithInitialMessage:(id)arg1 conversations:(id)arg2 selectedMessagesByConversation:(id)arg3 messages:(id)arg4;
- (id)initWithInitialMessage:(id)arg1 conversations:(id)arg2 focusedMessagesByConversation:(id)arg3 messages:(id)arg4;

@end

