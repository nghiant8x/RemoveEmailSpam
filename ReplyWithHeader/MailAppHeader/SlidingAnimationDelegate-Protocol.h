#import "NSObject-Protocol.h"

@class SlidingAnimation;

@protocol SlidingAnimationDelegate <NSObject>

@optional
- (void)finishedSlidingAnimation:(SlidingAnimation *)arg1;
@end

