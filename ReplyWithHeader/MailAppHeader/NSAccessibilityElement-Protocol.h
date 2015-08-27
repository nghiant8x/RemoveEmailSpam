#import "NSObject-Protocol.h"

@class NSString;

@protocol NSAccessibilityElement <NSObject>
- (id)accessibilityParent;
- (struct CGRect)accessibilityFrame;

@optional
- (NSString *)accessibilityIdentifier;
- (BOOL)isAccessibilityFocused;
@end

