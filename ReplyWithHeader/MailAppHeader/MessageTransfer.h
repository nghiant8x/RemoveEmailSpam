#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"
#import "MessageDeletionTransfer-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol MessageTransferDelegate;

@interface MessageTransfer : NSObject <MCActivityTarget, MessageDeletionTransfer>
{
    NSMutableArray *_operations;	// 8 = 0x8
    BOOL _deleteOriginals;	// 16 = 0x10
    BOOL _allowsUndo;	// 17 = 0x11
    BOOL _registeredForUndo;	// 18 = 0x12
    BOOL _isDeleteOperation;	// 19 = 0x13
    BOOL _isArchiveOperation;	// 20 = 0x14
    BOOL _undoInProgress;	// 21 = 0x15
    BOOL _needToUndoTransfer;	// 22 = 0x16
    id <MessageTransferDelegate> _delegate;	// 24 = 0x18
    NSArray *_sourceLabels;	// 32 = 0x20
}

+ (void)queueMailboxDeletions:(id)arg1;
+ (BOOL)_shouldProceedWithMailboxDeletions:(id)arg1;
+ (void)_redo:(id)arg1;
+ (void)_undo:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL needToUndoTransfer; // @synthesize needToUndoTransfer=_needToUndoTransfer;
@property(nonatomic) BOOL undoInProgress; // @synthesize undoInProgress=_undoInProgress;
@property(nonatomic) BOOL isArchiveOperation; // @synthesize isArchiveOperation=_isArchiveOperation;
@property(nonatomic) BOOL isDeleteOperation; // @synthesize isDeleteOperation=_isDeleteOperation;
@property(nonatomic) BOOL registeredForUndo; // @synthesize registeredForUndo=_registeredForUndo;
@property(copy) NSArray *sourceLabels; // @synthesize sourceLabels=_sourceLabels;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property BOOL deleteOriginals; // @synthesize deleteOriginals=_deleteOriginals;
@property __weak id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
- (BOOL)anySourceStoreAllowsDeleteInPlace;
- (id)sourceStores;
- (id)destinationMailboxes;
- (id)_destinationMailboxForOperation:(id)arg1;
- (void)_synchronouslyPerformTransfer;
- (void)_postDidEndDocumentTransferNotification:(id)arg1 result:(long long)arg2 destinationAccount:(id)arg3 missedMessages:(id)arg4;
- (void)_postWillBeginDocumentTransferNotification:(id)arg1;
- (void)_redo;
- (void)_undoSettingFlags:(id)arg1 transferringMessages:(id)arg2;
- (void)_undoSettingFlagsCompletedWithMessages:(id)arg1;
- (void)_undo;
- (void)_registerForUndoType:(int)arg1;
- (void)_completedTransferWithError:(id)arg1;
- (void)beginTransfer;
- (BOOL)canBeginTransfer;
- (id)initWithMessages:(id)arg1 targetMailbox:(id)arg2 isDeleteOperation:(BOOL)arg3 isArchiveOperation:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

