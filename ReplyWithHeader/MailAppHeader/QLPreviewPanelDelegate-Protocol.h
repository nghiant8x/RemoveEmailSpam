#import "NSWindowDelegate-Protocol.h"

@class NSEvent, QLPreviewPanel;
@protocol QLPreviewItem;

@protocol QLPreviewPanelDelegate <NSWindowDelegate>

@optional
- (id)previewPanel:(QLPreviewPanel *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(QLPreviewPanel *)arg1 sourceFrameOnScreenForPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)previewPanel:(QLPreviewPanel *)arg1 handleEvent:(NSEvent *)arg2;
@end

