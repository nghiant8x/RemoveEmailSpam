#import <AppKit/NSView.h>

@interface NSView (MailAdditions)
- (id)newRenderedSnapshotForLayerBackedView:(struct CGRect)arg1;
- (id)newSnapshotForLayerBackedViewInRect:(struct CGRect)arg1;
- (id)newSnapshotForLayerBackedView;
- (struct CGRect)rectInScreenCoords:(struct CGRect)arg1;
- (id)newSnapshotIgnoringSubviewsWithRect:(struct CGRect)arg1;
- (id)newRenderedSnapshotWithRect:(struct CGRect)arg1 allowAlpha:(BOOL)arg2 forceScaleFactor:(double)arg3;
- (id)newFullRenderedSnapshot;
- (id)newSnapshotWithRect:(struct CGRect)arg1;
- (BOOL)_testIsHIDPI;
@end

