#import <AppKit/NSMatrix.h>

@interface ThumbnailMatrix : NSMatrix
{
    BOOL _shouldShowButtons;	// 340 = 0x154
}

@property(nonatomic) BOOL shouldShowButtons; // @synthesize shouldShowButtons=_shouldShowButtons;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (struct CGRect)frameOfThumbnailAtIndex:(long long)arg1;
- (void)_addButtonAtIndex:(long long)arg1;
- (void)showDeleteButtons:(BOOL)arg1 beginningAtIndex:(long long)arg2;
- (void)highlightCell:(BOOL)arg1 atRow:(long long)arg2 column:(long long)arg3;

@end

