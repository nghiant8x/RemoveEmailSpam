//
//  SPFlatTableView.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

#import "SPFlatTableView.h"

@implementation SPFlatTableView

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    // Drawing code here.
}

- (BOOL)SPIsOpaque{
    MLogString(@"");
    BOOL result = [self SPIsOpaque];
    return result;
}
- (id)SP_dropTargetColor{
    MLogString(@"");
    id result = [self SP_dropTargetColor];
    return result;
}
- (id)SP_selectionColor{
     MLogString(@"");
    id result = [self SP_selectionColor];
    return result;

}
- (id)SP_highlightColorForCell:(id)arg1{
     MLogString(@"");
    id result = [self SP_highlightColorForCell:arg1];
    return result;

}
- (void)SP_drawDropHighlightBackgroundForRow:(long long)arg1{
     MLogString(@"");
    [self SP_drawDropHighlightBackgroundForRow:arg1];
}
- (void)SP_highlightRow:(long long)arg1 withColor:(id)arg2{
     MLogString(@"");
    [self SP_highlightRow:arg1 withColor:arg2];
}
- (void)SPHighlightSelectionInClipRect:(struct CGRect)arg1{
     MLogString(@"");
    [self SPHighlightSelectionInClipRect:arg1];
}
- (void)SPAwakeFromNib{
     MLogString(@"");
    [self SPAwakeFromNib];
}

@end
