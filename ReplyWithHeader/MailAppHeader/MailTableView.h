#import <AppKit/NSTableView.h>

#import "NSScrollViewDelegate-Protocol.h"

@class NSString;

@interface MailTableView : NSTableView <NSScrollViewDelegate>
{
    BOOL _keyEventHandled;	// 448 = 0x1c0
    BOOL _delegateProvidesDragImage;	// 449 = 0x1c1
    BOOL _delegateDoesCommandBySelector;	// 450 = 0x1c2
    BOOL _delegateDragWillEndOperation;	// 451 = 0x1c3
    BOOL _delegateDraggedImageMovedTo;	// 452 = 0x1c4
    BOOL _delegateProvidesBackgroundShadedRegions;	// 453 = 0x1c5
    BOOL _delegateProvidesHighlightStyle;	// 454 = 0x1c6
    BOOL _delegateRespondsToWillDrawRowsInRange;	// 455 = 0x1c7
    BOOL _delegateApprovesScrolling;	// 456 = 0x1c8
    BOOL _delegateRespondsToGotEvent;	// 457 = 0x1c9
    BOOL _delegateRespondsToMouseDown;	// 458 = 0x1ca
    BOOL _delegateRespondsToWillMoveToWindow;	// 459 = 0x1cb
    BOOL _delegateRespondsToDidMoveToWindow;	// 460 = 0x1cc
    BOOL _delegateRespondsToWillStartLiveResize;	// 461 = 0x1cd
    BOOL _delegateRespondsToDidEndLiveResize;	// 462 = 0x1ce
    BOOL _delegateRespondsToDidBecomeFirstResponder;	// 463 = 0x1cf
    BOOL _delegateRespondsToDidResignFirstResponder;	// 464 = 0x1d0
    BOOL _delegateRespondsToTopLineColor;	// 465 = 0x1d1
    BOOL _delegateApprovesRemoveColumn;	// 466 = 0x1d2
    BOOL _delegateApprovesAddColumn;	// 467 = 0x1d3
    BOOL _delegateRespondsToUserDidScrollInTableView;	// 468 = 0x1d4
    BOOL _didLazyLoadMenu;	// 469 = 0x1d5
    long long _virtualClickedRow;	// 472 = 0x1d8
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) long long virtualClickedRow; // @synthesize virtualClickedRow=_virtualClickedRow;
@property(nonatomic) BOOL delegateRespondsToUserDidScrollInTableView; // @synthesize delegateRespondsToUserDidScrollInTableView=_delegateRespondsToUserDidScrollInTableView;
@property(nonatomic) BOOL delegateApprovesAddColumn; // @synthesize delegateApprovesAddColumn=_delegateApprovesAddColumn;
@property(nonatomic) BOOL delegateApprovesRemoveColumn; // @synthesize delegateApprovesRemoveColumn=_delegateApprovesRemoveColumn;
@property(nonatomic) BOOL delegateRespondsToTopLineColor; // @synthesize delegateRespondsToTopLineColor=_delegateRespondsToTopLineColor;
@property(nonatomic) BOOL delegateRespondsToDidResignFirstResponder; // @synthesize delegateRespondsToDidResignFirstResponder=_delegateRespondsToDidResignFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidBecomeFirstResponder; // @synthesize delegateRespondsToDidBecomeFirstResponder=_delegateRespondsToDidBecomeFirstResponder;
@property(nonatomic) BOOL delegateRespondsToDidEndLiveResize; // @synthesize delegateRespondsToDidEndLiveResize=_delegateRespondsToDidEndLiveResize;
@property(nonatomic) BOOL delegateRespondsToWillStartLiveResize; // @synthesize delegateRespondsToWillStartLiveResize=_delegateRespondsToWillStartLiveResize;
@property(nonatomic) BOOL delegateRespondsToDidMoveToWindow; // @synthesize delegateRespondsToDidMoveToWindow=_delegateRespondsToDidMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToWillMoveToWindow; // @synthesize delegateRespondsToWillMoveToWindow=_delegateRespondsToWillMoveToWindow;
@property(nonatomic) BOOL delegateRespondsToMouseDown; // @synthesize delegateRespondsToMouseDown=_delegateRespondsToMouseDown;
@property(nonatomic) BOOL delegateRespondsToGotEvent; // @synthesize delegateRespondsToGotEvent=_delegateRespondsToGotEvent;
@property(nonatomic) BOOL delegateApprovesScrolling; // @synthesize delegateApprovesScrolling=_delegateApprovesScrolling;
@property(nonatomic) BOOL delegateRespondsToWillDrawRowsInRange; // @synthesize delegateRespondsToWillDrawRowsInRange=_delegateRespondsToWillDrawRowsInRange;
@property(nonatomic) BOOL delegateProvidesHighlightStyle; // @synthesize delegateProvidesHighlightStyle=_delegateProvidesHighlightStyle;
@property(nonatomic) BOOL delegateProvidesBackgroundShadedRegions; // @synthesize delegateProvidesBackgroundShadedRegions=_delegateProvidesBackgroundShadedRegions;
@property(nonatomic) BOOL delegateDraggedImageMovedTo; // @synthesize delegateDraggedImageMovedTo=_delegateDraggedImageMovedTo;
@property(nonatomic) BOOL delegateDragWillEndOperation; // @synthesize delegateDragWillEndOperation=_delegateDragWillEndOperation;
@property(nonatomic) BOOL delegateDoesCommandBySelector; // @synthesize delegateDoesCommandBySelector=_delegateDoesCommandBySelector;
@property(nonatomic) BOOL delegateProvidesDragImage; // @synthesize delegateProvidesDragImage=_delegateProvidesDragImage;
@property BOOL keyEventHandled; // @synthesize keyEventHandled=_keyEventHandled;
- (void)reloadData;
- (BOOL)_isRichTableView;
- (void)didScrollInScrollView:(id)arg1;
- (void)scrollRowToVisible:(long long)arg1 position:(int)arg2;
- (void)showSelectionAndCenter:(BOOL)arg1;
- (BOOL)isSelectionVisible;
- (long long)lastRowInSelection;
- (long long)firstRowInSelection;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_postEventNotification:(id)arg1 fromCell:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)_logSpotlightInfoForClickedMessage;
- (void)mouseDown:(id)arg1;
- (long long)clickedRow;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)_colorizeRow:(long long)arg1 inRect:(struct CGRect)arg2 clipRect:(struct CGRect)arg3;
- (void)_highlightRect:(struct CGRect)arg1 withColor:(id)arg2 usingStyle:(int)arg3;
- (BOOL)shouldUseSecondaryHighlightColor;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)addTableColumn:(id)arg1;
- (void)removeTableColumn:(id)arg1;
- (void)moveColumn:(long long)arg1 toColumn:(long long)arg2;
- (void)setTableColumn:(id)arg1 toVisible:(BOOL)arg2 atPosition:(long long)arg3;
- (void)scrollRowToVisible:(long long)arg1;
- (void)showTableColumnsFromArray:(id)arg1 allColumns:(id)arg2;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
- (id)menu;
- (void)setDelegate:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_mailTableViewCommonInit;
- (id)menuForEvent:(id)arg1;
- (id)_extendedDelegate;
- (BOOL)isOpaque;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

