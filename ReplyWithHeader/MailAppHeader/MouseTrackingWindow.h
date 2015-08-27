#import <AppKit/NSWindow.h>

@interface MouseTrackingWindow : NSWindow
{
    BOOL _forceDrawAsMain;	// 256 = 0x100
    BOOL _preventBecomingKey;	// 257 = 0x101
    BOOL _customFullScreenAnimation;	// 258 = 0x102
    unsigned long long _fullScreenState;	// 264 = 0x108
}

@property(nonatomic) BOOL customFullScreenAnimation; // @synthesize customFullScreenAnimation=_customFullScreenAnimation;
@property(readonly, nonatomic) unsigned long long fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property(nonatomic) BOOL preventBecomingKey; // @synthesize preventBecomingKey=_preventBecomingKey;
@property(nonatomic) BOOL forceDrawAsMain; // @synthesize forceDrawAsMain=_forceDrawAsMain;
- (void)_windowDidResize:(id)arg1;
- (void)_windowDidExitFullScreen:(id)arg1;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)_windowDidEnterFullScreen:(id)arg1;
- (void)_windowWillEnterFullScreen:(id)arg1;
- (BOOL)_isModalWindowPresent;
@property(readonly, nonatomic) BOOL isFullScreen;
- (BOOL)canBecomeKeyWindow;
- (BOOL)isMainWindow;
- (BOOL)validateMenuItem:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)displayIfNeeded;
- (void)toggleToolbarShown:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)dealloc;
- (void)_mouseTrackingWindowCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

