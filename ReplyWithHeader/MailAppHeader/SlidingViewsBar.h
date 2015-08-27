#import <AppKit/NSView.h>

#import "SlidingAnimationDelegate-Protocol.h"

@class ClippedItemsIndicator, NSMutableArray, NSString, SlidingAnimation;

@interface SlidingViewsBar : NSView <SlidingAnimationDelegate>
{
    unsigned long long _dropIndex;	// 152 = 0x98
    unsigned long long _dragSourceIndex;	// 160 = 0xa0
    ClippedItemsIndicator *_rightClipIndicator;	// 168 = 0xa8
    NSMutableArray *_buttons;	// 176 = 0xb0
    SlidingAnimation *_animation;	// 184 = 0xb8
    double _draggedItemWidth;	// 192 = 0xc0
}

+ (double)buttonBottomOffset;
@property(nonatomic) double draggedItemWidth; // @synthesize draggedItemWidth=_draggedItemWidth;
@property(retain, nonatomic) SlidingAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) ClippedItemsIndicator *rightClipIndicator; // @synthesize rightClipIndicator=_rightClipIndicator;
@property(nonatomic) unsigned long long dragSourceIndex; // @synthesize dragSourceIndex=_dragSourceIndex;
- (void).cxx_destruct;
- (void)_ensureButtonIsInViewHierarchy:(id)arg1;
- (void)_mainStatusDidChange:(id)arg1;
- (BOOL)isFlipped;
- (void)viewWillBeginDragging:(id)arg1;
- (id)viewPinnedToOverflowIndicator;
- (void)moveSlidingViewToCurrentDropIndex:(id)arg1;
- (BOOL)isSliding;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)updateDropTarget:(id)arg1;
- (double)slidingWidthForView:(id)arg1;
- (double)widthOfDraggingInfo:(id)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (BOOL)reorderSlidingView:(id)arg1 fromMouseDownEvent:(id)arg2;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (id)_lastDraggedEventFollowing:(id)arg1;
@property(nonatomic) unsigned long long dropIndex;
- (void)slideButtonsIntoPlace;
- (unsigned long long)dropIndexFromLocalPoint:(struct CGPoint)arg1;
- (unsigned long long)dropIndexFromDraggingInfo:(id)arg1;
- (void)refreshButtons;
- (void)draggedSlidingView:(id)arg1;
- (void)reorderedSlidingView:(id)arg1;
- (double)paddingBetweenButtons;
- (struct CGRect)_constrainProposedButtonFrame:(struct CGRect)arg1;
- (double)minSlidingViewX;
@property(readonly, nonatomic) double minButtonX;
- (double)maxButtonX;
- (double)maxButtonXWithClipIndicator;
- (double)maxButtonXWithoutClipIndicator;
- (unsigned long long)lastNonSlidingViewIndex;
- (void)dealloc;
- (void)_slidingViewsBarCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

