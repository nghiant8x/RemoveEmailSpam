#import <AppKit/NSInspectorBar.h>

@class NSView, NSWindow;

@interface MailInspectorBar : NSInspectorBar
{
    NSWindow *_window;	// 104 = 0x68
    NSView *_separatorView;	// 112 = 0x70
}

+ (Class)standardItemControllerClass;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_tile;
- (id)_inspectorBarView;
- (void)_setWindow:(id)arg1;
- (id)loadedNib;
- (void)dealloc;

@end

