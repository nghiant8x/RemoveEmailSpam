#import <objc/NSObject.h>

@class NSOpenGLContext, NSTimer, NSWindow, QCRenderer;

@interface UnfoldAnimationController : NSObject
{
    double _foldHeight;	// 8 = 0x8
    NSWindow *_window;	// 16 = 0x10
    NSOpenGLContext *_glContext;	// 24 = 0x18
    QCRenderer *_renderer;	// 32 = 0x20
    NSTimer *_timer;	// 40 = 0x28
    double _foldTop;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _duration;	// 64 = 0x40
    CDUnknownBlockType _completionBlock;	// 72 = 0x48
    struct CGSize _size;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double foldTop; // @synthesize foldTop=_foldTop;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) QCRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSOpenGLContext *glContext; // @synthesize glContext=_glContext;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) double foldHeight; // @synthesize foldHeight=_foldHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic) double overflowHeight;
- (void)_renderTimer:(id)arg1;
- (void)stopAnimation;
- (void)startAnimationWithDestinationImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prepareAnimationWithSourceImage:(id)arg1 foldTop:(double)arg2 contentTop:(double)arg3 contentBottom:(double)arg4 sideMargin:(double)arg5 screenRect:(struct CGRect)arg6 parentWindow:(id)arg7;
- (void)dealloc;

@end

