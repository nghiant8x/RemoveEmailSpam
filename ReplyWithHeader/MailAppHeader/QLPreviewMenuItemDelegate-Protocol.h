#import "NSObject-Protocol.h"

@class NSMenuItem, NSView;
@protocol QLPreviewItem;

@protocol QLPreviewMenuItemDelegate <NSObject>

@optional
- (void)menuItemDidClose:(NSMenuItem *)arg1;
- (void)menuItemWillAppear:(NSMenuItem *)arg1;
- (struct CGSize)menuItem:(NSMenuItem *)arg1 maxSizeForPoint:(struct CGPoint)arg2;
- (struct CGRect)menuItem:(NSMenuItem *)arg1 itemFrameForPoint:(struct CGPoint)arg2;
- (struct CGPoint)menuItem:(NSMenuItem *)arg1 aimPointForPoint:(struct CGPoint)arg2;
- (unsigned long long)menuItem:(NSMenuItem *)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id <QLPreviewItem>)menuItem:(NSMenuItem *)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (NSView *)menuItem:(NSMenuItem *)arg1 viewAtScreenPoint:(struct CGPoint)arg2;
@end

