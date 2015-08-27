#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSIndexSet;

@protocol MessageFilterDelegate <NSObject>
- (void)postNotifications:(NSArray *)arg1;
- (void)storesLoaded:(BOOL)arg1;
- (void)storesDidOpen;
- (void)setFilteredMessages:(NSArray *)arg1 totalMessageCount:(unsigned long long)arg2 openThreadIndexes:(NSIndexSet *)arg3 originalMessageByMessageID:(NSDictionary *)arg4 messageCopiesByMessageID:(NSDictionary *)arg5;
@end

