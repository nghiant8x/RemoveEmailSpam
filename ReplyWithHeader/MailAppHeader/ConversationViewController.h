#import <AppKit/NSViewController.h>

#import "MUICollectionViewDelegate-Protocol.h"

@class Conversation, ConversationMember, ConversationMemberArrayController, ConversationViewFindController, MUICollectionView, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSScrollView, NSString, NSUUID, UnfoldAnimationController;

@interface ConversationViewController : NSViewController <MUICollectionViewDelegate>
{
    NSMutableOrderedSet *_conversationMembers;	// 104 = 0x68
    NSMutableSet *_viewControllers;	// 112 = 0x70
    NSMutableIndexSet *_loadIndexes;	// 120 = 0x78
    NSMutableIndexSet *_primaryIndexes;	// 128 = 0x80
    NSMutableIndexSet *_unreadIndexes;	// 136 = 0x88
    NSMutableIndexSet *_visibleIndexes;	// 144 = 0x90
    NSMutableDictionary *_defaultMessageViewingState;	// 152 = 0x98
    NSMutableDictionary *_messageViewingStateByLibraryID;	// 160 = 0xa0
    ConversationMember *_conversationMemberObservedForActivity;	// 168 = 0xa8
    BOOL _alwaysShowMailboxNames;	// 176 = 0xb0
    BOOL _loaded;	// 177 = 0xb1
    MUICollectionView *_conversationView;	// 184 = 0xb8
    ConversationMemberArrayController *_arrayController;	// 192 = 0xc0
    ConversationViewFindController *_findController;	// 200 = 0xc8
    UnfoldAnimationController *_unfoldAnimationController;	// 208 = 0xd0
    double _pageZoom;	// 216 = 0xd8
    NSUUID *_updateUUID;	// 224 = 0xe0
    NSString *_urlStringToContinue;	// 232 = 0xe8
}

+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
@property(copy, nonatomic) NSString *urlStringToContinue; // @synthesize urlStringToContinue=_urlStringToContinue;
@property(copy, nonatomic) NSUUID *updateUUID; // @synthesize updateUUID=_updateUUID;
@property(nonatomic) double pageZoom; // @synthesize pageZoom=_pageZoom;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) UnfoldAnimationController *unfoldAnimationController; // @synthesize unfoldAnimationController=_unfoldAnimationController;
@property(readonly, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
@property(readonly, nonatomic) ConversationMemberArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(readonly, nonatomic) MUICollectionView *conversationView; // @synthesize conversationView=_conversationView;
- (void).cxx_destruct;
- (void)updateUserActivityState:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)makeFontBigger:(id)arg1;
- (void)toggleViewRelatedMessages:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)performRedundantTextExpansion:(id)arg1;
- (id)actionViewController;
- (id)actionConversationMembers;
- (id)actionMessagesIncludingDuplicates:(BOOL)arg1;
- (id)_actionConversationMemberIndices;
- (void)_updateLastViewedDateAndMarkRead:(id)arg1;
- (void)_prepareToUpdateLastViewedDateAndMarkReadIfNeeded:(id)arg1 index:(unsigned long long)arg2;
- (void)_cellViewFrameDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (void)collectionView:(id)arg1 didEndScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCellView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didBeginDisplayingCellView:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willEvictCellView:(id)arg2;
- (id)collectionView:(id)arg1 makeCellViewForItemAtIndex:(unsigned long long)arg2;
- (double)collectionView:(id)arg1 initialHeightOfCellAtIndex:(unsigned long long)arg2;
- (void)_restoreMessageViewingState:(id)arg1;
- (void)_saveMessageViewingState:(id)arg1;
- (void)_viewControllerDidFinishLoading:(id)arg1;
- (void)_loadCellAtNextIndex;
- (void)_performInitialPinning;
- (void)_updateConversationMembers:(id)arg1;
- (void)_resetConversationDisplayState;
- (void)_resetConversationState;
- (void)_updateActivityFromConversationMember:(id)arg1;
@property(retain, nonatomic) ConversationMember *conversationMemberObservedForActivity;
- (void)_updateFirstResponderIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL alwaysShowMailboxNames;
- (void)_scrollViewDidEndLiveScroll:(id)arg1;
- (void)_scrollViewWillStartLiveScroll:(id)arg1;
@property(retain) NSScrollView *view;
- (void)setRepresentedObject:(id)arg1 withFocusedMessage:(id)arg2;
@property(retain) Conversation *representedObject;
@property(readonly, copy) NSString *description;
- (void)_performDiagnostics:(id)arg1;
- (void)tearDown;
- (void)loadView;
- (void)_conversationViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

