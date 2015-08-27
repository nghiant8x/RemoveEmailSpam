@class QLPreviewPanel;
@protocol QLPreviewItem;

@protocol QLPreviewPanelDataSource
- (id <QLPreviewItem>)previewPanel:(QLPreviewPanel *)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(QLPreviewPanel *)arg1;
@end

