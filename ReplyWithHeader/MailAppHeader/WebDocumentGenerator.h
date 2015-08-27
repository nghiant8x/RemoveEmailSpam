#import <objc/NSObject.h>

@class ConversationMember, MCActivityMonitor, MCTaskOperation, MUIWebDocument, NSMutableArray, NSOperationQueue;

@interface WebDocumentGenerator : NSObject
{
    NSMutableArray *_asyncLoadCompletionHandlers;	// 8 = 0x8
    MCActivityMonitor *_loadMonitor;	// 16 = 0x10
    MCTaskOperation *_fetchOperation;	// 24 = 0x18
    MCTaskOperation *_parseOperation;	// 32 = 0x20
    BOOL _startedLoad;	// 40 = 0x28
    BOOL _registeredForMessageDataAvailableNotification;	// 41 = 0x29
    MUIWebDocument *_webDocument;	// 48 = 0x30
    NSOperationQueue *_configurationSerialQueue;	// 56 = 0x38
    ConversationMember *_conversationMember;	// 64 = 0x40
}

@property(readonly, nonatomic) __weak ConversationMember *conversationMember; // @synthesize conversationMember=_conversationMember;
@property(readonly, nonatomic) NSOperationQueue *configurationSerialQueue; // @synthesize configurationSerialQueue=_configurationSerialQueue;
@property(retain, nonatomic) MUIWebDocument *webDocument; // @synthesize webDocument=_webDocument;
- (void).cxx_destruct;
- (void)cancelLoad;
- (void)_messageBodyDataBecameAvailable:(id)arg1;
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_dataDetectorsContextForMessage:(id)arg1;
- (id)_loadQueue;
- (id)description;
- (void)dealloc;
- (id)initWithConversationMember:(id)arg1;

@end

