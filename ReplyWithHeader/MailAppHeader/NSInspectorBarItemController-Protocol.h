#import "NSObject-Protocol.h"

@class NSInspectorBarItem, NSView;

@protocol NSInspectorBarItemController <NSObject>
- (NSView *)viewForInspectorBarItem:(NSInspectorBarItem *)arg1;
@end

