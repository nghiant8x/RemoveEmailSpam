#import <objc/NSObject.h>

@class NSView;

@interface _MouseTracker : NSObject
{
    BOOL _mouseOver;	// 8 = 0x8
    NSView *_view;	// 16 = 0x10
    long long _trackingRectTag;	// 24 = 0x18
    struct CGRect _trackingRect;	// 32 = 0x20
}

@property(nonatomic) BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
@property(readonly, nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(readonly, nonatomic) struct CGRect trackingRect; // @synthesize trackingRect=_trackingRect;
@property(readonly, nonatomic) __weak NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateMouseIsOver;
- (void)dealloc;
- (id)initWithTrackingRect:(struct CGRect)arg1 inView:(id)arg2;

@end

