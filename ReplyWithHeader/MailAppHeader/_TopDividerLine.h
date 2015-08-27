#import <AppKit/NSView.h>

@interface _TopDividerLine : NSView
{
}

- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)wantsLayer;
- (BOOL)allowsVibrancy;

@end

