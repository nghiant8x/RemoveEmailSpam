@class CALayer, NSView, StackController;

@protocol StackDataSource
- (void)stackController:(StackController *)arg1 loadDataForItem:(id)arg2 inLayer:(CALayer *)arg3;
- (BOOL)stackController:(StackController *)arg1 isDataLoadedForItem:(id)arg2 inLayer:(CALayer *)arg3;
- (CALayer *)stackController:(StackController *)arg1 layerForItem:(id)arg2;
- (NSView *)stackContainerView;
- (CALayer *)stackContainerLayerForStackController:(StackController *)arg1;
@end

