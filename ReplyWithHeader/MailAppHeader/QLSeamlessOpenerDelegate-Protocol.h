#import "NSObject-Protocol.h"

@class NSArray, NSError, NSImage, NSWindow, QLPreviewBubble, QLPreviewView, QLSeamlessOpener;
@protocol QLPreviewItem;

@protocol QLSeamlessOpenerDelegate <NSObject>

@optional
- (NSWindow *)seamlessOpener:(QLSeamlessOpener *)arg1 transientWindowForItem:(id <QLPreviewItem>)arg2;
- (NSImage *)seamlessOpener:(QLSeamlessOpener *)arg1 transientImageAtFrame:(struct CGRect *)arg2 forItem:(id <QLPreviewItem>)arg3;
- (void)seamlessOpener:(QLSeamlessOpener *)arg1 failedToOpenItems:(NSArray *)arg2 withError:(NSError *)arg3;
- (void)seamlessOpener:(QLSeamlessOpener *)arg1 openedItem:(id <QLPreviewItem>)arg2 seamlessly:(BOOL)arg3;
- (NSWindow *)seamlessOpenerTransientWindow:(QLSeamlessOpener *)arg1 level:(long long *)arg2;
- (int)seamlessOpener:(QLSeamlessOpener *)arg1 supportForPreviewItem:(id <QLPreviewItem>)arg2;
- (NSImage *)seamlessOpener:(QLSeamlessOpener *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (NSImage *)seamlessOpener:(QLSeamlessOpener *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3 windowLevel:(long long *)arg4;
- (struct CGRect)seamlessOpener:(QLSeamlessOpener *)arg1 sourceFrameOnScreenForPreviewItem:(id <QLPreviewItem>)arg2;
- (QLPreviewBubble *)seamlessOpener:(QLSeamlessOpener *)arg1 sourceBubbleForPreviewItem:(id <QLPreviewItem>)arg2;
- (QLPreviewView *)seamlessOpener:(QLSeamlessOpener *)arg1 sourcePreviewViewForPreviewItem:(id <QLPreviewItem>)arg2;
@end

