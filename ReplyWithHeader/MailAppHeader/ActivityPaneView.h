#import <AppKit/NSVisualEffectView.h>

@class CALayer;

@interface ActivityPaneView : NSVisualEffectView
{
    CALayer *_dividerLayer;	// 176 = 0xb0
}

@property(nonatomic) __weak CALayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
- (void).cxx_destruct;
@property(nonatomic) BOOL drawDivider;
- (void)updateLayer;

@end

