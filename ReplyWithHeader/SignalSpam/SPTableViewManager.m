//
//  SPTableViewManager.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 9/1/15.
//
//

#import "SPTableViewManager.h"

@implementation SPTableViewManager

+ (id)SP_getThreadBackgroundColorForThread:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SP_getThreadBackgroundColorForThread:arg1];
    return result;
}

+ (id)SP_getDarkerThreadBackgroundColorForThread:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SP_getDarkerThreadBackgroundColorForThread:arg1];
    return result;
}
+ (id)SPspecialImageForMessageCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2{
    MLogString(@"");
    id result = [self SPspecialImageForMessageCount:arg1 offset:arg2];
    return result;
}
+ (BOOL)SPisColumnValid:(long long)arg1{
    MLogString(@"");
    BOOL result = [self SPisColumnValid:arg1];
    return result;
}
+ (void)SPinitialize{
    MLogString(@"");
    [self SPinitialize];
}

- (void)SPhideDeletions{
    MLogString(@"");
    [self SPhideDeletions];
}
- (void)SPshowDeletions{
    MLogString(@"");
    [self SPshowDeletions];
}
- (id)SPmessageToSelectIfEntireSelectionRemoved:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SPmessageToSelectIfEntireSelectionRemoved:arg1];
    return result;
}
- (void)SP_recordSelectionHistoryForRow:(long long)arg1{
    MLogString(@"");
    [self SP_recordSelectionHistoryForRow:arg1];

}
- (void)SP_resetNextMessageTracking{
    MLogString(@"");
    [self SP_resetNextMessageTracking];

}
- (BOOL)SP_goUpInsteadOfDown{
    MLogString(@"");
    BOOL result = [self SP_goUpInsteadOfDown];
    return result;
}
- (long long)SP_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3{
    MLogString(@"");
    long result = [self SP_indexOfFirstNonDeletedNonSelectedMessage:arg1 withinRowRange:arg2 goUp:arg3];
    return result;

}
- (id)SPmailTableView:(id)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4{
    MLogString(@"%@",arg1);
    id result = [self SPmailTableView:arg1 rangesForBackgroundShadingInRange:arg2 shadingColors:arg3 leftColumnColors:arg4];
    return result;

}
- (BOOL)SPshouldTrackMouse:(id)arg1{
    MLogString(@"%@",arg1);
    BOOL result = [self SPshouldTrackMouse:arg1];
    return result;
    
}
- (void)SPmailTableView:(id)arg1 gotEvent:(id)arg2{
    MLogString(@"%@",arg1);
    [self SPmailTableView:arg1 gotEvent:arg2];

}
- (void)SP_setButtonCellNeedsDisplay{
    MLogString(@"");
    [self SP_setButtonCellNeedsDisplay];
}
- (void)SP_callWillDisplayCellForClickedCell{
    MLogString(@"");
    [self SP_callWillDisplayCellForClickedCell];
    
}
- (struct CGPoint)SP_mouseLocationInWindow{
    MLogString(@"");
    CGPoint result = [self SP_mouseLocationInWindow];
    return result;

}
- (struct CGRect)SPframeOfClickedCell{
    MLogString(@"");
    CGRect result = [self SPframeOfClickedCell];
    return result;
}
- (void)SPmailTableView:(id)arg1 willDrawRowsInRange:(struct _NSRange)arg2{
    MLogString(@"");
    [self SPmailTableView:arg1 willDrawRowsInRange:arg2];
}
- (id)SPmailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4{
    MLogString(@"");
    id result = [self SPmailTableView:arg1 dragImageForRowsWithIndexes:arg2 event:arg3 dragImageOffset:arg4];
    return result;

}
- (BOOL)SPtableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3{
    MLogString(@"%@",arg1);
    BOOL result = [self SPtableView:arg1 writeRowsWithIndexes:arg2 toPasteboard:arg3];
    return result;

}
- (void)SPmailTableView:(id)arg1 didMouseDown:(id)arg2{
    MLogString(@"");
    [self SPmailTableView:arg1 didMouseDown:arg2];
}
- (void)SPmailTableView:(id)arg1 willMouseDown:(id)arg2{
    MLogString(@"");
    [self SPmailTableView:arg1 willMouseDown:arg2];
}
- (void)SPmailTableViewDragWillEnd:(id)arg1 operation:(unsigned long long)arg2{
    MLogString(@"");
    [self SPmailTableViewDragWillEnd:arg1 operation:arg2];
}
- (void)SPtransfer:(id)arg1 didCompleteWithError:(id)arg2{
    MLogString(@"");
    [self SPtransfer:arg1 didCompleteWithError:arg2];
}
- (id)SPmessagesToTransferIsMove:(BOOL)arg1{
    MLogString(@"");
    id result = [self SPmessagesToTransferIsMove:arg1];
    return result;
 
}
- (id)SP_filterAndExpandMessagesForTransfer:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SP_filterAndExpandMessagesForTransfer:arg1];
    return result;

}
- (void)SPmailTableViewDraggingSession:(id)arg1 movedTo:(struct CGPoint)arg2{
    MLogString(@"");
    [self SPmailTableViewDraggingSession:arg1 movedTo:arg2];
}
- (void)SParchiveMessages:(id)arg1 allowUndo:(BOOL)arg2{
    MLogString(@"");
    [self SParchiveMessages:arg1 allowUndo:arg2];

}
- (BOOL)SPshouldDeleteMessagesGivenCurrentState:(id)arg1{
    MLogString(@"%@",arg1);
    BOOL result = [self SPshouldDeleteMessagesGivenCurrentState:arg1];
    return result;
}
- (void)SPundeleteMessagesAllowingUndo:(BOOL)arg1{
    MLogString(@"");
    [self SPundeleteMessagesAllowingUndo:arg1];
}
- (void)SPdeleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3{
    MLogString(@"%@",arg1);
    [self SPdeleteMessages:arg1 allowMoveToTrash:arg2 allowUndo:arg3];
}
- (void)SP_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2{
    MLogString(@"");
    [self SP_redeleteMessages:arg1 messagesToSelect:arg2];
}
- (void)SPundeleteMessages:(id)arg1 allowUndo:(BOOL)arg2{
    MLogString(@"");
    [self SPundeleteMessages:arg1 allowUndo:arg2];
}
- (void)SP_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3{
    MLogString(@"");
    [self SP_undeleteMessages:arg1 allowUndo:arg2 unreadMessages:arg3];
}
- (void)SP_adjustScrollPositionForTransferredMessages:(id)arg1 isUndo:(BOOL)arg2{
    MLogString(@"");
    [self SP_adjustScrollPositionForTransferredMessages:arg1 isUndo:arg2];
}
- (id)SP_undoActionNameForMessageCount:(unsigned long long)arg1{
    MLogString(@"");
    id result = [self SP_undoActionNameForMessageCount:arg1];
    return result;
}
- (BOOL)SPmailTableView:(id)arg1 doCommandBySelector:(SEL)arg2{
    MLogString(@"");
    BOOL result = [self SPmailTableView:arg1 doCommandBySelector:arg2];
    return result;
}
- (id)SPmessageStore{
    MLogString(@"");
    id result = [self SPmessageStore];
    return result;
}
- (id)SPcurrentDisplayedMessage{
    MLogString(@"");
    id result = [self SPcurrentDisplayedMessage];
    return result;
}
- (id)SPparentThreadForChildMessage:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SPparentThreadForChildMessage:arg1];
    return result;
}
- (id)SPmessageThatUserIsProbablyReading{
    MLogString(@"");
    id result = [self SPmessageThatUserIsProbablyReading];
    return result;
}
- (void)SPselectMessages:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPselectMessages:arg1];
}
- (void)SP_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2{
    MLogString(@"");
    [self SP_selectMessages:arg1 scrollIfNeeded:arg2];

}
- (id)SPactionMessagesForAction:(SEL)arg1{
    MLogString(@"");
    id result = [self SPactionMessagesForAction:arg1];
    return result;
}
- (id)SPselection{
    MLogString(@"");
    id result = [self SPselection];
    return result;
}
- (id)SPselectionExpandingThreadsAndHiddenCopies:(BOOL)arg1{
    MLogString(@"");
    id result = [self SPselectionExpandingThreadsAndHiddenCopies:arg1];
    return result;

}
- (void)SPdeleteSelectionAllowingMoveToTrash:(BOOL)arg1{
    MLogString(@"");
    [self SPdeleteSelectionAllowingMoveToTrash:arg1];
}
- (void)SPdeleteKeyPressed{
    MLogString(@"");
    [self SPdeleteKeyPressed];
}
- (unsigned long long)SP_photoSizeForNumberOfSnippetLines:(unsigned long long)arg1{
    MLogString(@"");
    long result = [self SP_photoSizeForNumberOfSnippetLines:arg1];
    return result;
}
- (void)SP_snippetsUpdated:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_snippetsUpdated:arg1];
}
- (id)SP_localizeSnippet:(id)arg1{
    //Tommy: Mail list
    MLogString(@"%@",arg1);
    id result = [self SP_localizeSnippet:arg1];
    return result;
}
- (void)SP_updateRowsWithNewSnippets:(id)arg1{
    //Tommy: Mail list
    MLogString(@"%@",arg1);
    [self SP_updateRowsWithNewSnippets:arg1];
}
- (void)SP_updateSnippetsForMessage:(id)arg1 ignoreExpected:(BOOL)arg2{
    MLogString(@"");
    [self SP_updateSnippetsForMessage:arg1 ignoreExpected:arg2];
}
- (void)SPclearSnippetCacheForMessages:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPclearSnippetCacheForMessages:arg1];
}
- (void)SPmallPrefetchedSnippets:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmallPrefetchedSnippets:arg1];
}
- (void)SPresetSnippetCache{
    MLogString(@"");
    [self SPresetSnippetCache];
}
- (id)SP_messagesNeedingSnippetsAroundRow:(unsigned long long)arg1{
    MLogString(@"");
    id result = [self SP_messagesNeedingSnippetsAroundRow:arg1];
    return result;
}
- (void)SP_performSnippetFetching{
    MLogString(@"");
    [self SP_performSnippetFetching];
}
- (void)SP_cacheSnippetsAroundRow:(unsigned long long)arg1{
    MLogString(@"");
    [self SP_cacheSnippetsAroundRow:arg1];
}
- (id)SP_snippetFetchQueue{
    MLogString(@"");
    id result = [self SP_snippetFetchQueue];
    return result;
}
- (id)SP_snippetForMessage:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SP_snippetForMessage:arg1];
    return result;
}
- (void)SP_doubleClickedMessage:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_doubleClickedMessage:arg1];

}
- (id)SPmailTableViewTopLineColor:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SPmailTableViewTopLineColor:arg1];
    return result;
}
- (int)SPmailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4{
    MLogString(@"");
    int result = [self SPmailTableView:arg1 highlightStyleForRow:arg2 inRect:arg3 color:arg4];
    return result;

}
- (void)SPtableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4{
    MLogString(@"%@",arg1);
    [self SPtableView:arg1 willDisplayCell:arg2 forTableColumn:arg3 row:arg4];

}
- (id)SPtableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3{
    MLogString(@"%@",arg1);
    id result = [self SPtableView:arg1 dataCellForTableColumn:arg2 row:arg3];
    return result;
}
- (void)SP_resetObjectValueForCellView:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_resetObjectValueForCellView:arg1];
}
- (BOOL)SP_shouldShowMailboxNames{
    MLogString(@"");
    BOOL result = [self SP_shouldShowMailboxNames];
    return result;

}
- (void)SP_prepareCell:(id)arg1 withMessage:(id)arg2{
    MLogString(@"");
    [self SP_prepareCell:arg1 withMessage:arg2];

}
- (id)SP_prepareProxyForMessage:(id)arg1 selected:(BOOL)arg2 createIfNeeded:(BOOL)arg3{
    MLogString(@"");
    id result = [self SP_prepareProxyForMessage:arg1 selected:arg2 createIfNeeded:arg3];
    return result;
}
- (id)SPtableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3{
    MLogString(@"");
    id result = [self SPtableView:arg1 viewForTableColumn:arg2 row:arg3];
    return result;

}
- (id)SPtableView:(id)arg1 rowViewForRow:(long long)arg2{
    MLogString(@"");
    id result = [self SPtableView:arg1 rowViewForRow:arg2];
    return result;

}
- (void)SPtableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3{
    MLogString(@"");
    [self SPtableView:arg1 didRemoveRowView:arg2 forRow:arg3];

}
- (void)SPtableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3{
    MLogString(@"%@",arg1);
    [self SPtableView:arg1 didAddRowView:arg2 forRow:arg3];

}
- (void)SP_setupRowView:(id)arg1 atIndex:(long long)arg2{
    MLogString(@"");
    [self SP_setupRowView:arg1 atIndex:arg2];
}
- (void)SP_setupRowViewAtRow:(long long)arg1{
    MLogString(@"");
    [self SP_setupRowViewAtRow:arg1];

}
- (void)SPtableViewColumnDidResize:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtableViewColumnDidResize:arg1];

}
- (void)SPtableViewColumnDidMove:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtableViewColumnDidMove:arg1];

}
- (void)SPmailTableViewDidEndLiveResize:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmailTableViewDidEndLiveResize:arg1];
}
- (void)SPmailTableViewWillStartLiveResize:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmailTableViewWillStartLiveResize:arg1];

}
- (void)SPtableViewFrameChangedDuringLiveResize:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtableViewFrameChangedDuringLiveResize:arg1];

}
- (void)SPtableView:(id)arg1 didDragTableColumn:(id)arg2{
    MLogString(@"");
    [self SPtableView:arg1 didDragTableColumn:arg2];
}
- (void)SPupdateColorHighlightEdges{
    MLogString(@"");
    [self SPupdateColorHighlightEdges];

}
- (id)SP_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2{
    MLogString(@"");
    id result = [self SP_proxyForMessage:arg1 createIfNeeded:arg2];
    return result;
}
- (id)SPtableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3{
    MLogString(@"");
    id result = [self SPtableView:arg1 objectValueForTableColumn:arg2 row:arg3];
    return result;

}
- (BOOL)SPtableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3{
    MLogString(@"");
    BOOL result = [self SPtableView:arg1 shouldTypeSelectForEvent:arg2 withCurrentSearchString:arg3];
    return result;
}
- (id)SPtableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3{
    MLogString(@"");
    id result = [self SPtableView:arg1 typeSelectStringForTableColumn:arg2 row:arg3];
    return result;
}
- (id)SP_truncatedAttributedStringForString:(id)arg1 message:(id)arg2 row:(long long)arg3 shouldIndent:(BOOL)arg4{
    MLogString(@"");
    id result = [self SP_truncatedAttributedStringForString:arg1 message:arg2 row:arg3 shouldIndent:arg4];
    return result;
}
- (id)SP_colorForMessage:(id)arg1 inRow:(long long)arg2 withCell:(id)arg3{
    MLogString(@"");
    id result = [self SP_colorForMessage:arg1 inRow:arg2 withCell:arg3];
    return result;
}
- (id)SP_messageSelectionColor{
    MLogString(@"");
    id result = [self SP_messageSelectionColor];
    return result;
}
- (id)SP_attributesForTruncatedParagraphStyle{
    MLogString(@"");
    id result = [self SP_attributesForTruncatedParagraphStyle];
    return result;
}
- (long long)SPnumberOfRowsInTableView:(id)arg1{
    MLogString(@"%@",arg1);
    long result = [self SPnumberOfRowsInTableView:arg1];
    return result;

}
- (id)SPselectionStateLog{
    MLogString(@"");
    id result = [self SPselectionStateLog];
    return result;

}
- (void)SP_datesNeedRedisplay:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_datesNeedRedisplay:arg1];

}
- (void)SPmailTableViewDidResignFirstResponder:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmailTableViewDidResignFirstResponder:arg1];

}
- (void)SPmailTableViewDidBecomeFirstResponder:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmailTableViewDidBecomeFirstResponder:arg1];

}
- (void)SP_redisplayRowsAboveSelected{
    MLogString(@"");
    [self SP_redisplayRowsAboveSelected];

}
- (void)SPtableViewSelectionDidChange:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtableViewSelectionDidChange:arg1];

}
- (id)SP_normalizedSelection:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SP_normalizedSelection:arg1];
    return result;

}
- (id)SPtableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2{
    MLogString(@"");
    id result = [self SPtableView:arg1 selectionIndexesForProposedSelection:arg2];
    return result;

}
- (void)SP_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3{
    MLogString(@"");
    [self SP_selectOrDeselectMembersOfThread:arg1 atIndex:arg2 select:arg3];

}
- (void)SPupdateViewingPaneToSelection{
    MLogString(@"");
    [self SPupdateViewingPaneToSelection];

}
- (id)SPselectedThread{
    MLogString(@"");
    id result = [self SPselectedThread];
    return result;
}
- (id)SP_messageSelectionWithDataForPrinting:(BOOL)arg1{
    MLogString(@"");
    id result = [self SP_messageSelectionWithDataForPrinting:arg1];
    return result;
}
- (id)SPmessageSelectionForPrinting{
    MLogString(@"");
    id result = [self SPmessageSelectionForPrinting];
    return result;

}
- (id)SPmessageSelection{
    MLogString(@"");
    id result = [self SPmessageSelection];
    return result;
}
- (void)SPremoveAllMouseTrackers{
    MLogString(@"");
    [self SPremoveAllMouseTrackers];

}
- (void)SPaddMouseTrackersObject:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPaddMouseTrackersObject:arg1];

}
- (id)SP_openThreadIdentifiers{
    MLogString(@"");
    id result = [self SP_openThreadIdentifiers];
    return result;

}
- (void)SP_rawSelectionIdentifiersForThreads:(id *)arg1 identifiersForMessages:(id *)arg2{
    MLogString(@"");
    [self SP_rawSelectionIdentifiersForThreads:arg1 identifiersForMessages:arg2];

}
- (id)SP_mailboxViewingState{
    MLogString(@"");
    id result = [self SP_mailboxViewingState];
    return result;

}
- (void)SPremoveAllRawSelection{
    MLogString(@"");
    [self SPremoveAllRawSelection];

}
- (void)SPaddRawSelectionObject:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPaddRawSelectionObject:arg1];

}
- (void)SPreplaceObjectInRawSelectionAtIndex:(unsigned long long)arg1 withObject:(id)arg2{
    MLogString(@"");
    [self SPreplaceObjectInRawSelectionAtIndex:arg1 withObject:arg2];

}
- (void)SPremoveObjectFromRawSelectionAtIndex:(unsigned long long)arg1{
    MLogString(@"");
    [self SPremoveObjectFromRawSelectionAtIndex:arg1];

}
- (id)SPobjectInRawSelectionAtIndex:(unsigned long long)arg1{
    MLogString(@"");
    id result = [self SPobjectInRawSelectionAtIndex:arg1];
    return result;
}
- (unsigned long long)SPcountOfRawSelection{
    MLogString(@"");
    long result = [self SPcountOfRawSelection];
    return result;
}
- (void)SP_updateSelectedThreadList{
    MLogString(@"");
    [self SP_updateSelectedThreadList];

}
- (void)SP_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2{
    MLogString(@"");
    [self SP_reloadDisplayOnlyForMessagesInSet:arg1 highlightOnly:arg2];

}
- (BOOL)SP_isMessageInSelectedThread:(id)arg1{
    MLogString(@"%@",arg1);
    BOOL result = [self SP_isMessageInSelectedThread:arg1];
    return result;

}
- (long long)SPmailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2{
    MLogString(@"");
    BOOL result = [self SPmailTableView:arg1 shouldScrollRowToVisible:arg2];
    return result;

}
- (void)SPscrollRowToVisible:(long long)arg1 position:(int)arg2{
    MLogString(@"");
    [self SPscrollRowToVisible:arg1 position:arg2];
}
- (BOOL)SPisSelectionVisible{
    MLogString(@"");
    BOOL result = [self SPisSelectionVisible];
    return result;
}
- (void)SPshowSelectionAndCenter:(BOOL)arg1{
    MLogString(@"");
    [self SPshowSelectionAndCenter:arg1];
}
- (void)SPselectPreviousReplyToParent{
    MLogString(@"");
    [self SPselectPreviousReplyToParent];

}
- (void)SPselectNextReplyToParent{
    MLogString(@"");
    [self SPselectNextReplyToParent];

}
- (void)SPselectPeer:(BOOL)arg1{
    MLogString(@"");
    [self SPselectPeer:arg1];

}
- (void)SPselectFirstReplyToMessage{
    MLogString(@"");
    [self SPselectFirstReplyToMessage];

}
- (void)SPselectParentOfMessage{
    MLogString(@"");
    [self SPselectParentOfMessage];

}
- (void)SPselectPreviousMessage:(int)arg1{
    MLogString(@"");
    [self SPselectPreviousMessage:arg1];

}
- (void)SPselectNextMessage:(int)arg1{
    MLogString(@"");
    [self SPselectNextMessage:arg1];

}
- (BOOL)SPnextMessageIsBelow{
    MLogString(@"");
    BOOL result = [self SPnextMessageIsBelow];
    return result;
}
- (void)SPselectOldestUnreadOrNewestMessageInThread{
    MLogString(@"");
    [self SPselectOldestUnreadOrNewestMessageInThread];

}
- (BOOL)SPopenSelectedThread{
    MLogString(@"");
    BOOL result = [self SPopenSelectedThread];
    return result;

}
- (void)SPstepOutOfSelectedThread{
    MLogString(@"");
    [self SPstepOutOfSelectedThread];

}
- (void)SPstepIntoSelectedThread{
    MLogString(@"");
    [self SPstepIntoSelectedThread];

}
- (void)SPselectNextMessageMovingUpward:(int)arg1{
    MLogString(@"");
    [self SPselectNextMessageMovingUpward:arg1];

}
- (void)SPselectNextMessageMovingDownward:(int)arg1{
    MLogString(@"");
    [self SPselectNextMessageMovingDownward:arg1];

}
- (unsigned long long)SP_modifierFlagsForKeyboardNavigation{
    MLogString(@"");
    long result = [self SP_modifierFlagsForKeyboardNavigation];
    return result;

}
- (BOOL)SPselectionIsExactlyOneOpenThread{
    MLogString(@"");
    BOOL result = [self SPselectionIsExactlyOneOpenThread];
    return result;

}
- (BOOL)SPcanSelectNextReplyToParent{
    MLogString(@"");
    BOOL result = [self SPcanSelectNextReplyToParent];
    return result;

}
- (BOOL)SPcanSelectFirstReplyToMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectFirstReplyToMessage];
    return result;
}
- (BOOL)SPcanSelectParentOfMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectParentOfMessage];
    return result;
}
- (BOOL)SPcanSelectNextThreadedMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectNextThreadedMessage];
    return result;
}
- (BOOL)SPcanSelectPreviousThreadedMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectPreviousThreadedMessage];
    return result;
}
- (long long)SP_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 downward:(BOOL)arg3{
    MLogString(@"");
    BOOL result = [self SP_indexOfMessageNearest:arg1 numberOfRows:arg2 downward:arg3];
    return result;
}
- (void)SPtoggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2{
    MLogString(@"");
    [self SPtoggleThread:arg1 ignoreModifierKeys:arg2];
}
- (void)SPtoggleThread:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtoggleThread:arg1];
}
- (void)SPunhideMessages:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPunhideMessages:arg1];
}
- (BOOL)SPhideMessages:(id)arg1 selectingNextMessage:(BOOL)arg2{
    MLogString(@"");
    BOOL result = [self SPhideMessages:arg1 selectingNextMessage:arg2];
    return result;
}
- (void)SPcloseAllThreads{
    MLogString(@"");
    [self SPcloseAllThreads];
}
- (void)SPopenAllThreads{
    MLogString(@"");
    [self SPopenAllThreads];
}
- (void)SPcloseThread:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPcloseThread:arg1];
}
- (void)SPopenThread:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPopenThread:arg1];

}
- (void)SPinvalidateSelectionCache:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPinvalidateSelectionCache:arg1];
}
- (void)SPtoggleThreadedMode{
    MLogString(@"");
    [self SPtoggleThreadedMode];
}
- (void)SP_updateTableViewRowHeight{
    MLogString(@"");
    [self SP_updateTableViewRowHeight];

}
- (double)SPtableView:(id)arg1 heightOfRow:(long long)arg2{
    MLogString(@"");
    double result = [self SPtableView:arg1 heightOfRow:arg2];
    return result;
}
- (double)SPtableViewRowHeightForRichMessageList:(BOOL)arg1{
    MLogString(@"");
    double result = [self SPtableViewRowHeightForRichMessageList:arg1];
    return result;
}
- (void)SPmakeMessageListFirstResponder{
    MLogString(@"");
    [self SPmakeMessageListFirstResponder];
}
- (void)SPselectAllMessagesAndMakeFirstResponder{
    MLogString(@"");
    [self SPselectAllMessagesAndMakeFirstResponder];
}
- (long long)SPtableViewNumberOfColumnsToPinToLefthandSide:(id)arg1{
    MLogString(@"%@",arg1);
    long result = [self SPtableViewNumberOfColumnsToPinToLefthandSide:arg1];
    return result;
}
- (BOOL)SPmailTableView:(id)arg1 shouldAddTableColumn:(id)arg2{
    MLogString(@"");
    BOOL result = [self SPmailTableView:arg1 shouldAddTableColumn:arg2];
    return result;

}
- (BOOL)SPmailTableView:(id)arg1 shouldRemoveTableColumn:(id)arg2{
    MLogString(@"");
    BOOL result = [self SPmailTableView:arg1 shouldRemoveTableColumn:arg2];
    return result;

}
- (BOOL)SPtableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3{
    MLogString(@"");
    BOOL result = [self SPtableView:arg1 shouldReorderColumn:arg2 toColumn:arg3];
    return result;

}
- (void)SP_setColumn:(long long)arg1 toVisible:(BOOL)arg2{
    MLogString(@"");
    [self SP_setColumn:arg1 toVisible:arg2];

}
- (void)SPsetColumn:(long long)arg1 toVisible:(BOOL)arg2{
    MLogString(@"");
    [self SPsetColumn:arg1 toVisible:arg2];

}
- (void)SP_updateAttributesForMailboxes{
    MLogString(@"");
    [self SP_updateAttributesForMailboxes];

}
- (BOOL)SPisColumnVisible:(long long)arg1{
    MLogString(@"");
    BOOL result = [self SPisColumnVisible:arg1];
    return result;

}
- (BOOL)SP_isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1{
    MLogString(@"");
    BOOL result = [self SP_isAutomaticInsertionWhileSearchingOkayForColumn:arg1];
    return result;

}
- (BOOL)SP_isColumnVisibleInSettings:(long long)arg1{
    MLogString(@"");
    BOOL result = [self SP_isColumnVisibleInSettings:arg1];
    return result;

}
- (id)SP_unreadColumn{
    MLogString(@"");
    id result = [self SP_unreadColumn];
    return result;

}
- (id)SP_columnWithIdentifierTag:(long long)arg1{
    MLogString(@"");
    id result = [self SP_columnWithIdentifierTag:arg1];
    return result;

}
- (void)SPtableView:(id)arg1 didClickTableColumn:(id)arg2{
    MLogString(@"");
    [self SPtableView:arg1 didClickTableColumn:arg2];

}
- (void)SP_updateTableHeaderToMatchCurrentSort{
    MLogString(@"");
    [self SP_updateTableHeaderToMatchCurrentSort];

}
- (void)SP_threadColorPreferenceChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_threadColorPreferenceChanged:arg1];

}
- (void)SP_snippetLinePreferenceChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_snippetLinePreferenceChanged:arg1];

}
- (void)SP_toCcPreferenceChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_toCcPreferenceChanged:arg1];

}
- (void)SP_viewerLayoutPreferenceChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_viewerLayoutPreferenceChanged:arg1];

}
- (void)SP_viewerPreferencesChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_viewerPreferencesChanged:arg1];

}
- (BOOL)SPcanSelectPreviousMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectPreviousMessage];
    return result;
}
- (BOOL)SPcanSelectNextMessage{
    MLogString(@"");
    BOOL result = [self SPcanSelectNextMessage];
    return result;

}
- (void)SPreadStoreSpecificAttributesFromDictionary:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreadStoreSpecificAttributesFromDictionary:arg1];

}
- (void)SPreadStoreSpecificAttributesFromMailbox:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreadStoreSpecificAttributesFromMailbox:arg1];

}
- (void)SPwriteStoreSpecificAttributesToMailbox:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPwriteStoreSpecificAttributesToMailbox:arg1];

}
- (void)SPwriteAttributesToDictionary:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPwriteAttributesToDictionary:arg1];

}
- (void)SPreadAttributesFromDictionary:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreadAttributesFromDictionary:arg1];

}
- (void)SPsetupColumnManagerFromDictionary:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsetupColumnManagerFromDictionary:arg1];

}
- (void)SP_mallConversationsUpdated:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_mallConversationsUpdated:arg1];

}
- (void)SP_messageMarkedForOverwrite:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_messageMarkedForOverwrite:arg1];

}
- (void)SPprepareForWindowClose{
    MLogString(@"");
    [self SPprepareForWindowClose];

}

