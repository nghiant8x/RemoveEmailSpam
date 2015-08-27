@class CALayer, StackElement;

@protocol StackElementDelegate
- (void)stackElement:(StackElement *)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(StackElement *)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(StackElement *)arg1 willRemoveLayer:(CALayer *)arg2;
- (CALayer *)layerForStackElement:(StackElement *)arg1;
- (BOOL)stackIsTerminating;
- (struct CGSize)stackCenterOffset;
- (CALayer *)stackContainerLayer;
@end

