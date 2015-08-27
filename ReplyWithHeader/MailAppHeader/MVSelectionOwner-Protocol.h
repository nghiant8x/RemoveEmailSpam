#import "NSObject-Protocol.h"

@class MCMessage, NSArray;
@protocol MCMessageDataSource;

@protocol MVSelectionOwner <NSObject>
- (id <MCMessageDataSource>)messageStore;
- (MCMessage *)messageThatUserIsProbablyReading;
- (MCMessage *)currentDisplayedMessage;
- (void)selectMessages:(NSArray *)arg1;
- (NSArray *)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (NSArray *)selection;

@optional
- (void)toggleThreadedMode;
- (BOOL)isInThreadedMode;
@end

