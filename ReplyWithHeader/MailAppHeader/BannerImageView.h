#import <AppKit/NSImageView.h>

@interface BannerImageView : NSImageView
{
    struct NSEdgeInsets _edgeInsets;	// 192 = 0xc0
}

- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (void)setAlignmentRectInsets:(struct NSEdgeInsets)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;

@end

