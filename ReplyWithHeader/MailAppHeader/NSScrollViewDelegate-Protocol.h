#import "NSObject-Protocol.h"

@class NSArray, NSScrollView;

@protocol NSScrollViewDelegate <NSObject>

@optional
- (NSArray *)magnificationInflectionPointsForScrollView:(NSScrollView *)arg1;
- (void)scrollView:(NSScrollView *)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3;
- (double)scrollView:(NSScrollView *)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6;
- (void)didEndScrollInScrollView:(NSScrollView *)arg1;
- (void)didScrollInScrollView:(NSScrollView *)arg1;
- (void)didBeginScrollInScrollView:(NSScrollView *)arg1;
@end