- (void)SP_configureTableViewLayoutWithTableColumnResizingMasks:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_configureTableViewLayoutWithTableColumnResizingMasks:arg1];

}
- (void)SP_setupColumnsForTableView{
    MLogString(@"");
    [self SP_setupColumnsForTableView];

}
- (void)SPshowFollowupsToMessageAtRow:(long long)arg1{
    MLogString(@"");
    [self SPshowFollowupsToMessageAtRow:arg1];

}
- (void)SPshowFollowupsToMessage:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPshowFollowupsToMessage:arg1];
}
- (void)SPrichUnreadButtonClicked:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPrichUnreadButtonClicked:arg1];

}
- (void)SP_createTintedImages{
    MLogString(@"");
    [self SP_createTintedImages];

}
- (void)SP_configureRichMessageListColumn{
    MLogString(@"");
    [self SP_configureRichMessageListColumn];

}
- (void)SP_configureColumnForRolloverCell:(id)arg1 alignment:(unsigned long long)arg2 action:(SEL)arg3{
    MLogString(@"");
    [self SP_configureColumnForRolloverCell:arg1 alignment:arg2 action:arg3];

}
- (void)SP_configureColumnForImageCell:(id)arg1 alignment:(unsigned long long)arg2{
    MLogString(@"");
    [self SP_configureColumnForImageCell:arg1 alignment:arg2];

}
- (void)SP_configureColumnForEndTruncation:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_configureColumnForEndTruncation:arg1];

}
- (void)SP_setupTableColumnWidths{
    MLogString(@"");
    [self SP_setupTableColumnWidths];

}
- (void)SP_setupColumnHeaderIcon:(id)arg1 inColumnWithIdentifier:(id)arg2 accessibilityLabel:(id)arg3 alignment:(unsigned long long)arg4{
    MLogString(@"");
    [self SP_setupColumnHeaderIcon:arg1 inColumnWithIdentifier:arg2 accessibilityLabel:arg3 alignment:arg4];

}
- (void)SPuserDidScrollInTableView:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPuserDidScrollInTableView:arg1];

}
- (void)SP_tableViewScrolled:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_tableViewScrolled:arg1];

}
- (BOOL)SPrespondsToSelector:(SEL)arg1{
    MLogString(@"");
    BOOL result = [self SPrespondsToSelector:arg1];
    return result;

}
- (id)SPtableViewGetDefaultMenu:(id)arg1{
    MLogString(@"%@",arg1);
    id result = [self SPtableViewGetDefaultMenu:arg1];
    return result;

}
- (void)SP_unregisterTableViewNibs{
    MLogString(@"");
    [self SP_unregisterTableViewNibs];

}
- (void)SP_registerTableViewNibs{
    MLogString(@"");
    [self SP_registerTableViewNibs];

}
- (void)SPawakeFromNib{
    MLogString(@"");
    [self SPawakeFromNib];
}
- (id)SPinit{
    MLogString(@"");
    id result = [self SPinit];
    return result;
}
- (long long)SP_columnForAppleScriptColumn:(unsigned int)arg1{
    MLogString(@"");
    long result = [self SP_columnForAppleScriptColumn:arg1];
    return result;

}
- (void)SPsetAppleScriptVisibleColumns:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsetAppleScriptVisibleColumns:arg1];

}
- (id)SPappleScriptVisibleColumns{
    MLogString(@"");
    id result = [self SPappleScriptVisibleColumns];
    return result;

}
- (void)SPsetAppleScriptSortColumn:(unsigned int)arg1{
    MLogString(@"");
    [self SPsetAppleScriptSortColumn:arg1];
}
- (unsigned int)SPappleScriptSortColumn{
    MLogString(@"");
    int result = [self SPappleScriptSortColumn];
    return result;

}
- (void)SPmailTableViewDidMoveToWindow:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmailTableViewDidMoveToWindow:arg1];

}
- (void)SPmailTableView:(id)arg1 willMoveToWindow:(id)arg2{
    MLogString(@"");
    [self SPmailTableView:arg1 willMoveToWindow:arg2];
}
- (double)SP_scrollRectToVisibleAdjustment:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2{
    MLogString(@"");
    double result = [self SP_scrollRectToVisibleAdjustment:arg1 visibleRect:arg2];
    return result;
}
- (BOOL)SP_isRowVisible:(long long)arg1{
    MLogString(@"");
    BOOL result = [self SP_isRowVisible:arg1];
    return result;
}
- (unsigned long long)SP_indexOfMemberToSelectWhenOpeningThread:(id)arg1{
    MLogString(@"%@",arg1);
    long result = [self SP_indexOfMemberToSelectWhenOpeningThread:arg1];
    return result;
}
- (void)SPupdateTrackingRects{
    MLogString(@"");
    [self SPupdateTrackingRects];

}
- (void)SPclearTrackingRects{
    MLogString(@"");
    [self SPclearTrackingRects];
}
- (id)SPfilteredMessages{
    MLogString(@"");
    id result = [self SPfilteredMessages];
    return result;
}
- (void)SPsetIsSortedAscending:(BOOL)arg1{
    MLogString(@"");
    [self SPsetIsSortedAscending:arg1];
}
- (BOOL)SPisSortedAscending{
    MLogString(@"");
    BOOL result = [self SPisSortedAscending];
    return result;

}
- (void)SPsetSortColumn:(long long)arg1 ascending:(BOOL)arg2{
    MLogString(@"");
    [self SPsetSortColumn:arg1 ascending:arg2];

}
- (id)SPsortByStringForColumn:(long long)arg1{
    MLogString(@"");
    id result = [self SPsortByStringForColumn:arg1];
    return result;

}
- (long long)SPsortColumn{
    MLogString(@"");
    long result = [self SPsortColumn];
    return result;

}
- (BOOL)SPisSortedChronologically{
    MLogString(@"");
    BOOL result = [self SPisSortedChronologically];
    return result;

}
- (BOOL)SPisSortedByDateReceived{
    MLogString(@"");
    BOOL result = [self SPisSortedByDateReceived];
    return result;

}
- (void)SPsearchForString:(id)arg1 in:(int)arg2 withOptions:(long long)arg3{
    MLogString(@"");
    [self SPsearchForString:arg1 in:arg2 withOptions:arg3];

}
- (void)SPsearchForSuggestions:(id)arg1 in:(int)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4{
    MLogString(@"");
    [self SPsearchForSuggestions:arg1 in:arg2 withOptions:arg3 fromSuggestionsSearchField:arg4];

}
- (void)SP_updateInitialViewingState{
    MLogString(@"");
    [self SP_updateInitialViewingState];

}
- (void)SP_searchForString:(id)arg1 orSuggestions:(id)arg2 in:(int)arg3 withOptions:(long long)arg4 fromSuggestionsSearchField:(id)arg5{
    MLogString(@"");
    [self SP_searchForString:arg1 orSuggestions:arg2 in:arg3 withOptions:arg4 fromSuggestionsSearchField:arg5];

}
- (void)SPclearSearch{
    MLogString(@"");
    [self SPclearSearch];

}
- (void)SPmessagesRemovedFromMall:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmessagesRemovedFromMall:arg1];

}
- (void)SP_updateSearchDelegate{
    MLogString(@"");
    [self SP_updateSearchDelegate];

}
- (void)SPmallFinishedLoading:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmallFinishedLoading:arg1];

}
- (void)SP_setupColumns{
    MLogString(@"");
    [self SP_setupColumns];

}
- (void)SPmallStructureChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmallStructureChanged:arg1];

}
- (void)SPmallStructureWillChange:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmallStructureWillChange:arg1];

}
- (void)SPmallSortChanged:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmallSortChanged:arg1];

}
- (void)SPreloadMailboxes:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreloadMailboxes:arg1];

}
- (void)SPsetMailboxes:(id)arg1 isSettingUpUI:(BOOL)arg2{
    MLogString(@"");
    [self SPsetMailboxes:arg1 isSettingUpUI:arg2];

}
- (void)SP_restoreScrollState:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_restoreScrollState:arg1];

}
- (id)SP_currentScrollState{
    MLogString(@"");
    id result = [self SP_currentScrollState];
    return result;

}
- (BOOL)SP_debugThreadAnimation{
    MLogString(@"");
    BOOL result = [self SP_debugThreadAnimation];
    return result;

}

@end
