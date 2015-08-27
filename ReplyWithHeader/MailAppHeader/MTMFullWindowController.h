#import "MTMWindowController.h"

#import "NSOutlineViewDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class ColorBackgroundView, MTMFakeMailbox, MTMMessageColumnController, MTMOutlineCell, MTMOutlineView, MTMScroller, MailSplitView, NSArray, NSArrayController, NSDictionary, NSIndexSet, NSMutableDictionary, NSString, NSTabView, NSTableView, NSTextFieldCell, NSTreeController, NSView, NSWindow, QLPreviewView;
@protocol QLPreviewCustomView;

@interface MTMFullWindowController : MTMWindowController <NSOutlineViewDelegate, NSSplitViewDelegate, NSTableViewDataSource, NSTableViewDelegate, NSWindowDelegate>
{
    NSArray *_messageColumnOrder;	// 80 = 0x50
    NSDictionary *_messageColumnSizes;	// 88 = 0x58
    NSArray *_messageSortDescriptors;	// 96 = 0x60
    NSMutableDictionary *_mailboxesDict;	// 104 = 0x68
    BOOL _messageScrollerSavedDontNotify;	// 112 = 0x70
    BOOL _shouldPreventFirstViewResize;	// 113 = 0x71
    BOOL _messageScrollerSavedDontNotifyOnResize;	// 114 = 0x72
    BOOL _isActivated;	// 115 = 0x73
    NSWindow *_topLevelWindow;	// 120 = 0x78
    NSView *_emptyView;	// 128 = 0x80
    NSView<QLPreviewCustomView> *_genericView;	// 136 = 0x88
    NSView *_loadingView;	// 144 = 0x90
    NSArrayController *_messagesController;	// 152 = 0x98
    NSTreeController *_mailboxesController;	// 160 = 0xa0
    MailSplitView *_verticalSplitView;	// 168 = 0xa8
    NSView *_mailboxesView;	// 176 = 0xb0
    MTMOutlineView *_outlineView;	// 184 = 0xb8
    NSTabView *_mailboxTabView;	// 192 = 0xc0
    MailSplitView *_splitView;	// 200 = 0xc8
    ColorBackgroundView *_globalRestoreView;	// 208 = 0xd0
    NSTableView *_messagesView;	// 216 = 0xd8
    ColorBackgroundView *_messageBackgroundView;	// 224 = 0xe0
    QLPreviewView *_previewView;	// 232 = 0xe8
    NSArray *_selectedMailboxIndexPaths;	// 240 = 0xf0
    NSIndexSet *_selectedMessageIndexes;	// 248 = 0xf8
    MTMFakeMailbox *_displayedMailbox;	// 256 = 0x100
    MTMScroller *_messageScroller;	// 264 = 0x108
    MTMMessageColumnController *_columnController;	// 272 = 0x110
    NSTextFieldCell *_textCell;	// 280 = 0x118
    MTMOutlineCell *_mailboxCell;	// 288 = 0x120
    NSArray *_expectedSelectedMessageIDs;	// 296 = 0x128
    unsigned long long _isUpdatingSelectionFromBackend;	// 304 = 0x130
    double _expectedMessageScrollerValue;	// 312 = 0x138
    double _currentMessageScrollerValue;	// 320 = 0x140
    NSArray *_expectedVisibleSelectedMessageIDs;	// 328 = 0x148
}

