#import "NSObject-Protocol.h"

@class CALayer, StackController;

@protocol StackDelegate <NSObject>

@optional
- (void)stackController:(StackController *)arg1 willRemoveLayerForItem:(id)arg2;
- (void)stackController:(StackController *)arg1 willDisplayLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackController:(StackController *)arg1 willStackLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackController:(StackController *)arg1 dataLoadTimedOutInLayer:(CALayer *)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopAnimatingLayers:(StackController *)arg1;
- (void)stackControllerWillStartAnimatingLayers:(StackController *)arg1;
- (void)stackControllerDidStopStackingLayers:(StackController *)arg1;
- (void)stackControllerWillStartStackingLayers:(StackController *)arg1;
@end

