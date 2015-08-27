#import <AppKit/NSWindow.h>

@interface ModalDimmingWindow : NSWindow
{
}

- (void)dim;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

