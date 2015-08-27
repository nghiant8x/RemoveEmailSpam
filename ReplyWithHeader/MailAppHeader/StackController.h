#import <objc/NSObject.h>

#import "StackElementDelegate-Protocol.h"
#import "StackRevealGroupDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, StackRevealGroup;
@protocol StackDataSource, StackDelegate;

@interface StackController : NSObject <StackElementDelegate, StackRevealGroupDelegate>
{
    NSMutableArray *_stackedItems;	// 8 = 0x8
    NSMutableSet *_stackedItemsSet;	// 16 = 0x10
    NSMutableArray *_orderedItems;	// 24 = 0x18
    NSMutableSet *_orderedItemsSet;	// 32 = 0x20
    NSMutableDictionary *_stackElementsByItem;	// 40 = 0x28
    NSMutableDictionary *_loadRequestDatesByItem;	// 48 = 0x30
    StackRevealGroup *_revealGroup;	// 56 = 0x38
    BOOL _isAnimating;	// 64 = 0x40
    BOOL _animateStateTransitions;	// 65 = 0x41
    BOOL _updateNeeded;	// 66 = 0x42
    BOOL _loadingData;	// 67 = 0x43
    BOOL _waitingForTransitionToStackState;	// 68 = 0x44
    BOOL _isTerminating;	// 69 = 0x45
    BOOL _isSuspended;	// 70 = 0x46
    BOOL _preventReveal;	// 71 = 0x47
    BOOL _preventStackBeforeOffscreen;	// 72 = 0x48
    BOOL _abortingRevealAnimation;	// 73 = 0x49
    id <StackDataSource> _dataSource;	// 80 = 0x50
    id <StackDelegate> _delegate;	// 88 = 0x58
    NSArray *_itemsToDisplay;	// 96 = 0x60
    CALayer *_stackContainerLayer;	// 104 = 0x68
    double _lastDisplayedItemsUpdateRequest;	// 112 = 0x70
    double _lastTransitionToStackState;	// 120 = 0x78
    unsigned long long _transactionCount;	// 128 = 0x80
    struct CGSize _stackCenterOffset;	// 136 = 0x88
}

@property(nonatomic) BOOL abortingRevealAnimation; // @synthesize abortingRevealAnimation=_abortingRevealAnimation;
@property(nonatomic) BOOL preventStackBeforeOffscreen; // @synthesize preventStackBeforeOffscreen=_preventStackBeforeOffscreen;
@property(nonatomic) BOOL preventReveal; // @synthesize preventReveal=_preventReveal;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) BOOL isTerminating; // @synthesize isTerminating=_isTerminating;
@property(nonatomic) BOOL waitingForTransitionToStackState; // @synthesize waitingForTransitionToStackState=_waitingForTransitionToStackState;
@property(nonatomic) BOOL loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic) BOOL updateNeeded; // @synthesize updateNeeded=_updateNeeded;
@property(nonatomic) unsigned long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(nonatomic) double lastTransitionToStackState; // @synthesize lastTransitionToStackState=_lastTransitionToStackState;
@property(nonatomic) double lastDisplayedItemsUpdateRequest; // @synthesize lastDisplayedItemsUpdateRequest=_lastDisplayedItemsUpdateRequest;
@property(nonatomic) struct CGSize stackCenterOffset; // @synthesize stackCenterOffset=_stackCenterOffset;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(copy, nonatomic) NSArray *itemsToDisplay; // @synthesize itemsToDisplay=_itemsToDisplay;
@property(nonatomic) BOOL animateStateTransitions; // @synthesize animateStateTransitions=_animateStateTransitions;
@property(nonatomic) __weak id <StackDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <StackDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)stackRevealGroupDidFinish:(id)arg1;
- (void)stackRevealGroupDidReveal:(id)arg1;
- (void)stackRevealGroupWillReveal:(id)arg1;
- (id)stackContainerView;
- (void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3;
- (void)stackElement:(id)arg1 willRemoveLayer:(id)arg2;
- (id)layerForStackElement:(id)arg1;
- (BOOL)stackIsTerminating;
- (void)cancelPendingActions;
- (void)cancelRevealAnimation;
- (void)updateIsAnimating;
@property(nonatomic) BOOL isAnimating;
@property(retain, nonatomic) StackRevealGroup *revealGroup;
- (BOOL)isAnyStackElementBeingStacked;
- (id)stackElementToReshowUnderneathStackElement:(id)arg1;
- (id)orderedStackedElementsAboveStackElement:(id)arg1;
- (id)orderedStackedElementsWithOrientation:(long long)arg1;
- (void)stackDataSourceDidLoadItemData:(id)arg1;
- (void)updateOrientationForStackElement:(id)arg1;
- (void)updateStackElement:(id)arg1;
- (void)updateStackElements;
- (void)setNeedsToUpdateStackElements;
- (void)endTransaction;
- (void)beginTransaction;
- (BOOL)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(BOOL)arg2;
- (void)removeStackElement:(id)arg1;
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2 withInitialState:(int)arg3;
- (id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)keyForItem:(id)arg1;
- (void)removeStackedLayers:(BOOL)arg1;
- (void)updateDisplayedItems;
- (void)addStackedItem:(id)arg1;
- (void)setNeedsToUpdateDisplayedItems:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)displayStackedLayersForItems:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

