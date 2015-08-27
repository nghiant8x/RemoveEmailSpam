#import <objc/NSObject.h>

@class CALayer;
@protocol StackElementDelegate;

@interface StackElement : NSObject
{
    int _currentState;	// 8 = 0x8
    int _nextState;	// 12 = 0xc
    int _targetState;	// 16 = 0x10
    int _previousState;	// 20 = 0x14
    id <StackElementDelegate> _delegate;	// 24 = 0x18
    id _item;	// 32 = 0x20
    long long _orientation;	// 40 = 0x28
    CALayer *_itemLayer;	// 48 = 0x30
}

@property(retain, nonatomic) CALayer *itemLayer; // @synthesize itemLayer=_itemLayer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(nonatomic) __weak id <StackElementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGAffineTransform)_onStackTransform;
- (struct CGAffineTransform)_offscreenTransform;
- (struct CGAffineTransform)_affineTransformWithTranslation:(struct CGSize)arg1;
- (struct CGAffineTransform)_fullsizeTransform;
- (void)_fadeInUnderneathStack:(BOOL)arg1;
- (void)_fadeOutUnderneathStack:(BOOL)arg1;
- (void)_moveOutFromStack:(BOOL)arg1;
- (void)_moveIntoStack:(BOOL)arg1;
- (void)_hide:(BOOL)arg1;
- (void)_animationDidStop:(id)arg1 finished:(id)arg2 animationInfo:(id)arg3;
- (void)_commitAnimation;
- (void)_beginAnimationToState:(int)arg1 withDuration:(double)arg2 beginsFromCurrentState:(BOOL)arg3 animated:(BOOL)arg4;
- (id)_operationNameWithState:(int)arg1;
- (void)removeLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) double stackIndex;
@property(readonly, nonatomic) BOOL isAnimating;
@property(nonatomic) int targetState;
@property(nonatomic) int currentState;
@property(readonly, nonatomic) BOOL isVisible;
- (void)setNextState:(int)arg1 animated:(BOOL)arg2;
- (void)setNextState:(int)arg1;
@property(readonly, nonatomic) int nextState;
- (int)state;
- (id)description;
- (id)initWithItem:(id)arg1 state:(int)arg2;

@end

