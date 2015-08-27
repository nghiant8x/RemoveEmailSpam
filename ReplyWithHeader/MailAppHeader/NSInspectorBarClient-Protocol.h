#import "NSObject-Protocol.h"

@class NSArray;

@protocol NSInspectorBarClient <NSObject>
- (NSArray *)inspectorBarItemIdentifiers;
@end

