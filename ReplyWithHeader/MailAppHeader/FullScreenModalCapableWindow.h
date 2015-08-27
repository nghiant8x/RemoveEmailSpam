#import <AppKit/NSWindow.h>

@class NSResponder, WindowTransformAnimation;

@interface FullScreenModalCapableWindow : NSWindow
{
    BOOL _disableFrameConstraint;	// 256 = 0x100
    BOOL _isModal;	// 257 = 0x101
    BOOL _shouldNotSaveFrame;	// 258 = 0x102
    BOOL _hasTransform;	// 259 = 0x103
    WindowTransformAnimation *_windowTransformAnimation;	// 264 = 0x108
    NSResponder *_nextFirstResponder;	// 272 = 0x110
}

@property(nonatomic) BOOL hasTransform; // @synthesize hasTransform=_hasTransform;
@property(nonatomic) BOOL shouldNotSaveFrame; // @synthesize shouldNotSaveFrame=_shouldNotSaveFrame;
@property(nonatomic) BOOL isModal; // @synthesize isModal=_isModal;
@property(retain, nonatomic) NSResponder *nextFirstResponder; // @synthesize nextFirstResponder=_nextFirstResponder;
@property(nonatomic) BOOL disableFrameConstraint; // @synthesize disableFrameConstraint=_disableFrameConstraint;
@property(nonatomic) __weak WindowTransformAnimation *windowTransformAnimation; // @synthesize windowTransformAnimation=_windowTransformAnimation;
- (void).cxx_destruct;
- (void)setIdentityTransform;
- (void)setTransformForAnimation:(struct CGAffineTransform)arg1 anchorPoint:(struct CGPoint)arg2;
- (BOOL)isMainWindow;
- (BOOL)canEnterFullScreenMode;
- (void)makeKeyAndOrderFrontForAnimation;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)saveFrameUsingName:(id)arg1;
- (void)orderOut:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;

@end

