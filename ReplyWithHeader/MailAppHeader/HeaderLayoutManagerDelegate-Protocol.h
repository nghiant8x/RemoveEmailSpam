#import "NSLayoutManagerDelegate-Protocol.h"

@class NSLayoutManager, NSTextContainer;

@protocol HeaderLayoutManagerDelegate <NSLayoutManagerDelegate>

@optional
- (void)layoutManager:(NSLayoutManager *)arg1 textContainerChangedGeometry:(NSTextContainer *)arg2;
@end

