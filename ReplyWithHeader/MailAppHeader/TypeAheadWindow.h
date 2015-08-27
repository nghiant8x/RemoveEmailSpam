#import "FullScreenModalCapableWindow.h"

@interface TypeAheadWindow : FullScreenModalCapableWindow
{
    BOOL _sendsMouseDownNotifications;	// 256 = 0x100
    BOOL _shouldFlushTypeAheadEvents;	// 257 = 0x101
}

+ (BOOL)handleEvent:(id)arg1;
@property(nonatomic) BOOL shouldFlushTypeAheadEvents; // @synthesize shouldFlushTypeAheadEvents=_shouldFlushTypeAheadEvents;
@property(nonatomic) BOOL sendsMouseDownNotifications; // @synthesize sendsMouseDownNotifications=_sendsMouseDownNotifications;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (BOOL)canEnterFullScreenMode;
- (void)sendEvent:(id)arg1;
- (void)close;
- (void)_flushTypeAheadEvents;
- (void)becomeKeyWindow;
- (void)flushTypeAheadEventsWhenAppropriate;
- (void)startRecordingTypeAheadEvents;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

