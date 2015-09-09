//
//  SPMailTableView.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

#import "SPMailTableView.h"

@implementation SPMailTableView

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    // Drawing code here.
}


- (void)SPReloadData{
    MLogString(@"");
    [self SPReloadData];
}

- (BOOL)SP_isRichTableView{
    MLogString(@"");
    BOOL result = [self SP_isRichTableView];
    return result;
}

- (void)SPDidScrollInScrollView:(id)arg1{
    MLogString(@"");
    [self SPDidScrollInScrollView:arg1];
}

- (void)SPScrollRowToVisible:(long long)arg1 position:(int)arg2{
    MLogString(@"");
    [self SPScrollRowToVisible:arg1 position:arg2];
}

- (void)SPShowSelectionAndCenter:(BOOL)arg1{
    MLogString(@"");
    [self SPShowSelectionAndCenter:arg1];
}

- (BOOL)SPIsSelectionVisible{
    MLogString(@"");
    BOOL result = [self SPIsSelectionVisible];
    return result;
}

- (long long)SPLastRowInSelection{
    MLogString(@"");
    long result = [self SPLastRowInSelection];
    return result;
}

- (long long)SPFirstRowInSelection{
    MLogString(@"");
    long result = [self SPFirstRowInSelection];
    return result;
}

- (BOOL)SPResignFirstResponder{
    MLogString(@"");
    BOOL result = [self SPResignFirstResponder];
    return result;
}

- (BOOL)SPBecomeFirstResponder{
    MLogString(@"");
    BOOL result = [self SPBecomeFirstResponder];
    return result;
}

- (void)SPViewDidMoveToSuperview{
    MLogString(@"");
    [self SPViewDidMoveToSuperview];
}

- (void)SPViewWillMoveToSuperview:(id)arg1{
    MLogString(@"");
    [self SPViewWillMoveToSuperview:arg1];
}

- (void)SPViewDidMoveToWindow{
    MLogString(@"");
    [self SPViewDidMoveToWindow];
}

- (void)SPViewWillMoveToWindow:(id)arg1{
    MLogString(@"");
    [self SPViewWillMoveToWindow:arg1];
}

- (void)SP_postEventNotification:(id)arg1 fromCell:(id)arg2{
    MLogString(@"");
    [self SP_postEventNotification:arg1 fromCell:arg2];
}

- (void)SPMouseUp:(id)arg1{
    MLogString(@"");
    [self SPMouseUp:arg1];
}

- (void)SP_logSpotlightInfoForClickedMessage{
    MLogString(@"");
    [self SP_logSpotlightInfoForClickedMessage];
}

- (void)SPMouseDown:(id)arg1{
    MLogString(@"");
    [self SPMouseDown:arg1];
}

- (long long)SPClickedRow{
    MLogString(@"");
    long result = [self SPClickedRow];
    return result;
}

- (void)SPDrawGridInClipRect:(struct CGRect)arg1{
    MLogString(@"");
    [self SPDrawGridInClipRect:arg1];
}

- (void)SPDrawRow:(long long)arg1 clipRect:(struct CGRect)arg2{
    MLogString(@"");
    [self SPDrawRow:arg1 clipRect:arg2];
}

- (void)SPDrawRect:(struct CGRect)arg1{
    MLogString(@"");
    [self SPDrawRect:arg1];
}

- (void)SPDrawBackgroundInClipRect:(struct CGRect)arg1{
    MLogString(@"");
    [self SPDrawBackgroundInClipRect:arg1];
}

- (void)SP_colorizeRow:(long long)arg1 inRect:(struct CGRect)arg2 clipRect:(struct CGRect)arg3{
    MLogString(@"");
    [self SP_colorizeRow:arg1 inRect:arg2 clipRect:arg3];
}

- (void)SP_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(int)arg3{
    MLogString(@"");
    [self SP_highlightRect:arg1 withColor:arg2 usingStyle:arg3];
}

