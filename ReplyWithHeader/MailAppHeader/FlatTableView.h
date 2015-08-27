#import <AppKit/NSTableView.h>

@interface FlatTableView : NSTableView
{
}

- (BOOL)isOpaque;
- (id)_dropTargetColor;
- (id)_selectionColor;
- (id)_highlightColorForCell:(id)arg1;
- (void)_drawDropHighlightBackgroundForRow:(long long)arg1;
- (void)_highlightRow:(long long)arg1 withColor:(id)arg2;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

