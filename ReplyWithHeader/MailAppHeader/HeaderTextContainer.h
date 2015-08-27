#import <AppKit/NSTextContainer.h>

@class NSMutableSet;

@interface HeaderTextContainer : NSTextContainer
{
    NSMutableSet *_views;	// 56 = 0x38
}

- (void).cxx_destruct;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)isSimpleRectangularTextContainer;
- (void)_textContainerChangedGeometry:(id)arg1;
- (void)removeView:(id)arg1;
- (void)addView:(id)arg1;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithContainerSize:(struct CGSize)arg1;

@end

