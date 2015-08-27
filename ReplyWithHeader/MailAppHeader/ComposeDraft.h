#import <objc/NSObject.h>

@class MFDeliveryAccount, MFMailAccount, MFMailbox, MUIWebDocument, NSArray, NSMutableArray, NSPointerArray, NSString, NSUndoManager;

@interface ComposeDraft : NSObject
{
    BOOL _hasUndoManager;	// 8 = 0x8
    NSUndoManager *_undoManager;	// 16 = 0x10
    id _weakProxy;	// 24 = 0x18
    NSMutableArray *_windowControllers;	// 32 = 0x20
    NSPointerArray *_editors;	// 40 = 0x28
    NSString *_fromAddress;	// 48 = 0x30
    MFMailAccount *_fromAccount;	// 56 = 0x38
    long long _deliveryPriority;	// 64 = 0x40
    MFDeliveryAccount *_deliveryAccount;	// 72 = 0x48
    NSArray *_toAddresses;	// 80 = 0x50
    NSArray *_ccAddresses;	// 88 = 0x58
    NSArray *_bccAddresses;	// 96 = 0x60
    NSArray *_replyToAddresses;	// 104 = 0x68
    NSString *_subject;	// 112 = 0x70
    MUIWebDocument *_webDocument;	// 120 = 0x78
    BOOL _isEdited;	// 128 = 0x80
    BOOL _hasUnsavedChanges;	// 129 = 0x81
    NSString *_documentID;	// 136 = 0x88
    MFMailbox *_mailbox;	// 144 = 0x90
    long long _changeCount;	// 152 = 0x98
    long long _generationCount;	// 160 = 0xa0
    CDUnknownBlockType _commitEditingCompletionHandler;	// 168 = 0xa8
    NSString *_displayName;	// 176 = 0xb0
}

+ (id)defaultDraftName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) CDUnknownBlockType commitEditingCompletionHandler; // @synthesize commitEditingCompletionHandler=_commitEditingCompletionHandler;
@property(nonatomic) long long generationCount; // @synthesize generationCount=_generationCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) BOOL hasUnsavedChanges; // @synthesize hasUnsavedChanges=_hasUnsavedChanges;
@property(nonatomic) BOOL isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(readonly, copy, nonatomic) NSString *documentID; // @synthesize documentID=_documentID;
- (void).cxx_destruct;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_commitEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_discardEditing;
- (void)_editor:(id)arg1 didCommit:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_currentEditor;
- (void)close:(id)arg1;
- (void)send:(id)arg1;
- (void)saveMessageToDrafts:(id)arg1;
- (void)showWindows:(id)arg1;
- (void)removeWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
@property(readonly, copy, nonatomic) NSArray *windowControllers;
- (id)_weakProxy;
@property(nonatomic) BOOL hasUndoManager;
@property(retain, nonatomic) NSUndoManager *undoManager;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2;
- (id)changeCountTokenForSaveOperation:(long long)arg1;
- (void)updateChangeCount:(long long)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)saveToMailbox:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeToMailbox:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)messageWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readFromMailbox:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readFromMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSArray *replyToAddresses;
@property(copy, nonatomic) NSArray *bccAddresses;
@property(copy, nonatomic) NSArray *ccAddresses;
@property(copy, nonatomic) NSArray *toAddresses;
@property(copy, nonatomic) NSString *fromAddress;
@property(retain, nonatomic) MFDeliveryAccount *deliveryAccount;
@property(nonatomic) long long deliveryPriority;
- (void)dealloc;
- (id)init;

@end

