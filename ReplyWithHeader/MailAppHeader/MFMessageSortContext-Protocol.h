#import "NSObject-Protocol.h"

@class MCMessage;

@protocol MFMessageSortContext <NSObject>
- (long long)compareByNumberMessage:(MCMessage *)arg1 andMessage:(MCMessage *)arg2 sortedAscending:(BOOL)arg3;
@end