- (BOOL)SPShouldUseSecondaryHighlightColor{
    MLogString(@"");
    BOOL result = [self SPShouldUseSecondaryHighlightColor];
    return result;
}

- (void)SPDraggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2{
    MLogString(@"");
    [self SPDraggingSession:arg1 movedToPoint:arg2];
}

- (void)SPDraggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3{
    MLogString(@"");
    [self SPDraggingSession:arg1 endedAtPoint:arg2 operation:arg3];
}

- (id)SPDragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4{
    MLogString(@"");
    id result = [self SPDragImageForRowsWithIndexes:arg1 tableColumns:arg2 event:arg3 offset:arg4];
    return result;
}

- (void)SPAddTableColumn:(id)arg1{
    MLogString(@"");
    [self SPAddTableColumn:arg1];
}

- (void)SPRemoveTableColumn:(id)arg1{
    MLogString(@"");
    [self SPRemoveTableColumn:arg1];
}

- (void)SPMoveColumn:(long long)arg1 toColumn:(long long)arg2{
    MLogString(@"");
    [self SPMoveColumn:arg1 toColumn:arg2];
}

- (void)SPSetTableColumn:(id)arg1 toVisible:(BOOL)arg2 atPosition:(long long)arg3{
    MLogString(@"");
    [self SPSetTableColumn:arg1 toVisible:arg2 atPosition:arg3];
}

- (void)SPScrollRowToVisible:(long long)arg1{
    MLogString(@"");
    [self SPScrollRowToVisible:arg1];
}

- (void)SPShowTableColumnsFromArray:(id)arg1 allColumns:(id)arg2{
    MLogString(@"");
    [self SPShowTableColumnsFromArray:arg1 allColumns:arg2];
}

- (void)SPDrawBackgroundOverhangInRect:(struct CGRect)arg1{
    MLogString(@"");
    [self SPDrawBackgroundOverhangInRect:arg1];
}

- (id)SPMenu{
    MLogString(@"");
    id result = [self SPMenu];
    return result;
}

- (void)SPSetDelegate:(id)arg1{
    MLogString(@"");
    [self SPSetDelegate:arg1];
}

- (void)SPKeyDown:(id)arg1{
    MLogString(@"");
    [self SPKeyDown:arg1];
}

- (void)SPInsertText:(id)arg1{
    MLogString(@"");
    [self SPInsertText:arg1];
}

- (void)SPDoCommandBySelector:(SEL)arg1{
    MLogString(@"");
    [self SPDoCommandBySelector:arg1];
}

- (BOOL)SPRespondsToSelector:(SEL)arg1{
//    MLogString(@"");
    BOOL result = [self SPRespondsToSelector:arg1];
    return result;
}

- (void)SPViewDidEndLiveResize{
    MLogString(@"");
    [self SPViewDidEndLiveResize];
}


- (void)SPViewWillStartLiveResize{
    MLogString(@"");
    [self SPViewWillStartLiveResize];
}

- (id)SPInitWithCoder:(id)arg1{
    MLogString(@"");
    id result = [self SPInitWithCoder:arg1];
    return result;
}

- (id)SPInitWithFrame:(struct CGRect)arg1{
    MLogString(@"");
    id result = [self SPInitWithFrame:arg1];
    return result;
}

- (void)SP_mailTableViewCommonInit{
    MLogString(@"");
    [self SP_mailTableViewCommonInit];
}

- (id)SPMenuForEvent:(id)arg1{
    //Tommy Right Click
    MLogString(@"");
    id result = [self SPMenuForEvent:arg1];
    return result;
}

- (id)SP_extendedDelegate{
    MLogString(@"");
    id result = [self SP_extendedDelegate];
    return result;
}

- (BOOL)SPIsOpaque{
    MLogString(@"");
    BOOL result = [self SPIsOpaque];
    return result;
}



@end
