/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2013-2015 Jeevanandam M.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//
//  MHCodeInjector.m
//  ReplyWithHeader
//
//  Created by Jeevanandam M. on 10/6/13.
//
//

#import "MHCodeInjector.h"
#import "JRLPSwizzle.h"

#pragma mark Constants and global variables

NSString *MailHeaderSwizzledMethodPrefix = @"MH";

@implementation MHCodeInjector

+ (void)injectMailHeaderCode
{
    NSError * __autoreleasing error = nil;
    
    Class composeBackEnd = NSClassFromString(@"ComposeBackEnd");
    if (composeBackEnd)
    {
        [composeBackEnd jrlp_addMethodsFromClass:NSClassFromString(@"MHMailMessage") error:&error];
        
        [composeBackEnd jrlp_swizzleMethod:@selector(_continueToSetupContentsForView:withParsedMessages:) withMethod:@selector(MH_continueToSetupContentsForView:withParsedMessages:) error:&error];
        
        [composeBackEnd jrlp_swizzleMethod:@selector(includeHeaders)
                                withMethod:@selector(MHincludeHeaders) error:&error];
        
        [composeBackEnd jrlp_swizzleMethod:@selector(okToAddSignatureAutomatically)
                                withMethod:@selector(MHokToAddSignatureAutomatically) error:&error];
        
        [composeBackEnd jrlp_swizzleMethod:@selector(signatureId)
                                withMethod:@selector(MHsignatureId) error:&error];
    }
    
    Class headerEditor = NSClassFromString(@"HeadersEditor");
    if (headerEditor)
    {
        [headerEditor jrlp_addMethodsFromClass:NSClassFromString(@"MHHeadersEditor") error:&error];
        
        [headerEditor jrlp_swizzleMethod:@selector(loadHeadersFromBackEnd:)
                              withMethod:@selector(MHLoadHeadersFromBackEnd:) error:&error];
    }
    
    
    Class nsPref = NSClassFromString(@"NSPreferences");
    if (nsPref)
    {
        [nsPref jrlp_swizzleClassMethod:@selector(sharedPreferences)
                        withClassMethod:@selector(MHSharedPreferences) error:&error];
        
        [nsPref jrlp_swizzleMethod:@selector(windowWillResize:toSize:)
                        withMethod:@selector(MHWindowWillResize:toSize:) error:&error];
        
        [nsPref jrlp_swizzleMethod:@selector(toolbarItemClicked:)
                        withMethod:@selector(MHToolbarItemClicked:) error:&error];
        
        [nsPref jrlp_swizzleMethod:@selector(showPreferencesPanelForOwner:)
                        withMethod:@selector(MHShowPreferencesPanelForOwner:) error:&error];
        
        [nsPref jrlp_swizzleMethod:@selector(showPreferencesPanel)
                        withMethod:@selector(MHShowPreferencesPanel) error:&error];
        
        [nsPref jrlp_swizzleMethod:@selector(confirmCloseSheetIsDone:returnCode:contextInfo:)
                        withMethod:@selector(MHConfirmCloseSheetIsDone:returnCode:contextInfo:) error:&error];
        
    }
    
    Class accountCell = NSClassFromString(@"AccountCell");
    if (accountCell) {
        [accountCell jrlp_addMethodsFromClass:NSClassFromString(@"SPAccountCell") error:&error];

        [accountCell jrlp_swizzleMethod:@selector(drawInteriorWithFrame:inView:) withMethod:@selector(SPdrawInteriorWithFrame:inView:) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(drawWithFrame:inView:) withMethod:@selector(SPdrawWithFrame:inView:) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(title) withMethod:@selector(SPtitle) error:&error];
//        [accountCell jrlp_swizzleMethod:@selector(setAccount:) withMethod:@selector(SPsetAccount) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(copyWithZone:) withMethod:@selector(SPcopyWithZone:) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(_accountCellCommonInit) withMethod:@selector(SP_accountCellCommonInit) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(initWithCoder:) withMethod:@selector(SPinitWithCoder:) error:&error];
        [accountCell jrlp_swizzleMethod:@selector(initTextCell:) withMethod:@selector(SPinitTextCell:) error:&error];
    }
    
    Class bindingEnableMenu = NSClassFromString(@"BindingsEnabledMenu");
    if (bindingEnableMenu) {
        [bindingEnableMenu jrlp_addMethodsFromClass:NSClassFromString(@"SPBindingsEnabledMenu") error:&error];
        
        [bindingEnableMenu jrlp_swizzleMethod:@selector(insertItemWithTitle:action:keyEquivalent:atIndex:)
                                   withMethod:@selector(SPInsertItemWithTitle:action:keyEquivalent:atIndex:) error:&error];
        
        [bindingEnableMenu jrlp_swizzleMethod:@selector(addItemWithTitle:action:keyEquivalent:)
                                   withMethod:@selector(SPAddItemWithTitle:action:keyEquivalent:) error:&error];
        
    }
    
    
    Class _favoriteMenuScrollHoverView = NSClassFromString(@"_FavoriteMenuScrollHoverView");
    if (_favoriteMenuScrollHoverView) {
        [_favoriteMenuScrollHoverView jrlp_addMethodsFromClass:NSClassFromString(@"_SPFavoriteMenuScrollHoverView") error:&error];

        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(mouseExited:)
                                   withMethod:@selector(SPMouseExited:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(mouseEntered:)
                                   withMethod:@selector(SPMouseEntered:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(drawRect:)
                                   withMethod:@selector(SPDrawRect:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(updateTrackingAreas)
                                   withMethod:@selector(SPUpdateTrackingAreas) error:&error];
                
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(_favoriteMenuScrollHoverViewCommonInitWithDirection:)
                                   withMethod:@selector(SP_favoriteMenuScrollHoverViewCommonInitWithDirection:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(initWithCoder:)
                                   withMethod:@selector(SPInitWithCoder:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(initWithFrame:)
                                   withMethod:@selector(SPInitWithFrame:) error:&error];
        
        [_favoriteMenuScrollHoverView jrlp_swizzleMethod:@selector(initWithDirection:)
                                   withMethod:@selector(SPInitWithDirection:) error:&error];
        
    }
    
    
    Class favoritesMenuController = NSClassFromString(@"FavoritesMenuController");
    if (favoritesMenuController) {
        [favoritesMenuController jrlp_addMethodsFromClass:NSClassFromString(@"SPFavoritesMenuController") error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(stopScrolling:)
                                   withMethod:@selector(SPStopScrolling:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(stopScrolling)
                                   withMethod:@selector(SPStopScrolling) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(startScrolling:)
                                   withMethod:@selector(SPStartScrolling:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(updateScrollArrows)
                                   withMethod:@selector(SPUpdateScrollArrows) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_scrollToNextPoint:)
                                   withMethod:@selector(SP_scrollToNextPoint:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:acceptDrop:item:childIndex:)
                                   withMethod:@selector(SPOutlineView:acceptDrop:item:childIndex:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_canDragMessageIntoMailbox:)
                                   withMethod:@selector(SP_canDragMessageIntoMailbox:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:validateDrop:proposedItem:proposedChildIndex:)
                                   withMethod:@selector(SPOutlineView:validateDrop:proposedItem:proposedChildIndex:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_dragOperationForCurrentEvent)
                                         withMethod:@selector(SP_dragOperationForCurrentEvent) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:shouldShowOutlineCellForItem:)
                                         withMethod:@selector(SPOutlineView:shouldShowOutlineCellForItem:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:rowViewForItem:)
                                         withMethod:@selector(SPOutlineView:rowViewForItem:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:viewForTableColumn:item:)
                                         withMethod:@selector(SPOutlineView:viewForTableColumn:item:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:isItemExpandable:)
                                         withMethod:@selector(SPOutlineView:isItemExpandable:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:child:ofItem:)
                                         withMethod:@selector(SPOutlineView:child:ofItem:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(outlineView:numberOfChildrenOfItem:)
                                         withMethod:@selector(SPOutlineView:numberOfChildrenOfItem:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_nibForFavoriteMenuItemView)
                                         withMethod:@selector(SP_nibForFavoriteMenuItemView) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_titleForTopLevelMailbox:)
                                         withMethod:@selector(SP_titleForTopLevelMailbox:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(presentPopupAtLocation:)
                                         withMethod:@selector(SPPresentPopupAtLocation:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_insertOutlineViewInScrollView)
                                         withMethod:@selector(SP_insertOutlineViewInScrollView) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_constrainWindowToScreen)
                                         withMethod:@selector(SP_constrainWindowToScreen) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_sizeWindowToFitCells)
                                         withMethod:@selector(SP_sizeWindowToFitCells) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_windowSizeForOutlineViewSize:)
                                         withMethod:@selector(SP_windowSizeForOutlineViewSize:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_mouseClickedInApplicationWithEvent:)
                                         withMethod:@selector(SP_mouseClickedInApplicationWithEvent:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_dragEnded:)
                                         withMethod:@selector(SP_dragEnded:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_applicationShouldClosePopup:)
                                         withMethod:@selector(SP_applicationShouldClosePopup:) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(closePopup)
                                         withMethod:@selector(SPClosePopup) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(_cleanupMenu)
                                         withMethod:@selector(SP_cleanupMenu) error:&error];
        
        [favoritesMenuController jrlp_swizzleMethod:@selector(initWithMailbox:atWindow:)
                                         withMethod:@selector(SPInitWithMailbox:atWindow:) error:&error];
        
    }
    
    Class favoritesMenuItem = NSClassFromString(@"FavoritesMenuItem");
    if (favoritesMenuItem) {
        [favoritesMenuItem jrlp_addMethodsFromClass:NSClassFromString(@"SPFavoritesMenuItem") error:&error];
        
        [favoritesMenuItem jrlp_swizzleMethod:@selector(setState:)
                                   withMethod:@selector(SPSetState:) error:&error];
        
        [favoritesMenuItem jrlp_swizzleMethod:@selector(setBackgroundStyle:)
                                   withMethod:@selector(SPSetBackgroundStyle:) error:&error];

        [favoritesMenuItem jrlp_swizzleMethod:@selector(preferredWidth)
                                   withMethod:@selector(SPPreferredWidth) error:&error];

    }
    
    Class favoritesMenuItemImageView = NSClassFromString(@"FavoritesMenuItemImageView");
    if (favoritesMenuItemImageView) {
        [favoritesMenuItemImageView jrlp_addMethodsFromClass:NSClassFromString(@"SPFavoritesMenuItemImageView") error:&error];
        
        [favoritesMenuItemImageView jrlp_swizzleMethod:@selector(allowsVibrancy)
                                            withMethod:@selector(SPAllowsVibrancy) error:&error];
        
    }
    
    Class favoritesMenuOutlineView = NSClassFromString(@"FavoritesMenuOutlineView");
    if (favoritesMenuOutlineView) {
        [favoritesMenuOutlineView jrlp_addMethodsFromClass:NSClassFromString(@"SPFavoritesMenuOutlineView") error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(scrollWheel:)
                                          withMethod:@selector(SPScrollWheel:) error:&error];

        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(mouseDown:)
                                          withMethod:@selector(SPMouseDown:) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(mouseMoved:)
                                          withMethod:@selector(SPMouseMoved:) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(mouseExited:)
                                          withMethod:@selector(SPMouseExited:) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(updateTrackingAreas)
                                          withMethod:@selector(SPUpdateTrackingAreas) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(_favoritesMenuOutlineViewCommonInitWithFrame:)
                                          withMethod:@selector(SP_favoritesMenuOutlineViewCommonInitWithFrame:) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(initWithCoder:)
                                          withMethod:@selector(SPInitWithCoder:) error:&error];
        
        [favoritesMenuOutlineView jrlp_swizzleMethod:@selector(initWithFrame:)
                                          withMethod:@selector(SPInitWithFrame:) error:&error];
        
        
    }

    Class flagsMenuItemView = NSClassFromString(@"FlagsMenuItemView");
    if (flagsMenuItemView) {
        [flagsMenuItemView jrlp_addMethodsFromClass:NSClassFromString(@"SPFlagsMenuItemView") error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(setEnabled:)
                                          withMethod:@selector(SPSetEnabled:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(viewDidMoveToWindow)
                                          withMethod:@selector(SPViewDidMoveToWindow) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(mouseUp:)
                                          withMethod:@selector(SPMouseUp:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(mouseExited:)
                                          withMethod:@selector(SPMouseExited:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(mouseEntered:)
                                   withMethod:@selector(SPMouseEntered:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(_drawSelectedOutlineForView:)
                                          withMethod:@selector(SP_drawSelectedOutlineForView:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(_viewForFlagColor:)
                                          withMethod:@selector(SP_viewForFlagColor:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(updateTrackingAreas)
                                          withMethod:@selector(SPUpdateTrackingAreas) error:&error];

        [flagsMenuItemView jrlp_swizzleMethod:@selector(awakeFromNib)
                                          withMethod:@selector(SPAwakeFromNib) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(_flagsMenuItemViewCommonInit)
                                          withMethod:@selector(SP_flagsMenuItemViewCommonInit) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(initWithCoder:)
                                          withMethod:@selector(SPInitWithCoder:) error:&error];
        
        [flagsMenuItemView jrlp_swizzleMethod:@selector(initWithFrame:)
                                          withMethod:@selector(SPInitWithFrame:) error:&error];
    }
    
    Class lazyMenuSegmentedCell = NSClassFromString(@"LazyMenuSegmentedCell");
    if (lazyMenuSegmentedCell) {
        [lazyMenuSegmentedCell jrlp_addMethodsFromClass:NSClassFromString(@"SPLazyMenuSegmentedCell") error:&error];
        
        [lazyMenuSegmentedCell jrlp_swizzleMethod:@selector(menuForSegment:)
                                       withMethod:@selector(SPMenuForSegment:) error:&error];
        
        [lazyMenuSegmentedCell jrlp_swizzleMethod:@selector(copyWithZone:)
                                       withMethod:@selector(SPCopyWithZone:) error:&error];
        
    }
    
    Class lazySubmenuMenuItem = NSClassFromString(@"LazySubmenuMenuItem");
    if (lazySubmenuMenuItem) {
        [lazySubmenuMenuItem jrlp_addMethodsFromClass:NSClassFromString(@"SPLazySubmenuMenuItem") error:&error];
        
        [lazySubmenuMenuItem jrlp_swizzleMethod:@selector(setEnabled:)
                                       withMethod:@selector(SPSetEnabled:) error:&error];
        
        [lazySubmenuMenuItem jrlp_swizzleMethod:@selector(isEnabled)
                                       withMethod:@selector(SPIsEnabled) error:&error];

        [lazySubmenuMenuItem jrlp_swizzleMethod:@selector(submenu)
                                     withMethod:@selector(SPSubmenu) error:&error];

        [lazySubmenuMenuItem jrlp_swizzleMethod:@selector(hasSubmenu)
                                     withMethod:@selector(SPHasSubmenu) error:&error];
        
        [lazySubmenuMenuItem jrlp_swizzleMethod:@selector(copyWithZone:)
                                     withMethod:@selector(SPCopyWithZone:) error:&error];
    }
    
    Class sortByMenuDelegate = NSClassFromString(@"SortByMenuDelegate");
    if (sortByMenuDelegate) {
        [sortByMenuDelegate jrlp_addMethodsFromClass:NSClassFromString(@"SPSortByMenuDelegate") error:&error];
        
        [sortByMenuDelegate jrlp_swizzleMethod:@selector(menuWillOpen:)
                                       withMethod:@selector(SPMenuWillOpen:) error:&error];
        
        [sortByMenuDelegate jrlp_swizzleMethod:@selector(menuNeedsUpdate:)
                                       withMethod:@selector(SPMenuNeedsUpdate:) error:&error];
    }
    
//    Class favoritesMenuDelegateProtocol = NSClassFromString(@"FavoritesMenuDelegateProtocol");
//    if (favoritesMenuDelegateProtocol) {
//        [favoritesMenuDelegateProtocol jrlp_addMethodsFromClass:NSClassFromString(@"SPFavoritesMenuDelegateProtocol") error:&error];
//        
//        [favoritesMenuDelegateProtocol jrlp_swizzleMethod:@selector(menuDidClose)
//                                    withMethod:@selector(SPMenuDidClose) error:&error];
//        
//        [favoritesMenuDelegateProtocol jrlp_swizzleMethod:@selector(menuDidPresent)
//                                    withMethod:@selector(SPMenuDidPresent) error:&error];
//        
//        [favoritesMenuDelegateProtocol jrlp_swizzleMethod:@selector(menuDidSelectMailbox:)
//                                               withMethod:@selector(SPMenuDidSelectMailbox:) error:&error];
//        
//        [favoritesMenuDelegateProtocol jrlp_swizzleMethod:@selector(selectedMailbox)
//                                               withMethod:@selector(SPSelectedMailbox) error:&error];
//
//    }

    Class deletingTableView = NSClassFromString(@"DeletingTableView");
    if (deletingTableView) {
        [deletingTableView jrlp_addMethodsFromClass:NSClassFromString(@"SPDeletingTableView") error:&error];
        
        [deletingTableView jrlp_swizzleMethod:@selector(keyDown:)
                                    withMethod:@selector(SPKeyDown:) error:&error];
        
    
    }
    
    Class flatTableView = NSClassFromString(@"FlatTableView");
    if (flatTableView) {
        [flatTableView jrlp_addMethodsFromClass:NSClassFromString(@"SPFlatTableView") error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(isOpaque)
                                   withMethod:@selector(SPIsOpaque) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(_dropTargetColor)
                               withMethod:@selector(SP_dropTargetColor) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(_selectionColor)
                               withMethod:@selector(SP_selectionColor) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(_highlightColorForCell:)
                               withMethod:@selector(SP_highlightColorForCell:) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(_drawDropHighlightBackgroundForRow:)
                               withMethod:@selector(SP_drawDropHighlightBackgroundForRow:) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(_highlightRow:withColor:)
                               withMethod:@selector(SP_highlightRow:withColor:) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(highlightSelectionInClipRect:)
                               withMethod:@selector(SPHighlightSelectionInClipRect:) error:&error];
        
        [flatTableView jrlp_swizzleMethod:@selector(awakeFromNib)
                               withMethod:@selector(SPAwakeFromNib) error:&error];
    }
//    
//    Class flatTableViewDataCell = NSClassFromString(@"FlatTableViewDataCell");
//    if (flatTableViewDataCell) {
//        [flatTableViewDataCell jrlp_addMethodsFromClass:NSClassFromString(@"SPFlatTableViewDataCell") error:&error];
//        
//        [flatTableViewDataCell jrlp_swizzleMethod:@selector(titleRectForBounds:)
//                                   withMethod:@selector(SPTitleRectForBounds:) error:&error];
//        
//        [flatTableViewDataCell jrlp_swizzleMethod:@selector(textColor)
//                                       withMethod:@selector(SPTextColor) error:&error];
//    }
    
    Class mailTableView = NSClassFromString(@"MailTableView");
    if (mailTableView) {
        [mailTableView jrlp_addMethodsFromClass:NSClassFromString(@"SPMailTableView") error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(reloadData)
                                       withMethod:@selector(SPReloadData) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_isRichTableView)
                                       withMethod:@selector(SP_isRichTableView) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(didScrollInScrollView:)
                               withMethod:@selector(SPDidScrollInScrollView:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(scrollRowToVisible:position:)
                               withMethod:@selector(SPScrollRowToVisible:position:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(showSelectionAndCenter:)
                               withMethod:@selector(SPShowSelectionAndCenter:) error:&error];

        [mailTableView jrlp_swizzleMethod:@selector(isSelectionVisible)
                               withMethod:@selector(SPIsSelectionVisible) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(lastRowInSelection)
                               withMethod:@selector(SPLastRowInSelection) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(firstRowInSelection)
                               withMethod:@selector(SPFirstRowInSelection) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(resignFirstResponder)
                               withMethod:@selector(SPResignFirstResponder) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(becomeFirstResponder)
                               withMethod:@selector(SPBecomeFirstResponder) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewDidMoveToSuperview)
                               withMethod:@selector(SPViewDidMoveToSuperview) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewWillMoveToSuperview:)
                               withMethod:@selector(SPViewWillMoveToSuperview:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewDidMoveToWindow)
                               withMethod:@selector(SPViewDidMoveToWindow) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewWillMoveToWindow:)
                               withMethod:@selector(SPViewWillMoveToWindow:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_postEventNotification:fromCell:)
                               withMethod:@selector(SP_postEventNotification:fromCell:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(mouseUp:)
                               withMethod:@selector(SPMouseUp:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_logSpotlightInfoForClickedMessage)
                               withMethod:@selector(SP_logSpotlightInfoForClickedMessage) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(mouseDown:)
                               withMethod:@selector(SPMouseDown:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(clickedRow)
                               withMethod:@selector(SPClickedRow) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(drawGridInClipRect:)
                               withMethod:@selector(SPDrawGridInClipRect:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(drawRow:clipRect:)
                               withMethod:@selector(SPDrawRow:clipRect:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(drawRect:)
                               withMethod:@selector(SPDrawRect:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(drawBackgroundInClipRect:)
                               withMethod:@selector(SPDrawBackgroundInClipRect:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_colorizeRow:inRect:clipRect:)
                               withMethod:@selector(SP_colorizeRow:inRect:clipRect:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_highlightRect:withColor:usingStyle:)
                               withMethod:@selector(SP_highlightRect:withColor:usingStyle:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(shouldUseSecondaryHighlightColor)
                               withMethod:@selector(SPShouldUseSecondaryHighlightColor) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(draggingSession:movedToPoint:)
                               withMethod:@selector(SPDraggingSession:movedToPoint:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(draggingSession:endedAtPoint:operation:)
                               withMethod:@selector(SPDraggingSession:endedAtPoint:operation:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(dragImageForRowsWithIndexes:tableColumns:event:offset:)
                               withMethod:@selector(SPDragImageForRowsWithIndexes:tableColumns:event:offset:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(addTableColumn:)
                               withMethod:@selector(SPAddTableColumn:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(removeTableColumn:)
                               withMethod:@selector(SPRemoveTableColumn:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(moveColumn:toColumn:)
                               withMethod:@selector(SPMoveColumn:toColumn:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(setTableColumn:toVisible:atPosition:)
                               withMethod:@selector(SPSetTableColumn:toVisible:atPosition:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(scrollRowToVisible:)
                               withMethod:@selector(SPScrollRowToVisible:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(showTableColumnsFromArray:allColumns:)
                               withMethod:@selector(SPShowTableColumnsFromArray:allColumns:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(menu)
                               withMethod:@selector(SPMenu) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(setDelegate:)
                               withMethod:@selector(SPSetDelegate:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(keyDown:)
                               withMethod:@selector(SPKeyDown:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(insertText:)
                               withMethod:@selector(SPInsertText:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(doCommandBySelector:)
                               withMethod:@selector(SPDoCommandBySelector:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(respondsToSelector:)
                               withMethod:@selector(SPRespondsToSelector:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewDidEndLiveResize)
                               withMethod:@selector(SPViewDidEndLiveResize) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(viewWillStartLiveResize)
                               withMethod:@selector(SPViewWillStartLiveResize) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(initWithCoder:)
                               withMethod:@selector(SPInitWithCoder:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(initWithFrame:)
                               withMethod:@selector(SPInitWithFrame:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_mailTableViewCommonInit)
                               withMethod:@selector(SP_mailTableViewCommonInit) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(menuForEvent:)
                               withMethod:@selector(SPMenuForEvent:) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(_extendedDelegate)
                               withMethod:@selector(SP_extendedDelegate) error:&error];
        
        [mailTableView jrlp_swizzleMethod:@selector(isOpaque)
                               withMethod:@selector(SPIsOpaque) error:&error];

    }
    
    Class tableViewManager = NSClassFromString(@"TableViewManager");
    if (tableViewManager) {
        [tableViewManager jrlp_addMethodsFromClass:NSClassFromString(@"SPTableViewManager") error:&error];
        
        [tableViewManager jrlp_swizzleClassMethod:@selector(_getThreadBackgroundColorForThread:)
                                  withClassMethod:@selector(SP_getThreadBackgroundColorForThread:) error:&error];
        
        [tableViewManager jrlp_swizzleClassMethod:@selector(_getDarkerThreadBackgroundColorForThread:)
                                  withClassMethod:@selector(SP_getDarkerThreadBackgroundColorForThread:) error:&error];
        
        [tableViewManager jrlp_swizzleClassMethod:@selector(specialImageForMessageCount:offset:)
                                  withClassMethod:@selector(SPspecialImageForMessageCount:offset:) error:&error];
        
        [tableViewManager jrlp_swizzleClassMethod:@selector(isColumnValid:)
                                  withClassMethod:@selector(SPisColumnValid:) error:&error];
        
        [tableViewManager jrlp_swizzleClassMethod:@selector(initialize)
                                  withClassMethod:@selector(SPinitialize) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(hideDeletions)
                                  withMethod:@selector(SPhideDeletions) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(showDeletions)
                                  withMethod:@selector(SPshowDeletions) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messageToSelectIfEntireSelectionRemoved:)
                                  withMethod:@selector(SPmessageToSelectIfEntireSelectionRemoved:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_recordSelectionHistoryForRow:)
                                  withMethod:@selector(SP_recordSelectionHistoryForRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_resetNextMessageTracking)
                                  withMethod:@selector(SP_resetNextMessageTracking) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_goUpInsteadOfDown)
                                  withMethod:@selector(SP_goUpInsteadOfDown) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_indexOfFirstNonDeletedNonSelectedMessage:withinRowRange:goUp:)
                                  withMethod:@selector(SP_indexOfFirstNonDeletedNonSelectedMessage:withinRowRange:goUp:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:rangesForBackgroundShadingInRange:shadingColors:leftColumnColors:)
                                  withMethod:@selector(SPmailTableView:rangesForBackgroundShadingInRange:shadingColors:leftColumnColors:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(shouldTrackMouse:)
                                  withMethod:@selector(SPshouldTrackMouse:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:gotEvent:)
                                  withMethod:@selector(SPmailTableView:gotEvent:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setButtonCellNeedsDisplay)
                                  withMethod:@selector(SP_setButtonCellNeedsDisplay) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_callWillDisplayCellForClickedCell)
                                  withMethod:@selector(SP_callWillDisplayCellForClickedCell) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_mouseLocationInWindow)
                                  withMethod:@selector(SP_mouseLocationInWindow) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(frameOfClickedCell)
                                  withMethod:@selector(SPframeOfClickedCell) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:willDrawRowsInRange:)
                                  withMethod:@selector(SPmailTableView:willDrawRowsInRange:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:dragImageForRowsWithIndexes:event:dragImageOffset:)
                                  withMethod:@selector(SPmailTableView:dragImageForRowsWithIndexes:event:dragImageOffset:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:writeRowsWithIndexes:toPasteboard:)
                                  withMethod:@selector(SPtableView:writeRowsWithIndexes:toPasteboard:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:didMouseDown:)
                                  withMethod:@selector(SPmailTableView:didMouseDown:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:willMouseDown:)
                                  withMethod:@selector(SPmailTableView:willMouseDown:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDragWillEnd:operation:)
                                  withMethod:@selector(SPmailTableViewDragWillEnd:operation:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(transfer:didCompleteWithError:)
                                  withMethod:@selector(SPtransfer:didCompleteWithError:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messagesToTransferIsMove:)
                                  withMethod:@selector(SPmessagesToTransferIsMove:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_filterAndExpandMessagesForTransfer:)
                                  withMethod:@selector(SP_filterAndExpandMessagesForTransfer:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDraggingSession:movedTo:)
                                  withMethod:@selector(SPmailTableViewDraggingSession:movedTo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(archiveMessages:allowUndo:)
                                  withMethod:@selector(SParchiveMessages:allowUndo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(shouldDeleteMessagesGivenCurrentState:)
                                  withMethod:@selector(SPshouldDeleteMessagesGivenCurrentState:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(undeleteMessagesAllowingUndo:)
                                  withMethod:@selector(SPundeleteMessagesAllowingUndo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(deleteMessages:allowMoveToTrash:allowUndo:)
                                  withMethod:@selector(SPdeleteMessages:allowMoveToTrash:allowUndo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_redeleteMessages:messagesToSelect:)
                                  withMethod:@selector(SP_redeleteMessages:messagesToSelect:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(undeleteMessages:allowUndo:)
                                  withMethod:@selector(SPundeleteMessages:allowUndo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_undeleteMessages:allowUndo:unreadMessages:)
                                  withMethod:@selector(SP_undeleteMessages:allowUndo:unreadMessages:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_adjustScrollPositionForTransferredMessages:isUndo:)
                                  withMethod:@selector(SP_adjustScrollPositionForTransferredMessages:isUndo:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_undoActionNameForMessageCount:)
                                  withMethod:@selector(SP_undoActionNameForMessageCount:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:doCommandBySelector:)
                                  withMethod:@selector(SPmailTableView:doCommandBySelector:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messageStore)
                                  withMethod:@selector(SPmessageStore) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(currentDisplayedMessage)
                                  withMethod:@selector(SPcurrentDisplayedMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(parentThreadForChildMessage:)
                                  withMethod:@selector(SPparentThreadForChildMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messageThatUserIsProbablyReading)
                                  withMethod:@selector(SPmessageThatUserIsProbablyReading) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectMessages:)
                                  withMethod:@selector(SPselectMessages:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_selectMessages:scrollIfNeeded:)
                                  withMethod:@selector(SP_selectMessages:scrollIfNeeded:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(actionMessagesForAction:)
                                  withMethod:@selector(SPactionMessagesForAction:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selection)
                                  withMethod:@selector(SPselection) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectionExpandingThreadsAndHiddenCopies:)
                                  withMethod:@selector(SPselectionExpandingThreadsAndHiddenCopies:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(deleteSelectionAllowingMoveToTrash:)
                                  withMethod:@selector(SPdeleteSelectionAllowingMoveToTrash:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(deleteKeyPressed)
                                  withMethod:@selector(SPdeleteKeyPressed) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_photoSizeForNumberOfSnippetLines:)
                                  withMethod:@selector(SP_photoSizeForNumberOfSnippetLines:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_snippetsUpdated:)
                                  withMethod:@selector(SP_snippetsUpdated:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_localizeSnippet:)
                                  withMethod:@selector(SP_localizeSnippet:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateRowsWithNewSnippets:)
                                  withMethod:@selector(SP_updateRowsWithNewSnippets:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateSnippetsForMessage:ignoreExpected:)
                                  withMethod:@selector(SP_updateSnippetsForMessage:ignoreExpected:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(clearSnippetCacheForMessages:)
                                  withMethod:@selector(SPclearSnippetCacheForMessages:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mallPrefetchedSnippets:)
                                  withMethod:@selector(SPmallPrefetchedSnippets:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(resetSnippetCache)
                                  withMethod:@selector(SPresetSnippetCache) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_messagesNeedingSnippetsAroundRow:)
                                  withMethod:@selector(SP_messagesNeedingSnippetsAroundRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_performSnippetFetching)
                                  withMethod:@selector(SP_performSnippetFetching) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_cacheSnippetsAroundRow:)
                                  withMethod:@selector(SP_cacheSnippetsAroundRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_snippetFetchQueue)
                                  withMethod:@selector(SP_snippetFetchQueue) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_snippetForMessage:)
                                  withMethod:@selector(SP_snippetForMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_doubleClickedMessage:)
                                  withMethod:@selector(SP_doubleClickedMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewTopLineColor:)
                                  withMethod:@selector(SPmailTableViewTopLineColor:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:highlightStyleForRow:inRect:color:)
                                  withMethod:@selector(SPmailTableView:highlightStyleForRow:inRect:color:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:willDisplayCell:forTableColumn:row:)
                                  withMethod:@selector(SPtableView:willDisplayCell:forTableColumn:row:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:dataCellForTableColumn:row:)
                                  withMethod:@selector(SPtableView:dataCellForTableColumn:row:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_resetObjectValueForCellView:)
                                  withMethod:@selector(SP_resetObjectValueForCellView:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_shouldShowMailboxNames)
                                  withMethod:@selector(SP_shouldShowMailboxNames) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_prepareCell:withMessage:)
                                  withMethod:@selector(SP_prepareCell:withMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_prepareProxyForMessage:selected:createIfNeeded:)
                                  withMethod:@selector(SP_prepareProxyForMessage:selected:createIfNeeded:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:viewForTableColumn:row:)
                                  withMethod:@selector(SPtableView:viewForTableColumn:row:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:rowViewForRow:)
                                  withMethod:@selector(SPtableView:rowViewForRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:didRemoveRowView:forRow:)
                                  withMethod:@selector(SPtableView:didRemoveRowView:forRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:didAddRowView:forRow:)
                                  withMethod:@selector(SPtableView:didAddRowView:forRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupRowView:atIndex:)
                                  withMethod:@selector(SP_setupRowView:atIndex:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupRowViewAtRow:)
                                  withMethod:@selector(SP_setupRowViewAtRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewColumnDidResize:)
                                  withMethod:@selector(SPtableViewColumnDidResize:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewColumnDidMove:)
                                  withMethod:@selector(SPtableViewColumnDidMove:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDidEndLiveResize:)
                                  withMethod:@selector(SPmailTableViewDidEndLiveResize:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewWillStartLiveResize:)
                                  withMethod:@selector(SPmailTableViewWillStartLiveResize:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewFrameChangedDuringLiveResize:)
                                  withMethod:@selector(SPtableViewFrameChangedDuringLiveResize:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:didDragTableColumn:)
                                  withMethod:@selector(SPtableView:didDragTableColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(updateColorHighlightEdges)
                                  withMethod:@selector(SPupdateColorHighlightEdges) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_proxyForMessage:createIfNeeded:)
                                  withMethod:@selector(SP_proxyForMessage:createIfNeeded:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:objectValueForTableColumn:row:)
                                  withMethod:@selector(SPtableView:objectValueForTableColumn:row:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:shouldTypeSelectForEvent:withCurrentSearchString:)
                                  withMethod:@selector(SPtableView:shouldTypeSelectForEvent:withCurrentSearchString:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:typeSelectStringForTableColumn:row:)
                                  withMethod:@selector(SPtableView:typeSelectStringForTableColumn:row:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_truncatedAttributedStringForString:message:row:shouldIndent:)
                                  withMethod:@selector(SP_truncatedAttributedStringForString:message:row:shouldIndent:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_colorForMessage:inRow:withCell:)
                                  withMethod:@selector(SP_colorForMessage:inRow:withCell:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_messageSelectionColor)
                                  withMethod:@selector(SP_messageSelectionColor) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_attributesForTruncatedParagraphStyle)
                                  withMethod:@selector(SP_attributesForTruncatedParagraphStyle) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(numberOfRowsInTableView:)
                                  withMethod:@selector(SPnumberOfRowsInTableView:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectionStateLog)
                                  withMethod:@selector(SPselectionStateLog) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_datesNeedRedisplay:)
                                  withMethod:@selector(SP_datesNeedRedisplay:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDidResignFirstResponder:)
                                  withMethod:@selector(SPmailTableViewDidResignFirstResponder:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDidBecomeFirstResponder:)
                                  withMethod:@selector(SPmailTableViewDidBecomeFirstResponder:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_redisplayRowsAboveSelected)
                                  withMethod:@selector(SP_redisplayRowsAboveSelected) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewSelectionDidChange:)
                                  withMethod:@selector(SPtableViewSelectionDidChange:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_normalizedSelection:)
                                  withMethod:@selector(SP_normalizedSelection:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:selectionIndexesForProposedSelection:)
                                  withMethod:@selector(SPtableView:selectionIndexesForProposedSelection:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_selectOrDeselectMembersOfThread:atIndex:select:)
                                  withMethod:@selector(SP_selectOrDeselectMembersOfThread:atIndex:select:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(updateViewingPaneToSelection)
                                  withMethod:@selector(SPupdateViewingPaneToSelection) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectedThread)
                                  withMethod:@selector(SPselectedThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_messageSelectionWithDataForPrinting:)
                                  withMethod:@selector(SP_messageSelectionWithDataForPrinting:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messageSelectionForPrinting)
                                  withMethod:@selector(SPmessageSelectionForPrinting) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messageSelection)
                                  withMethod:@selector(SPmessageSelection) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(removeAllMouseTrackers)
                                  withMethod:@selector(SPremoveAllMouseTrackers) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(addMouseTrackersObject:)
                                  withMethod:@selector(SPaddMouseTrackersObject:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_openThreadIdentifiers)
                                  withMethod:@selector(SP_openThreadIdentifiers) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_rawSelectionIdentifiersForThreads:identifiersForMessages:)
                                  withMethod:@selector(SP_rawSelectionIdentifiersForThreads:identifiersForMessages:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_mailboxViewingState)
                                  withMethod:@selector(SP_mailboxViewingState) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(removeAllRawSelection)
                                  withMethod:@selector(SPremoveAllRawSelection) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(addRawSelectionObject:)
                                  withMethod:@selector(SPaddRawSelectionObject:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(replaceObjectInRawSelectionAtIndex:withObject:)
                                  withMethod:@selector(SPreplaceObjectInRawSelectionAtIndex:withObject:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(removeObjectFromRawSelectionAtIndex:)
                                  withMethod:@selector(SPremoveObjectFromRawSelectionAtIndex:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(objectInRawSelectionAtIndex:)
                                  withMethod:@selector(SPobjectInRawSelectionAtIndex:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(countOfRawSelection)
                                  withMethod:@selector(SPcountOfRawSelection) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateSelectedThreadList)
                                  withMethod:@selector(SP_updateSelectedThreadList) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_reloadDisplayOnlyForMessagesInSet:highlightOnly:)
                                  withMethod:@selector(SP_reloadDisplayOnlyForMessagesInSet:highlightOnly:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_isMessageInSelectedThread:)
                                  withMethod:@selector(SP_isMessageInSelectedThread:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:shouldScrollRowToVisible:)
                                  withMethod:@selector(SPmailTableView:shouldScrollRowToVisible:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(scrollRowToVisible:position:)
                                  withMethod:@selector(SPscrollRowToVisible:position:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(isSelectionVisible)
                                  withMethod:@selector(SPisSelectionVisible) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(showSelectionAndCenter:)
                                  withMethod:@selector(SPshowSelectionAndCenter:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectPreviousReplyToParent)
                                  withMethod:@selector(SPselectPreviousReplyToParent) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectNextReplyToParent)
                                  withMethod:@selector(SPselectNextReplyToParent) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectPeer:)
                                  withMethod:@selector(SPselectPeer:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectFirstReplyToMessage)
                                  withMethod:@selector(SPselectFirstReplyToMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectParentOfMessage)
                                  withMethod:@selector(SPselectParentOfMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectPreviousMessage:)
                                  withMethod:@selector(SPselectPreviousMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectNextMessage:)
                                  withMethod:@selector(SPselectNextMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(nextMessageIsBelow)
                                  withMethod:@selector(SPnextMessageIsBelow) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectOldestUnreadOrNewestMessageInThread)
                                  withMethod:@selector(SPselectOldestUnreadOrNewestMessageInThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(openSelectedThread)
                                  withMethod:@selector(SPopenSelectedThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(stepOutOfSelectedThread)
                                  withMethod:@selector(SPstepOutOfSelectedThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(stepIntoSelectedThread)
                                  withMethod:@selector(SPstepIntoSelectedThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectNextMessageMovingUpward:)
                                  withMethod:@selector(SPselectNextMessageMovingUpward:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_modifierFlagsForKeyboardNavigation)
                                  withMethod:@selector(SP_modifierFlagsForKeyboardNavigation) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectionIsExactlyOneOpenThread)
                                  withMethod:@selector(SPselectionIsExactlyOneOpenThread) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectNextReplyToParent)
                                  withMethod:@selector(SPcanSelectNextReplyToParent) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectFirstReplyToMessage)
                                  withMethod:@selector(SPcanSelectFirstReplyToMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectParentOfMessage)
                                  withMethod:@selector(SPcanSelectParentOfMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectNextThreadedMessage)
                                  withMethod:@selector(SPcanSelectNextThreadedMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectPreviousThreadedMessage)
                                  withMethod:@selector(SPcanSelectPreviousThreadedMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_indexOfMessageNearest:numberOfRows:downward:)
                                  withMethod:@selector(SP_indexOfMessageNearest:numberOfRows:downward:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(toggleThread:ignoreModifierKeys:)
                                  withMethod:@selector(SPtoggleThread:ignoreModifierKeys:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(toggleThread:)
                                  withMethod:@selector(SPtoggleThread:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(unhideMessages:)
                                  withMethod:@selector(SPunhideMessages:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(hideMessages:selectingNextMessage:)
                                  withMethod:@selector(SPhideMessages:selectingNextMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(closeAllThreads)
                                  withMethod:@selector(SPcloseAllThreads) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(openAllThreads)
                                  withMethod:@selector(SPopenAllThreads) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(closeThread:)
                                  withMethod:@selector(SPcloseThread:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(openThread:)
                                  withMethod:@selector(SPopenThread:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(invalidateSelectionCache:)
                                  withMethod:@selector(SPinvalidateSelectionCache:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(toggleThreadedMode)
                                  withMethod:@selector(SPtoggleThreadedMode) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateTableViewRowHeight)
                                  withMethod:@selector(SP_updateTableViewRowHeight) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:heightOfRow:)
                                  withMethod:@selector(SPtableView:heightOfRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewRowHeightForRichMessageList:)
                                  withMethod:@selector(SPtableViewRowHeightForRichMessageList:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(makeMessageListFirstResponder)
                                  withMethod:@selector(SPmakeMessageListFirstResponder) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(selectAllMessagesAndMakeFirstResponder)
                                  withMethod:@selector(SPselectAllMessagesAndMakeFirstResponder) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewNumberOfColumnsToPinToLefthandSide:)
                                  withMethod:@selector(SPtableViewNumberOfColumnsToPinToLefthandSide:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:shouldAddTableColumn:)
                                  withMethod:@selector(SPmailTableView:shouldAddTableColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:shouldRemoveTableColumn:)
                                  withMethod:@selector(SPmailTableView:shouldRemoveTableColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:shouldReorderColumn:toColumn:)
                                  withMethod:@selector(SPtableView:shouldReorderColumn:toColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setColumn:toVisible:)
                                  withMethod:@selector(SP_setColumn:toVisible:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setColumn:toVisible:)
                                  withMethod:@selector(SPsetColumn:toVisible:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateAttributesForMailboxes)
                                  withMethod:@selector(SP_updateAttributesForMailboxes) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(isColumnVisible:)
                                  withMethod:@selector(SPisColumnVisible:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_isAutomaticInsertionWhileSearchingOkayForColumn:)
                                  withMethod:@selector(SP_isAutomaticInsertionWhileSearchingOkayForColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_isColumnVisibleInSettings:)
                                  withMethod:@selector(SP_isColumnVisibleInSettings:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_unreadColumn)
                                  withMethod:@selector(SP_unreadColumn) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_columnWithIdentifierTag:)
                                  withMethod:@selector(SP_columnWithIdentifierTag:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableView:didClickTableColumn:)
                                  withMethod:@selector(SPtableView:didClickTableColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateTableHeaderToMatchCurrentSort)
                                  withMethod:@selector(SP_updateTableHeaderToMatchCurrentSort) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_threadColorPreferenceChanged:)
                                  withMethod:@selector(SP_threadColorPreferenceChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_snippetLinePreferenceChanged:)
                                  withMethod:@selector(SP_snippetLinePreferenceChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_toCcPreferenceChanged:)
                                  withMethod:@selector(SP_toCcPreferenceChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_viewerLayoutPreferenceChanged:)
                                  withMethod:@selector(SP_viewerLayoutPreferenceChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_viewerPreferencesChanged:)
                                  withMethod:@selector(SP_viewerPreferencesChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectPreviousMessage)
                                  withMethod:@selector(SPcanSelectPreviousMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(canSelectNextMessage)
                                  withMethod:@selector(SPcanSelectNextMessage) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(readStoreSpecificAttributesFromDictionary:)
                                  withMethod:@selector(SPreadStoreSpecificAttributesFromDictionary:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(readStoreSpecificAttributesFromMailbox:)
                                  withMethod:@selector(SPreadStoreSpecificAttributesFromMailbox:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(writeStoreSpecificAttributesToMailbox:)
                                  withMethod:@selector(SPwriteStoreSpecificAttributesToMailbox:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(writeAttributesToDictionary:)
                                  withMethod:@selector(SPwriteAttributesToDictionary:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(readAttributesFromDictionary:)
                                  withMethod:@selector(SPreadAttributesFromDictionary:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setupColumnManagerFromDictionary:)
                                  withMethod:@selector(SPsetupColumnManagerFromDictionary:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_mallConversationsUpdated:)
                                  withMethod:@selector(SP_mallConversationsUpdated:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_messageMarkedForOverwrite:)
                                  withMethod:@selector(SP_messageMarkedForOverwrite:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(prepareForWindowClose)
                                  withMethod:@selector(SPprepareForWindowClose) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_configureTableViewLayoutWithTableColumnResizingMasks:)
                                  withMethod:@selector(SP_configureTableViewLayoutWithTableColumnResizingMasks:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupColumnsForTableView)
                                  withMethod:@selector(SP_setupColumnsForTableView) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(showFollowupsToMessageAtRow:)
                                  withMethod:@selector(SPshowFollowupsToMessageAtRow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(showFollowupsToMessage:)
                                  withMethod:@selector(SPshowFollowupsToMessage:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(richUnreadButtonClicked:)
                                  withMethod:@selector(SPrichUnreadButtonClicked:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_createTintedImages)
                                  withMethod:@selector(SP_createTintedImages) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_configureRichMessageListColumn)
                                  withMethod:@selector(SP_configureRichMessageListColumn) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_configureColumnForRolloverCell:alignment:action:)
                                  withMethod:@selector(SP_configureColumnForRolloverCell:alignment:action:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_configureColumnForImageCell:alignment:)
                                  withMethod:@selector(SP_configureColumnForImageCell:alignment:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_configureColumnForEndTruncation:)
                                  withMethod:@selector(SP_configureColumnForEndTruncation:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupTableColumnWidths)
                                  withMethod:@selector(SP_setupTableColumnWidths) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupColumnHeaderIcon:inColumnWithIdentifier:accessibilityLabel:alignment:)
                                  withMethod:@selector(SP_setupColumnHeaderIcon:inColumnWithIdentifier:accessibilityLabel:alignment:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(userDidScrollInTableView:)
                                  withMethod:@selector(SPuserDidScrollInTableView:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_tableViewScrolled:)
                                  withMethod:@selector(SP_tableViewScrolled:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(respondsToSelector:)
                                  withMethod:@selector(SPrespondsToSelector:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(tableViewGetDefaultMenu:)
                                  withMethod:@selector(SPtableViewGetDefaultMenu:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_unregisterTableViewNibs)
                                  withMethod:@selector(SP_unregisterTableViewNibs) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_registerTableViewNibs)
                                  withMethod:@selector(SP_registerTableViewNibs) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(init)
                                  withMethod:@selector(SPinit) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_columnForAppleScriptColumn:)
                                  withMethod:@selector(SP_columnForAppleScriptColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setAppleScriptVisibleColumns:)
                                  withMethod:@selector(SPsetAppleScriptVisibleColumns:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(appleScriptVisibleColumns)
                                  withMethod:@selector(SPappleScriptVisibleColumns) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setAppleScriptSortColumn:)
                                  withMethod:@selector(SPsetAppleScriptSortColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(appleScriptSortColumn)
                                  withMethod:@selector(SPappleScriptSortColumn) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableViewDidMoveToWindow:)
                                  withMethod:@selector(SPmailTableViewDidMoveToWindow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mailTableView:willMoveToWindow:)
                                  withMethod:@selector(SPmailTableView:willMoveToWindow:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_scrollRectToVisibleAdjustment:visibleRect:)
                                  withMethod:@selector(SP_scrollRectToVisibleAdjustment:visibleRect:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_isRowVisible:)
                                  withMethod:@selector(SP_isRowVisible:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_indexOfMemberToSelectWhenOpeningThread:)
                                  withMethod:@selector(SP_indexOfMemberToSelectWhenOpeningThread:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(updateTrackingRects)
                                  withMethod:@selector(SPupdateTrackingRects) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(clearTrackingRects)
                                  withMethod:@selector(SPclearTrackingRects) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(filteredMessages)
                                  withMethod:@selector(SPfilteredMessages) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setIsSortedAscending:)
                                  withMethod:@selector(SPsetIsSortedAscending:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(isSortedAscending)
                                  withMethod:@selector(SPisSortedAscending) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setSortColumn:ascending:)
                                  withMethod:@selector(SPsetSortColumn:ascending:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(sortByStringForColumn:)
                                  withMethod:@selector(SPsortByStringForColumn:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(sortColumn)
                                  withMethod:@selector(SPsortColumn) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(isSortedChronologically)
                                  withMethod:@selector(SPisSortedChronologically) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(isSortedByDateReceived)
                                  withMethod:@selector(SPisSortedByDateReceived) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(searchForString:in:withOptions:)
                                  withMethod:@selector(SPsearchForString:in:withOptions:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(searchForSuggestions:in:withOptions:fromSuggestionsSearchField:)
                                  withMethod:@selector(SPsearchForSuggestions:in:withOptions:fromSuggestionsSearchField:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateInitialViewingState)
                                  withMethod:@selector(SP_updateInitialViewingState) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_searchForString:orSuggestions:in:withOptions:fromSuggestionsSearchField:)
                                  withMethod:@selector(SP_searchForString:orSuggestions:in:withOptions:fromSuggestionsSearchField:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(clearSearch)
                                  withMethod:@selector(SPclearSearch) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(messagesRemovedFromMall:)
                                  withMethod:@selector(SPmessagesRemovedFromMall:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_updateSearchDelegate)
                                  withMethod:@selector(SP_updateSearchDelegate) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mallFinishedLoading:)
                                  withMethod:@selector(SPmallFinishedLoading:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_setupColumns)
                                  withMethod:@selector(SP_setupColumns) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mallStructureChanged:)
                                  withMethod:@selector(SPmallStructureChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(mallSortChanged:)
                                  withMethod:@selector(SPmallSortChanged:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(reloadMailboxes:)
                                  withMethod:@selector(SPreloadMailboxes:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(setMailboxes:isSettingUpUI:)
                                  withMethod:@selector(SPsetMailboxes:isSettingUpUI:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_restoreScrollState:)
                                  withMethod:@selector(SP_restoreScrollState:) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_currentScrollState)
                                  withMethod:@selector(SP_currentScrollState) error:&error];
        
        [tableViewManager jrlp_swizzleMethod:@selector(_debugThreadAnimation)
                                  withMethod:@selector(SP_debugThreadAnimation) error:&error];
        
    }
    
    Class messageViewer = NSClassFromString(@"MessageViewer");
    if (messageViewer) {
        [messageViewer jrlp_addMethodsFromClass:NSClassFromString(@"SPMessageViewer") error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(_messageViewersByUniqueID)
                               withClassMethod:@selector(SP_messageViewersByUniqueID) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(deleteOperationForEvent:isKeyPressed:)
                               withClassMethod:@selector(SPdeleteOperationForEvent:isKeyPressed:) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(mailboxesBeingViewed)
                               withClassMethod:@selector(SPmailboxesBeingViewed) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(showAllViewers)
                               withClassMethod:@selector(SPshowAllViewers) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(allSingleMessageViewers)
                               withClassMethod:@selector(SPallSingleMessageViewers) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(allMessageViewers)
                               withClassMethod:@selector(SPallMessageViewers) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(initialize)
                               withClassMethod:@selector(SPinitialize) error:&error];
        
        [messageViewer jrlp_swizzleClassMethod:@selector(messageViewerForUniqueID:)
                               withClassMethod:@selector(SPmessageViewerForUniqueID:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_selectedLabels)
                               withMethod:@selector(SP_selectedLabels) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(transferMessages:toMailbox:deleteOriginals:allowUndo:isDeleteOperation:isArchiveOperation:)
                               withMethod:@selector(SPtransferMessages:toMailbox:deleteOriginals:allowUndo:isDeleteOperation:isArchiveOperation:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_synchronouslyMarkAsNotJunkMail:)
                               withMethod:@selector(SP_synchronouslyMarkAsNotJunkMail:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_markMessagesAsNotJunkMail:stores:)
                               withMethod:@selector(SP_markMessagesAsNotJunkMail:stores:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(markAsNotJunkMail:)
                               withMethod:@selector(SPmarkAsNotJunkMail:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_undoMarkMessagesAsJunkMail:stores:)
                               withMethod:@selector(SP_undoMarkMessagesAsJunkMail:stores:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_deleteJunkedMessages:inStores:moveToTrash:)
                               withMethod:@selector(SP_deleteJunkedMessages:inStores:moveToTrash:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(markAsJunkMail:)
                               withMethod:@selector(SPmarkAsJunkMail:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(markAsUnreadFromToolbar:)
                               withMethod:@selector(SPmarkAsUnreadFromToolbar:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(markAsReadFromToolbar:)
                               withMethod:@selector(SPmarkAsReadFromToolbar:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(markAsUnread:)
                               withMethod:@selector(SPmarkAsUnread:) error:&error];
        
        
        [messageViewer jrlp_swizzleMethod:@selector(reapplySortingRules:)
                               withMethod:@selector(SPreapplySortingRules:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(filterMessagesToMoveOrDelete:)
                               withMethod:@selector(SPfilterMessagesToMoveOrDelete:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(deleteMessages:allowMoveToTrash:allowUndo:)
                               withMethod:@selector(SPdeleteMessages:allowMoveToTrash:allowUndo:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(messagesWereSelected:fromTableViewManager:)
                               withMethod:@selector(SPmessagesWereSelected:fromTableViewManager:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(copyMessagesToMailbox:)
                               withMethod:@selector(SPcopyMessagesToMailbox:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(moveMessagesToMailbox:)
                               withMethod:@selector(SPmoveMessagesToMailbox:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_moveOrCopyMessagesToMailbox:deleteOriginals:)
                               withMethod:@selector(SP_moveOrCopyMessagesToMailbox:deleteOriginals:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_displaySelectedMessageInSeparateWindow:withModifiers:)
                               withMethod:@selector(SP_displaySelectedMessageInSeparateWindow:withModifiers:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(forwardWithParentAsAttachment:)
                               withMethod:@selector(SPforwardWithParentAsAttachment:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(forwardAsAttachment:)
                               withMethod:@selector(SPforwardAsAttachment:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(forwardMessage:)
                               withMethod:@selector(SPforwardMessage:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(redirectMessage:)
                               withMethod:@selector(SPredirectMessage:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(selectAllMessages)
                               withMethod:@selector(SPselectAllMessages) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(_openMessages:withModifiers:)
                               withMethod:@selector(SP_openMessages:withModifiers:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(openMessages:)
                               withMethod:@selector(SPopenMessages:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(archiveMessages:)
                               withMethod:@selector(SParchiveMessages:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(deleteMessages:allowingMoveToTrash:)
                               withMethod:@selector(SPdeleteMessages:allowingMoveToTrash:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(deleteMessages:)
                               withMethod:@selector(SPdeleteMessages:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(undeleteMessages:)
                               withMethod:@selector(SPundeleteMessages:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(replyToOriginalSender:)
                               withMethod:@selector(SPreplyToOriginalSender:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(replyAllMessage:)
                               withMethod:@selector(SPreplyAllMessage:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(replyMessage:)
                               withMethod:@selector(SPreplyMessage:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(keyUp:)
                               withMethod:@selector(SPkeyUp:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(keyDown:)
                               withMethod:@selector(SPkeyDown:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(selectMailbox:)
                               withMethod:@selector(SPselectMailbox:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(messageSelection)
                               withMethod:@selector(SPmessageSelection) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(selectedMessages)
                               withMethod:@selector(SPselectedMessages) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(junkMailbox)
                               withMethod:@selector(SPjunkMailbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(trashMailbox)
                               withMethod:@selector(SPtrashMailbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(sentMailbox)
                               withMethod:@selector(SPsentMailbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(draftsMailbox)
                               withMethod:@selector(SPdraftsMailbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(outbox)
                               withMethod:@selector(SPoutbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(inbox)
                               withMethod:@selector(SPinbox) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(submenuAction:)
                               withMethod:@selector(SPsubmenuAction:) error:&error];
        
        [messageViewer jrlp_swizzleMethod:@selector(setSelectedMessages:)
                               withMethod:@selector(SPsetSelectedMessages:) error:&error];
        
    }
    
    Class messageViewController = NSClassFromString(@"MessageViewController");
    if (messageViewController) {
        [messageViewController jrlp_addMethodsFromClass:NSClassFromString(@"SPMessageViewController") error:&error];
        
        [messageViewController jrlp_swizzleClassMethod:@selector(keyPathsForValuesAffectingAlwaysShowMailboxName)
                               withClassMethod:@selector(SPkeyPathsForValuesAffectingAlwaysShowMailboxName) error:&error];
        
        [messageViewController jrlp_swizzleClassMethod:@selector(keyPathsForValuesAffectingLoaded)
                                       withClassMethod:@selector(SPkeyPathsForValuesAffectingLoaded) error:&error];

        [messageViewController jrlp_swizzleClassMethod:@selector(keyPathsForValuesAffectingPageZoom)
                                       withClassMethod:@selector(SPkeyPathsForValuesAffectingPageZoom) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(validateMenuItem:)
                                       withMethod:@selector(SPvalidateMenuItem:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(validateToolbarItem:)
                                       withMethod:@selector(SPvalidateToolbarItem:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(observeValueForKeyPath:ofObject:change:context:)
                                       withMethod:@selector(SPobserveValueForKeyPath:ofObject:change:context:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(menuNeedsUpdate:)
                                       withMethod:@selector(SPmenuNeedsUpdate:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(exportAttachments:)
                                       withMethod:@selector(SPexportAttachments:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(quickLookAllAttachments:)
                                       withMethod:@selector(SPquickLookAllAttachments:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(saveAllAttachmentsWithoutPrompting:)
                                       withMethod:@selector(SPsaveAllAttachmentsWithoutPrompting:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(saveAllAttachments:)
                                       withMethod:@selector(SPsaveAllAttachments:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(saveAttachment:)
                                       withMethod:@selector(SPsaveAttachment:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(viewSource:)
                                       withMethod:@selector(SPviewSource:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(showMessageInMailbox:)
                                       withMethod:@selector(SPshowMessageInMailbox:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(toggleAllHeaders:)
                                       withMethod:@selector(SPtoggleAllHeaders:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(forward:)
                                       withMethod:@selector(SPforward:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(replyAll:)
                                       withMethod:@selector(SPreplyAll:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(reply:)
                                       withMethod:@selector(SPreply:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(delete:)
                                       withMethod:@selector(SPdelete:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_messageViewer)
                                       withMethod:@selector(SP_messageViewer) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(mouseExited:)
                                       withMethod:@selector(SPmouseExited:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(mouseEntered:)
                                       withMethod:@selector(SPmouseEntered:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_updateHeaderMouseOver)
                                       withMethod:@selector(SP_updateHeaderMouseOver) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_updateAttachmentRollover)
                                       withMethod:@selector(SP_updateAttachmentRollover) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_updateRolloverTrackingArea:)
                                       withMethod:@selector(SP_updateRolloverTrackingArea:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_showLoadingProgress)
                                       withMethod:@selector(SP_showLoadingProgress) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(_updateWebDocumentView:)
                                       withMethod:@selector(SP_updateWebDocumentView:) error:&error];
        
        [messageViewController jrlp_swizzleMethod:@selector(cursorUpdate:)
                                       withMethod:@selector(SPcursorUpdate:) error:&error];

    }
    
    
    Class messageViewerLazyPopUpButton = NSClassFromString(@"MessageViewerLazyPopUpButton");
    if (messageViewerLazyPopUpButton) {
        [messageViewerLazyPopUpButton jrlp_addMethodsFromClass:NSClassFromString(@"SPMessageViewerLazyPopUpButton") error:&error];
        
        [messageViewerLazyPopUpButton jrlp_swizzleMethod:@selector(initializeMenu)
                                              withMethod:@selector(SPinitializeMenu) error:&error];
        
        [messageViewerLazyPopUpButton jrlp_swizzleMethod:@selector(setMenu:)
                                              withMethod:@selector(SPsetMenu:) error:&error];
        
    }
    
    Class singleMessageViewer = NSClassFromString(@"SingleMessageViewer");
    if (singleMessageViewer) {
        [singleMessageViewer jrlp_addMethodsFromClass:NSClassFromString(@"SPsingleMessageViewer") error:&error];
        
        [singleMessageViewer jrlp_swizzleMethod:@selector(selectMessages:)
                                     withMethod:@selector(SPselectMessages:) error:&error];
        
        
    }
    
}

@end
