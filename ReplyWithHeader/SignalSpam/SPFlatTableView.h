//
//  SPFlatTableView.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

@interface SPFlatTableView : NSTableView


- (BOOL)SPIsOpaque;
- (id)SP_dropTargetColor;
- (id)SP_selectionColor;
- (id)SP_highlightColorForCell:(id)arg1;
- (void)SP_drawDropHighlightBackgroundForRow:(long long)arg1;
- (void)SP_highlightRow:(long long)arg1 withColor:(id)arg2;
- (void)SPHighlightSelectionInClipRect:(struct CGRect)arg1;
- (void)SPAwakeFromNib;

@end
