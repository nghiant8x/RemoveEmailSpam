#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SlidingAnimationDelegate;

@interface SlidingAnimation : NSObject
{
    NSMutableDictionary *_views;	// 8 = 0x8
    BOOL _isSliding;	// 16 = 0x10
    BOOL _isPaused;	// 17 = 0x11
    id <SlidingAnimationDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) BOOL isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id <SlidingAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_runLoopModesForAnimation;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopView:(id)arg1;
- (struct CGRect)destinationForView:(id)arg1;
- (void)_sendViewToDestination:(id)arg1;
- (void)setDestinationForView:(id)arg1 to:(struct CGRect)arg2 duration:(double)arg3;
- (void)_showNextFrame;
- (void)_updateTimer;
- (void)_updateViewPosition:(id)arg1 forTime:(double)arg2;
- (void)dealloc;
- (id)init;

@end

