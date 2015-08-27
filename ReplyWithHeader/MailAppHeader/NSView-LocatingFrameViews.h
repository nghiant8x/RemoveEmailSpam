#import <AppKit/NSView.h>

@interface NSView (LocatingFrameViews)
- (id)enclosingScrollViewIgnoringWebScrollbars;
- (id)enclosingWebView;
- (id)enclosingFrameView;
@end

