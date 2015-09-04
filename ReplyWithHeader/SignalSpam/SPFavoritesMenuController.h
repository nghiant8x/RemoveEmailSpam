//
//  SPFavoritesMenuController.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

@interface SPFavoritesMenuController : NSObject

- (void)SPStopScrolling:(long long)arg1;
- (void)SPStopScrolling;
- (void)SPStartScrolling:(long long)arg1;
- (void)SPUpdateScrollArrows;
- (void)SP_scrollToNextPoint:(id)arg1;
- (BOOL)SPOutlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)SP_canDragMessageIntoMailbox:(id)arg1;
- (unsigned long long)SPOutlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (unsigned long long)SP_dragOperationForCurrentEvent;
- (BOOL)SPOutlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)SPOutlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)SPOutlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)SPOutlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)SPOutlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)SPOutlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)SP_nibForFavoriteMenuItemView;
- (id)SP_titleForTopLevelMailbox:(id)arg1;
- (void)SPPresentPopupAtLocation:(struct CGPoint)arg1;
- (void)SP_insertOutlineViewInScrollView;
- (void)SP_constrainWindowToScreen;
- (void)SP_sizeWindowToFitCells;
- (struct CGSize)SP_windowSizeForOutlineViewSize:(struct CGSize)arg1;
- (void)SP_mouseClickedInApplicationWithEvent:(id)arg1;
- (void)SP_dragEnded:(id)arg1;
- (void)SP_applicationShouldClosePopup:(id)arg1;
- (void)SPClosePopup;
- (void)SP_cleanupMenu;
- (id)SPInitWithMailbox:(id)arg1 atWindow:(id)arg2;

@end
