#import <AppKit/NSView.h>

@interface NSView (ResizingAnimation)
- (void)setFrame:(struct CGRect)arg1 animate:(BOOL)arg2 repositionOtherSiblings:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1 animate:(BOOL)arg2;
@end

