#import "NSObject-Protocol.h"

@class Assistant;

@protocol AssistantDelegate <NSObject>
- (void)assistantDidFinish:(Assistant *)arg1;
@end

