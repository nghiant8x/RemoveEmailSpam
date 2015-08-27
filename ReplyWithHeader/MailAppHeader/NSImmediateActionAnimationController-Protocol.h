#import "NSObject-Protocol.h"

@class NSImmediateActionGestureRecognizer;

@protocol NSImmediateActionAnimationController <NSObject>

@optional
- (void)recognizerDidDismissAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCompleteAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidCancelAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerDidUpdateAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)recognizerWillBeginAnimation:(NSImmediateActionGestureRecognizer *)arg1;
@end

