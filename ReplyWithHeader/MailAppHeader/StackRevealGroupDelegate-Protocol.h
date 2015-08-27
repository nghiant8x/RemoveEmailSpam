#import "NSObject-Protocol.h"

@class CALayer, NSView, StackRevealGroup;

@protocol StackRevealGroupDelegate <NSObject>

@optional
- (NSView *)stackContainerView;
- (CALayer *)stackContainerLayer;
- (void)stackRevealGroupDidFinish:(StackRevealGroup *)arg1;
- (void)stackRevealGroupDidReveal:(StackRevealGroup *)arg1;
- (void)stackRevealGroupWillReveal:(StackRevealGroup *)arg1;
@end

