#import <AppKit/NSVisualEffectView.h>

@class CAShapeLayer;

@interface RolloverContainerView : NSVisualEffectView
{
    CAShapeLayer *_backgroundMaskLayer;	// 176 = 0xb0
    struct CGRect _highightRect;	// 184 = 0xb8
}

@property(nonatomic) __weak CAShapeLayer *backgroundMaskLayer; // @synthesize backgroundMaskLayer=_backgroundMaskLayer;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect highightRect; // @synthesize highightRect=_highightRect;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)makeBackingLayer;
- (void)awakeFromNib;

@end

