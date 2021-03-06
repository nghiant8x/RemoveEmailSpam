#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class Conversation, MCMessage, MCMessageBody, MCMessageHeaders, MUIWebDocument, NSArray, NSData, NSDate, NSImage, NSIndexSet, NSMutableArray, NSMutableSet, NSString, WebDocumentGenerator;

@interface ConversationMember : NSObject <NSCopying>
{
    NSMutableSet *_primitiveMessages;	// 8 = 0x8
    NSMutableSet *_primaryMessages;	// 16 = 0x10
    NSMutableSet *_hiddenMessages;	// 24 = 0x18
    NSMutableArray *_asyncLoadCompletionHandlers;	// 32 = 0x20
    BOOL _isPrimary;	// 40 = 0x28
    BOOL _isDeleted;	// 41 = 0x29
    MCMessage *_originalMessage;	// 48 = 0x30
    NSImage *_senderImage;	// 56 = 0x38
    BOOL _senderIsVIP;	// 64 = 0x40
    int _conversationPosition;	// 68 = 0x44
    BOOL _primitiveIsUnread;	// 72 = 0x48
    BOOL _primitiveIsFlagged;	// 73 = 0x49
    NSIndexSet *_primitiveFlagColors;	// 80 = 0x50
    unsigned long long _primitiveJunkStatus;	// 88 = 0x58
    MUIWebDocument *_webDocument;	// 96 = 0x60
    WebDocumentGenerator *_documentGenerator;	// 104 = 0x68
    BOOL _startedLoad;	// 112 = 0x70
    BOOL _messageDataCached;	// 113 = 0x71
    BOOL _registeredForNotifications;	// 114 = 0x72
    BOOL _senderImageLoadedOrTimedOut;	// 115 = 0x73
    MCMessageHeaders *_headers;	// 120 = 0x78
    Conversation *_conversation;	// 128 = 0x80
    NSArray *_messages;	// 136 = 0x88
    NSString *_messageURLString;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingJunkStatus;
+ (id)keyPathsForValuesAffectingFlagColors;
+ (id)keyPathsForValuesAffectingIsFlagged;
+ (id)keyPathsForValuesAffectingIsUnread;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveJunkStatus;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveFlagColors;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsFlagged;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsUnread;
+ (BOOL)automaticallyNotifiesObserversOfConversationPosition;
+ (BOOL)automaticallyNotifiesObserversOfSenderIsVIP;
+ (BOOL)automaticallyNotifiesObserversOfSenderImage;
+ (BOOL)automaticallyNotifiesObserversOfOriginalMessage;
+ (BOOL)automaticallyNotifiesObserversOfIsDeleted;
+ (BOOL)automaticallyNotifiesObserversOfIsPrimary;
+ (id)keyPathsForValuesAffectingSignerNames;
+ (id)keyPathsForValuesAffectingSigners;
+ (id)keyPathsForValuesAffectingIsSigned;
+ (id)keyPathsForValuesAffectingIsEncrypted;
+ (id)keyPathsForValuesAffectingMessageBody;
+ (id)keyPathsForValuesAffectingAttachmentSize;
+ (id)keyPathsForValuesAffectingNumberOfAttachments;
+ (id)keyPathsForValuesAffectingMailboxName;
+ (id)keyPathsForValuesAffectingDateReceived;
+ (id)keyPathsForValuesAffectingSubject;
+ (id)keyPathsForValuesAffectingBccRecipients;
+ (id)keyPathsForValuesAffectingCcRecipients;
+ (id)keyPathsForValuesAffectingToRecipients;
+ (id)keyPathsForValuesAffectingSender;
+ (id)keyPathsForValuesAffectingMessageIDHeaderDigest;
+ (id)flagsAffectingConversationMember;
@property(copy, nonatomic) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(nonatomic) BOOL senderImageLoadedOrTimedOut; // @synthesize senderImageLoadedOrTimedOut=_senderImageLoadedOrTimedOut;
@property(nonatomic) BOOL registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) BOOL messageDataCached; // @synthesize messageDataCached=_messageDataCached;
@property(nonatomic) BOOL startedLoad; // @synthesize startedLoad=_startedLoad;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak Conversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) MCMessageHeaders *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
- (id)messagesInSameMailboxAsOriginalMessage;
- (BOOL)isPrimaryMessage:(id)arg1;
- (void)unhideMessage:(id)arg1;
- (void)hideMessage:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)addMessage:(id)arg1 isPrimary:(BOOL)arg2;
- (id)_preferredOriginalMessage;
- (void)_reloadOriginalMessage;
- (BOOL)_messageIsInSent:(id)arg1;
- (BOOL)_messageIsInTrashJunkOrOutbox:(id)arg1;
- (BOOL)_messageIsDeleted:(id)arg1;
- (BOOL)_shouldDisplayMessage:(id)arg1;
- (void)updateLastViewedDate;
- (void)_reloadSenderIsVIP;
- (void)_VIPSendersDidChange:(id)arg1;
- (void)_reloadValuesForAggregateFlags;
- (void)flagsChangedForMessage:(id)arg1;
@property(nonatomic) unsigned long long junkStatus;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic) BOOL isFlagged;
@property(nonatomic) BOOL isUnread;
- (void)_addressPhotoChanged:(id)arg1;
- (void)_addressPhotoLoaded:(id)arg1;
- (void)_asyncLoadSenderImage;
- (void)_senderImageTimedOut;
- (void)_sharedPreferencesDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) unsigned long long primitiveJunkStatus;
@property(copy, nonatomic) NSIndexSet *primitiveFlagColors;
@property(nonatomic) BOOL primitiveIsFlagged;
@property(nonatomic) BOOL primitiveIsUnread;
@property(nonatomic) int conversationPosition;
@property(nonatomic) BOOL senderIsVIP;
@property(retain, nonatomic) NSImage *senderImage;
@property(retain, nonatomic) MCMessage *originalMessage;
@property(nonatomic) BOOL isDeleted;
@property(nonatomic) BOOL isPrimary;
@property(readonly, nonatomic) NSArray *signerNames;
@property(readonly, nonatomic) NSArray *signers;
@property(readonly, nonatomic) BOOL isSigned;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) MCMessageBody *messageBody;
@property(readonly, nonatomic) unsigned long long attachmentSize;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly, copy, nonatomic) NSDate *dateReceived;
@property(readonly, copy, nonatomic) NSString *subject;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
@property(readonly, copy, nonatomic) NSString *sender;
@property(readonly, copy, nonatomic) NSData *messageIDHeaderDigest;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(retain, nonatomic) WebDocumentGenerator *documentGenerator;
- (void)cancelLoad;
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 primaryMessages:(id)arg2 forConversation:(id)arg3;
- (id)initWithMessage:(id)arg1 isPrimary:(BOOL)arg2 forConversation:(id)arg3;
- (id)init;

@end

