#import <objc/NSObject.h>

#import "NSAnimationDelegate-Protocol.h"

@class ActivityAggregateView, ActivityPaneView, NSButton, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSOutlineView, NSString, NSTextField, NSView;

@interface ActivityViewController : NSObject <NSAnimationDelegate>
{
    NSMutableArray *_views;	// 8 = 0x8
    NSMutableArray *_viewQueue;	// 16 = 0x10
    NSMutableSet *_viewsPendingHide;	// 24 = 0x18
    BOOL _loadingAggregateView;	// 32 = 0x20
    NSTextField *_titleTextField;	// 40 = 0x28
    ActivityPaneView *_contentView;	// 48 = 0x30
    ActivityPaneView *_bottomPane;	// 56 = 0x38
    NSButton *_mailActivityToggleButton;	// 64 = 0x40
    NSOutlineView *_mailboxesOutline;	// 72 = 0x48
    NSView *_mailboxesContent;	// 80 = 0x50
    ActivityAggregateView *_aggregateView;	// 88 = 0x58
    NSView *_innerView;	// 96 = 0x60
    ActivityAggregateView *_inView;	// 104 = 0x68
    ActivityAggregateView *_outView;	// 112 = 0x70
    ActivityAggregateView *_saveView;	// 120 = 0x78
    NSLayoutConstraint *_activityViewHeightConstraint;	// 128 = 0x80
}

@property(nonatomic) __weak NSLayoutConstraint *activityViewHeightConstraint; // @synthesize activityViewHeightConstraint=_activityViewHeightConstraint;
@property(retain, nonatomic) ActivityAggregateView *saveView; // @synthesize saveView=_saveView;
@property(retain, nonatomic) ActivityAggregateView *outView; // @synthesize outView=_outView;
@property(retain, nonatomic) ActivityAggregateView *inView; // @synthesize inView=_inView;
@property(retain, nonatomic) NSView *innerView; // @synthesize innerView=_innerView;
@property(nonatomic) BOOL loadingAggregateView; // @synthesize loadingAggregateView=_loadingAggregateView;
@property(retain, nonatomic) ActivityAggregateView *aggregateView; // @synthesize aggregateView=_aggregateView;
@property(retain, nonatomic) NSView *mailboxesContent; // @synthesize mailboxesContent=_mailboxesContent;
@property(nonatomic) __weak NSOutlineView *mailboxesOutline; // @synthesize mailboxesOutline=_mailboxesOutline;
@property(nonatomic) __weak NSButton *mailActivityToggleButton; // @synthesize mailActivityToggleButton=_mailActivityToggleButton;
@property(nonatomic) __weak ActivityPaneView *bottomPane; // @synthesize bottomPane=_bottomPane;
@property(nonatomic) __weak ActivityPaneView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (BOOL)_shouldShowBottomDivider;
- (void)_mailboxesFrameChanged:(id)arg1;
- (double)_activityAnimationDuration;
- (void)_setActivityViewHeight:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_hideViews:(id)arg1;
- (void)_hideView:(id)arg1;
- (void)_showView:(id)arg1;
- (BOOL)removeViewFromQueue:(id)arg1;
- (void)addViewToQueue:(id)arg1;
- (void)toggleDisplay:(id)arg1;
- (void)configureActivityAggegateViews;
- (id)_activityAggregateViewForAggregate:(id)arg1 withKeyPathToObserve:(id)arg2;
- (id)_loadActivityAggregateView;
- (void)_setVisible:(BOOL)arg1;
- (void)_unregisterObservedKeyPaths;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

