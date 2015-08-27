#import "NSObject-Protocol.h"

@class ClippedItemsIndicator, NSArray;

@protocol ClippedItemsIndicatorDelegate <NSObject>
- (NSArray *)menuItemsForClippedItemsIndicator:(ClippedItemsIndicator *)arg1;
@end

