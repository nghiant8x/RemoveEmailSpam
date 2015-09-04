//
//  SPFavoritesMenuController.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import "SPFavoritesMenuController.h"

@implementation SPFavoritesMenuController

- (void)SPStopScrolling:(long long)arg1{
    MLogString(@"");
    [self SPStopScrolling:arg1];
}

- (void)SPStopScrolling{
    MLogString(@"");
    [self SPStopScrolling];
    
}

- (void)SPStartScrolling:(long long)arg1{
    MLogString(@"");
    [self SPStartScrolling:arg1];
    
}

- (void)SPUpdateScrollArrows{
    MLogString(@"");
    [self SPUpdateScrollArrows];
}

- (void)SP_scrollToNextPoint:(id)arg1{
    MLogString(@"");
    [self SP_scrollToNextPoint:arg1];
}

- (BOOL)SPOutlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4{
    MLogString(@"");
    BOOL result = [self SPOutlineView:arg1 acceptDrop:arg2 item:arg3 childIndex:arg4];
    return result;
}

- (BOOL)SP_canDragMessageIntoMailbox:(id)arg1{
    MLogString(@"");
    BOOL result = [self SP_canDragMessageIntoMailbox:arg1];
    return result;
}

- (unsigned long long)SPOutlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4{
    MLogString(@"");
    long result = [self SPOutlineView:arg1 validateDrop:arg2 proposedItem:arg3 proposedChildIndex:arg4];
    return result;
    
}

- (unsigned long long)SP_dragOperationForCurrentEvent{
    MLogString(@"");
    long result = [self SP_dragOperationForCurrentEvent];
    return result;
}

- (BOOL)SPOutlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2{
    MLogString(@"");
    BOOL result = [self SPOutlineView:arg1 shouldShowOutlineCellForItem:arg2];
    return result;
}

- (id)SPOutlineView:(id)arg1 rowViewForItem:(id)arg2{
    MLogString(@"");
    id result = [self SPOutlineView:arg1 rowViewForItem:arg2];
    return result;
   
}

- (id)SPOutlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3{
    MLogString(@"");
    id result = [self SPOutlineView:arg1 viewForTableColumn:arg2 item:arg3];
    return result;
 
}

- (BOOL)SPOutlineView:(id)arg1 isItemExpandable:(id)arg2{
    MLogString(@"");
    BOOL result = [self SPOutlineView:arg1 isItemExpandable:arg2];
    return result;
}

- (id)SPOutlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3{
    MLogString(@"");
    id result = [self SPOutlineView:arg1 child:arg2 ofItem:arg3];
    return result;

}

- (long long)SPOutlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2{
    MLogString(@"");
    long result = [self SPOutlineView:arg1 numberOfChildrenOfItem:arg2];
    return result;
}

- (id)SP_nibForFavoriteMenuItemView{
    MLogString(@"");
    id result = [self SP_nibForFavoriteMenuItemView];
    
    return result;

}

- (id)SP_titleForTopLevelMailbox:(id)arg1{
    MLogString(@"");
    id result = [self SP_titleForTopLevelMailbox:arg1];
    
    return result;

}

- (void)SPPresentPopupAtLocation:(struct CGPoint)arg1{
    MLogString(@"");
    [self SPPresentPopupAtLocation:arg1];
}

- (void)SP_insertOutlineViewInScrollView{
    MLogString(@"");
    [self SP_insertOutlineViewInScrollView];
}

- (void)SP_constrainWindowToScreen{
    MLogString(@"");
    [self SP_constrainWindowToScreen];
}

- (void)SP_sizeWindowToFitCells{
    MLogString(@"");
    [self SP_sizeWindowToFitCells];}

- (struct CGSize)SP_windowSizeForOutlineViewSize:(struct CGSize)arg1{
    MLogString(@"");
    CGSize result = [self SP_windowSizeForOutlineViewSize:arg1];
    
    return result;
}

- (void)SP_mouseClickedInApplicationWithEvent:(id)arg1{
    MLogString(@"");
    [self SP_mouseClickedInApplicationWithEvent:arg1];
}

- (void)SP_dragEnded:(id)arg1{
    MLogString(@"");
    [self SP_dragEnded:arg1];
}

- (void)SP_applicationShouldClosePopup:(id)arg1{
    MLogString(@"");
    [self SP_applicationShouldClosePopup:arg1];
}

- (void)SPClosePopup{
    MLogString(@"");
    [self SPClosePopup];}

- (void)SP_cleanupMenu{
    MLogString(@"");
    [self SP_cleanupMenu];}

- (id)SPInitWithMailbox:(id)arg1 atWindow:(id)arg2{
    MLogString(@"");
    id result = [self SPInitWithMailbox:arg1 atWindow:arg2];
    
    return result;
}


@end
