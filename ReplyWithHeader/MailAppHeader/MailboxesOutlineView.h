#import <AppKit/NSOutlineView.h>

@interface MailboxesOutlineView : NSOutlineView
{
    BOOL _reloading;	// 656 = 0x290
    BOOL _allowsSelectAll;	// 657 = 0x291
    BOOL _showsUnnecessaryDisclosureTriangles;	// 658 = 0x292
    BOOL _draggingIsBeingUpdated;	// 659 = 0x293
}

@property(nonatomic) BOOL draggingIsBeingUpdated; // @synthesize draggingIsBeingUpdated=_draggingIsBeingUpdated;
@property(nonatomic) BOOL showsUnnecessaryDisclosureTriangles; // @synthesize showsUnnecessaryDisclosureTriangles=_showsUnnecessaryDisclosureTriangles;
@property(nonatomic) BOOL allowsSelectAll; // @synthesize allowsSelectAll=_allowsSelectAll;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)reloadItem:(id)arg1;
- (void)reloadData;
- (void)noteNumberOfRowsChanged;
- (void)_didReload;
- (void)_triggerReloadNotification;
- (void)_willReload;
- (BOOL)inLiveResize;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)arg1;
- (id)menu;
- (void)selectAll:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_mailboxesOutlineViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

