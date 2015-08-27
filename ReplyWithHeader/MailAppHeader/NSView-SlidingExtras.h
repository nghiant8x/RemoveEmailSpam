#import <AppKit/NSView.h>

@interface NSView (SlidingExtras)
- (void)setFrameWithRedraw:(struct CGRect)arg1;
- (void)setSlidingFrame:(struct CGRect)arg1;
- (struct CGRect)slidingFrame;
@end

