#import <objc/NSObject.h>

@class CALayer, NSMutableArray, NSWindow;
@protocol StackRevealGroupDelegate;

@interface StackRevealGroup : NSObject
{
    CALayer *_layer;	// 8 = 0x8
    NSMutableArray *_stackElements;	// 16 = 0x10
    id <StackRevealGroupDelegate> _delegate;	// 24 = 0x18
    NSWindow *_window;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    double _revealBeginTime;	// 48 = 0x30
}

@property(nonatomic) double revealBeginTime; // @synthesize revealBeginTime=_revealBeginTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <StackRevealGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isAnimating;
@property(readonly, nonatomic) BOOL isRevealing;
- (void)_finish;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)cancel:(BOOL)arg1;
- (void)beginRevealAnimation;
- (void)removeLayer;
@property(readonly, nonatomic) CALayer *layer;
- (void)removeStackElement:(id)arg1;
- (BOOL)containsStackElement:(id)arg1 isTopElement:(char *)arg2;
- (void)dealloc;
- (id)_window;
- (id)initWithStackElements:(id)arg1;

@end

