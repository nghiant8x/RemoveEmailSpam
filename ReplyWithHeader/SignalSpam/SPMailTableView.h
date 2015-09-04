//
//  SPMailTableView.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

#import <AppKit/NSTableView.h>
#import "NSScrollViewDelegate-Protocol.h"

@class NSString;
@interface SPMailTableView : NSTableView<NSScrollViewDelegate>

- (void)SPReloadData;
- (BOOL)SP_isRichTableView;
- (void)SPDidScrollInScrollView:(id)arg1;
- (void)SPScrollRowToVisible:(long long)arg1 position:(int)arg2;
- (void)SPShowSelectionAndCenter:(BOOL)arg1;
- (BOOL)SPIsSelectionVisible;
- (long long)SPLastRowInSelection;
- (long long)SPFirstRowInSelection;
- (BOOL)SPResignFirstResponder;
- (BOOL)SPBecomeFirstResponder;
- (void)SPViewDidMoveToSuperview;
- (void)SPViewWillMoveToSuperview:(id)arg1;
- (void)SPViewDidMoveToWindow;
- (void)SPViewWillMoveToWindow:(id)arg1;
- (void)SP_postEventNotification:(id)arg1 fromCell:(id)arg2;
- (void)SPMouseUp:(id)arg1;
- (void)SP_logSpotlightInfoForClickedMessage;
- (void)SPMouseDown:(id)arg1;
- (long long)SPClickedRow;
- (void)SPDrawGridInClipRect:(struct CGRect)arg1;
- (void)SPDrawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)SPDrawRect:(struct CGRect)arg1;
- (void)SPDrawBackgroundInClipRect:(struct CGRect)arg1;
- (void)SP_colorizeRow:(long long)arg1 inRect:(struct CGRect)arg2 clipRect:(struct CGRect)arg3;
- (void)SP_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(int)arg3;
- (BOOL)SPShouldUseSecondaryHighlightColor;
- (void)SPDraggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)SPDraggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)SPDragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)SPAddTableColumn:(id)arg1;
- (void)SPRemoveTableColumn:(id)arg1;
- (void)SPMoveColumn:(long long)arg1 toColumn:(long long)arg2;
- (void)SPSetTableColumn:(id)arg1 toVisible:(BOOL)arg2 atPosition:(long long)arg3;
- (void)SPScrollRowToVisible:(long long)arg1;
- (void)SPShowTableColumnsFromArray:(id)arg1 allColumns:(id)arg2;
- (void)SPDrawBackgroundOverhangInRect:(struct CGRect)arg1;
- (id)SPMenu;
- (void)SPSetDelegate:(id)arg1;
- (void)SPKeyDown:(id)arg1;
- (void)SPInsertText:(id)arg1;
- (void)SPDoCommandBySelector:(SEL)arg1;
- (BOOL)SPRespondsToSelector:(SEL)arg1;
- (void)SPViewDidEndLiveResize;
- (void)SPViewWillStartLiveResize;
- (id)SPInitWithCoder:(id)arg1;
- (id)SPInitWithFrame:(struct CGRect)arg1;
- (void)SP_mailTableViewCommonInit;
- (id)SPMenuForEvent:(id)arg1;
- (id)SP_extendedDelegate;
- (BOOL)SPIsOpaque;

@end
