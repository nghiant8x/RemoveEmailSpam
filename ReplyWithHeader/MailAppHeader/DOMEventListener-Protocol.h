#import "NSObject-Protocol.h"

@class DOMEvent;

@protocol DOMEventListener <NSObject>
- (void)handleEvent:(DOMEvent *)arg1;
@end

