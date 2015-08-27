#import <AppKit/NSScroller.h>

@interface MTMScroller : NSScroller
{
    BOOL _isFakeScroller;	// 232 = 0xe8
    BOOL _dontNotify;	// 233 = 0xe9
    id _delegate;	// 240 = 0xf0
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL dontNotify; // @synthesize dontNotify=_dontNotify;
- (void).cxx_destruct;
- (void)drawKnob;
@property(nonatomic) BOOL isFakeScroller;
- (void)_notifyPostScrollPositionChanged;
- (void)setDoubleValue:(double)arg1;

@end

