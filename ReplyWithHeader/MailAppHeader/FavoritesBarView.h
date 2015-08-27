#import "SlidingViewsBar.h"

#import "ClippedItemsIndicatorDelegate-Protocol.h"

@class MailBarContainerView, MessageViewer, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol MFUIMailbox;

@interface FavoritesBarView : SlidingViewsBar <ClippedItemsIndicatorDelegate>
{
    NSMutableArray *_clippedMenuItems;	// 152 = 0x98
    NSMutableDictionary *_favoriteButtonsByMailboxes;	// 160 = 0xa0
    NSMutableArray *_mailboxProperties;	// 168 = 0xa8
    BOOL _isForSearch;	// 176 = 0xb0
    BOOL _preparedForFirstLayout;	// 177 = 0xb1
    BOOL _windowDidClose;	// 178 = 0xb2
    BOOL _shouldCheckForDuplicates;	// 179 = 0xb3
    id <MFUIMailbox> _selectedMailbox;	// 184 = 0xb8
    MessageViewer *_messageViewer;	// 192 = 0xc0
    MailBarContainerView *_mailBarContainerView;	// 200 = 0xc8
    NSSet *_duplicateMailboxesSet;	// 208 = 0xd0
    double _minButtonX;	// 216 = 0xd8
    double _lastWidth;	// 224 = 0xe0
}

+ (id)mailboxForFavoritesBarPosition:(unsigned long long)arg1;
+ (id)_favoriteMailboxPropertiesFromPreferences;
+ (id)_mailboxForMailboxProperties:(id)arg1;
+ (id)_mailboxPropertiesFromMailbox:(id)arg1;
+ (double)buttonBottomOffset;
+ (id)_menuItemForMailboxProperties:(id)arg1;
@property(nonatomic) BOOL shouldCheckForDuplicates; // @synthesize shouldCheckForDuplicates=_shouldCheckForDuplicates;
@property(nonatomic) BOOL windowDidClose; // @synthesize windowDidClose=_windowDidClose;
@property(nonatomic) BOOL preparedForFirstLayout; // @synthesize preparedForFirstLayout=_preparedForFirstLayout;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(nonatomic) double minButtonX; // @synthesize minButtonX=_minButtonX;
@property(copy, nonatomic) NSSet *duplicateMailboxesSet; // @synthesize duplicateMailboxesSet=_duplicateMailboxesSet;
@property(nonatomic) __weak MailBarContainerView *mailBarContainerView; // @synthesize mailBarContainerView=_mailBarContainerView;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(retain, nonatomic) id <MFUIMailbox> selectedMailbox; // @synthesize selectedMailbox=_selectedMailbox;
- (void).cxx_destruct;
- (void)flashButtonAtPosition:(unsigned long long)arg1;
- (struct CGPoint)centerOfButtonForFavoritesBarPosition:(unsigned long long)arg1;
- (id)_mailboxPropertiesForFavoritesBarPosition:(unsigned long long)arg1;
- (void)setFavoritesBarIsForSearch:(BOOL)arg1;
- (BOOL)_havePreviouslyAddedMailbox:(id)arg1;
- (void)_setFavoriteMailboxAddedDefaultForMailbox:(id)arg1;
- (void)_getDefaultSetOfMailboxes;
- (void)_finishedGettingDefaultMailboxes;
- (void)_writeFavoriteMailboxPropertiesToPreferences;
- (void)saveFavoritesBar;
- (void)_upgradeFavoritesBar;
- (BOOL)_favoritesPreferenceExists;
- (id)_primaryMailboxes;
- (id)_activeMailboxes;
- (void)_insertMailboxPropertiesFromMailbox:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addMailboxPropertiesFromMailbox:(id)arg1;
- (void)updateButtonSelectionWithPreferredProperties:(id)arg1;
- (void)_VIPSendersChanged:(id)arg1;
- (void)clearButtons;
- (BOOL)isMailboxInFavoritesBar:(id)arg1;
- (double)_rightEdgeOfFavoritesViewSubviews;
- (void)_resetClippedItems;
- (void)_refreshButtonsSoon;
- (void)layOutButtons;
- (void)_favoritesViewFrameChanged:(id)arg1;
- (void)_mailboxSelectionChanged:(id)arg1;
- (void)_favoritesBarDidChanged:(id)arg1;
- (void)_mailAccountWillBeDeleted:(id)arg1;
- (void)_mailboxesChanged:(id)arg1;
- (void)_mailboxListingDidChange:(id)arg1;
- (void)_registerForNotifications;
- (id)_selectedButton;
- (void)deleteMailbox:(id)arg1;
- (void)deleteDraggedMailbox:(id)arg1;
- (id)_buttonAtMouseLocation:(struct CGPoint)arg1;
- (BOOL)addDroppedMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)favoriteButtonClicked:(id)arg1;
- (id)_addButtonForMailboxProperties:(id)arg1;
- (void)windowWillClose;
- (double)widthOfDraggingInfo:(id)arg1;
- (unsigned long long)updateDropTarget:(id)arg1;
- (void)reorderedSlidingView:(id)arg1;
- (void)refreshButtons;
- (void)_refreshMailboxProperties;
- (double)_paddingForSidebar;
- (double)paddingBetweenButtons;
- (double)maxButtonXWithoutClipIndicator;
- (double)maxButtonXWithClipIndicator;
- (double)minSlidingViewX;
- (unsigned long long)lastNonSlidingViewIndex;
- (void)finishedSlidingAnimation:(id)arg1;
- (id)menuItemsForClippedItemsIndicator:(id)arg1;
- (void)_favoritesBarViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