+ (id)keyPathsForValuesAffectingMailboxTargeted;
+ (id)keyPathsForValuesAffectingPlaceholderString;
+ (id)keyPathsForValuesAffectingDisplayState;
+ (Class)specialMailboxClass;
@property(copy, nonatomic) NSArray *expectedVisibleSelectedMessageIDs; // @synthesize expectedVisibleSelectedMessageIDs=_expectedVisibleSelectedMessageIDs;
@property(nonatomic) double currentMessageScrollerValue; // @synthesize currentMessageScrollerValue=_currentMessageScrollerValue;
@property(nonatomic) double expectedMessageScrollerValue; // @synthesize expectedMessageScrollerValue=_expectedMessageScrollerValue;
@property(nonatomic) unsigned long long isUpdatingSelectionFromBackend; // @synthesize isUpdatingSelectionFromBackend=_isUpdatingSelectionFromBackend;
@property(copy, nonatomic) NSArray *expectedSelectedMessageIDs; // @synthesize expectedSelectedMessageIDs=_expectedSelectedMessageIDs;
@property(nonatomic) BOOL isActivated; // @synthesize isActivated=_isActivated;
@property(nonatomic) BOOL messageScrollerSavedDontNotifyOnResize; // @synthesize messageScrollerSavedDontNotifyOnResize=_messageScrollerSavedDontNotifyOnResize;
@property(nonatomic) BOOL shouldPreventFirstViewResize; // @synthesize shouldPreventFirstViewResize=_shouldPreventFirstViewResize;
@property(retain, nonatomic) MTMOutlineCell *mailboxCell; // @synthesize mailboxCell=_mailboxCell;
@property(retain, nonatomic) NSTextFieldCell *textCell; // @synthesize textCell=_textCell;
@property(retain, nonatomic) MTMMessageColumnController *columnController; // @synthesize columnController=_columnController;
@property(nonatomic) BOOL messageScrollerSavedDontNotify; // @synthesize messageScrollerSavedDontNotify=_messageScrollerSavedDontNotify;
@property(retain, nonatomic) MTMScroller *messageScroller; // @synthesize messageScroller=_messageScroller;
@property(retain, nonatomic) MTMFakeMailbox *displayedMailbox; // @synthesize displayedMailbox=_displayedMailbox;
@property(retain, nonatomic) NSIndexSet *selectedMessageIndexes; // @synthesize selectedMessageIndexes=_selectedMessageIndexes;
@property(retain, nonatomic) NSArray *selectedMailboxIndexPaths; // @synthesize selectedMailboxIndexPaths=_selectedMailboxIndexPaths;
@property(nonatomic) __weak QLPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak ColorBackgroundView *messageBackgroundView; // @synthesize messageBackgroundView=_messageBackgroundView;
@property(nonatomic) __weak NSTableView *messagesView; // @synthesize messagesView=_messagesView;
@property(nonatomic) __weak ColorBackgroundView *globalRestoreView; // @synthesize globalRestoreView=_globalRestoreView;
@property(nonatomic) __weak MailSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak NSTabView *mailboxTabView; // @synthesize mailboxTabView=_mailboxTabView;
@property(nonatomic) __weak MTMOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) __weak NSView *mailboxesView; // @synthesize mailboxesView=_mailboxesView;
@property(nonatomic) __weak MailSplitView *verticalSplitView; // @synthesize verticalSplitView=_verticalSplitView;
@property(retain, nonatomic) NSTreeController *mailboxesController; // @synthesize mailboxesController=_mailboxesController;
@property(retain, nonatomic) NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSView<QLPreviewCustomView> *genericView; // @synthesize genericView=_genericView;
@property(retain, nonatomic) NSView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSWindow *topLevelWindow; // @synthesize topLevelWindow=_topLevelWindow;
- (void).cxx_destruct;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)fadeDuration;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (double)_maxMailboxesViewWidthAllowed;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
@property(copy, nonatomic) NSArray *messageSortDescriptors;
- (id)_computedMessageSortDescriptors;
@property(copy, nonatomic) NSDictionary *messageColumnSizes;
- (id)_computedMessageColumnSizes;
@property(copy, nonatomic) NSArray *messageColumnOrder;
- (id)_computedMessageColumnOrder;
- (BOOL)isTopLevelItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)mailboxListWasUpdated:(id)arg1;
- (void)mailboxListWillBeUpdated:(id)arg1;
- (void)scrollerWasMovedByUser:(id)arg1;
- (void)scrollerWillBeMovedByUser:(id)arg1;
- (void)_selectionDidChange;
- (id)urlToMessage;
- (void)setShowChangedItemsOnly:(BOOL)arg1;
- (id)restoreMessagePaths;
- (BOOL)shouldRestoreMailboxPaths;
- (id)selectedMessagePaths;
- (id)selectedMailboxPaths;
- (BOOL)mailboxTargeted;
- (id)_subPlaceholderAttributes;
- (id)_placeholderAttributes;
- (id)placeholderString;
- (void)adjustDisplayStateAfterTimeMachineStarted;
- (void)_flushMessageScrollPosition;
- (void)_updateMessageScrollPosition;
- (void)_tryToUpdateSelectedMessageIDs;
- (void)_flushExpectedMessageIDsSelection;
- (void)_tryToSelectMessages:(id)arg1 selectedMailbox:(id)arg2;
- (void)setDisplayState:(id)arg1;
- (id)displayState;
- (void)_resizeSplitViewToPercentage:(double)arg1;
- (BOOL)setupUIWithDisplayState:(id)arg1;
- (id)windowNibName;
- (void)loadWindow;
- (void)dealloc;
@property(retain, nonatomic) NSIndexSet *selectedMessageIndexesInDisplayedMailbox;
- (void)updateMessageListBindingsWithDisplayedMailbox:(id)arg1 scrollerDelta:(double)arg2;
- (id)selectedMailbox;
- (void)deactivate;
- (void)activate;
- (void)_updatePreviewViewURLIfNecessary;
- (void)removeBindings;
- (void)setupBindings;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

