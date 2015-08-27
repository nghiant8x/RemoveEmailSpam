#import <objc/NSObject.h>

@class MFMailbox, MFMessageStore, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface _TransferOperation : NSObject
{
    NSMutableArray *_sourceMessages;	// 8 = 0x8
    NSMutableArray *_documentIDs;	// 16 = 0x10
    id _messagesForGmailLabelsToRemoveLock;	// 24 = 0x18
    NSMutableDictionary *_messagesForGmailLabelsToRemove;	// 32 = 0x20
    BOOL _editableDocuments;	// 40 = 0x28
    MFMessageStore *_sourceStore;	// 48 = 0x30
    MFMailbox *_destinationMailbox;	// 56 = 0x38
    NSArray *_unreadSourceMessages;	// 64 = 0x40
    NSArray *_destinationMessageIDs;	// 72 = 0x48
}

@property(readonly, nonatomic) BOOL editableDocuments; // @synthesize editableDocuments=_editableDocuments;
@property(retain) NSArray *destinationMessageIDs; // @synthesize destinationMessageIDs=_destinationMessageIDs;
@property(retain) NSArray *unreadSourceMessages; // @synthesize unreadSourceMessages=_unreadSourceMessages;
@property(readonly, nonatomic) MFMailbox *destinationMailbox; // @synthesize destinationMailbox=_destinationMailbox;
@property(readonly, nonatomic) MFMessageStore *sourceStore; // @synthesize sourceStore=_sourceStore;
- (void).cxx_destruct;
- (id)popMessagesForGmailLabelsToRemove;
- (void)addMessage:(id)arg1 forLabelsToRemove:(id)arg2;
@property(readonly, copy) NSDictionary *messagesForGmailLabelsToRemove;
- (void)removeSourceMessages:(id)arg1;
- (void)addSourceMessage:(id)arg1;
@property(retain, nonatomic) NSArray *sourceMessages;
@property(readonly, nonatomic) NSArray *documentIDs; // @synthesize documentIDs=_documentIDs;
- (id)sourceLibraryStore;
- (id)initWithSourceStore:(id)arg1 destinationMailbox:(id)arg2 editableDocuments:(BOOL)arg3;

@end

