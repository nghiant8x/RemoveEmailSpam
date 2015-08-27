#import "NSObject-Protocol.h"

@class ImageResizer;

@protocol ImageResizerDelegate <NSObject>
- (void)imageResizer:(ImageResizer *)arg1 didFinishResizingWithResultCode:(long long)arg2;
@end

