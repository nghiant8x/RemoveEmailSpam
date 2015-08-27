#import "NSObject-Protocol.h"

@class NSInspectorBar, NSInspectorBarItem, NSString;

@protocol NSInspectorBarDelegate <NSObject>

@optional
- (NSInspectorBarItem *)inspectorBar:(NSInspectorBar *)arg1 shouldLayoutItem:(NSInspectorBarItem *)arg2;
- (NSInspectorBarItem *)inspectorBar:(NSInspectorBar *)arg1 itemForIdentifier:(NSString *)arg2;
@end

