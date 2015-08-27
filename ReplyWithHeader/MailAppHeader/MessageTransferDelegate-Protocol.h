#import "NSObject-Protocol.h"

@class MCError, MessageTransfer, NSArray, NSUndoManager;

@protocol MessageTransferDelegate <NSObject>
- (void)messageTransferDidUndoTransferOfMessages:(NSArray *)arg1;
- (void)messageTransferDidTransferMessages:(NSArray *)arg1;
- (void)unhideMessagesForMessageTransfer:(NSArray *)arg1;
- (void)hideMessagesForMessageTransfer:(NSArray *)arg1 selectingNextMessage:(BOOL)arg2;
- (NSUndoManager *)undoManagerForMessageTransfer:(MessageTransfer *)arg1;
- (void)transfer:(MessageTransfer *)arg1 didCompleteWithError:(MCError *)arg2;
@end

