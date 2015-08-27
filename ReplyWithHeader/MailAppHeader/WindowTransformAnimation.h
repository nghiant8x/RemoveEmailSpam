#import <AppKit/NSAnimation.h>

@class FullScreenModalCapableWindow, ModalDimmingWindow;

@interface WindowTransformAnimation : NSAnimation
{
    BOOL _cancelled;	// 120 = 0x78
    long long _animationType;	// 128 = 0x80
    FullScreenModalCapableWindow *_window;	// 136 = 0x88
    ModalDimmingWindow *_dimmingWindow;	// 144 = 0x90
    long long _dimmingFade;	// 152 = 0x98
    double _maxScreenPosition;	// 160 = 0xa0
    struct CGPoint _anchorPoint;	// 168 = 0xa8
}

+ (id)windowTransformAnimationWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
@property(readonly, nonatomic) double maxScreenPosition; // @synthesize maxScreenPosition=_maxScreenPosition;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(readonly, nonatomic) long long dimmingFade; // @synthesize dimmingFade=_dimmingFade;
@property(readonly, nonatomic) ModalDimmingWindow *dimmingWindow; // @synthesize dimmingWindow=_dimmingWindow;
@property(readonly, nonatomic) FullScreenModalCapableWindow *window; // @synthesize window=_window;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (void)cancelAnimation;
- (void)startAnimation;
- (void)setWindowMagnificationForProgress:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (void)setWindowFlyInTranslationProgress:(double)arg1;
- (unsigned long long)_animationCurveForAnimationType:(long long)arg1;
- (double)_animationDurationForAnimationType:(long long)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;

@end

