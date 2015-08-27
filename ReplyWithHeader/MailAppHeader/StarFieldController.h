#import <objc/NSObject.h>

@class MTMMailbox, NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer;
@protocol MTMMailboxControllerProtocol;

@interface StarFieldController : NSObject
{
    NSMutableDictionary *_windowControllers;	// 8 = 0x8
    NSMutableDictionary *_bufferedControllers;	// 16 = 0x10
    id <MTMMailboxControllerProtocol> _activeWindowController;	// 24 = 0x18
    NSMutableArray *_thumbnailUpdateQueue;	// 32 = 0x20
    BOOL _isInTimeMachine;	// 40 = 0x28
    BOOL _showChangedItemsOnly;	// 41 = 0x29
    BOOL _timeMachineStarted;	// 42 = 0x2a
    BOOL _firstThumbnailUpdateRequest;	// 43 = 0x2b
    BOOL _hasAtLeastSentOneThumbnail;	// 44 = 0x2c
    BOOL _dismissed;	// 45 = 0x2d
    NSDictionary *_sharedDisplayState;	// 48 = 0x30
    id <MTMMailboxControllerProtocol> _currentTimeWindowController;	// 56 = 0x38
    NSDictionary *_mailDisplayState;	// 64 = 0x40
    NSTimer *_updateTimer;	// 72 = 0x48
    MTMMailbox *_pausedMailbox;	// 80 = 0x50
    struct CGRect _mailFrame;	// 88 = 0x58
    struct CGRect _initialFrame;	// 120 = 0x78
}

+ (id)sharedController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)keyPathsForValuesAffectingIsInTimeMachine;
@property(retain, nonatomic) MTMMailbox *pausedMailbox; // @synthesize pausedMailbox=_pausedMailbox;
@property(nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) BOOL hasAtLeastSentOneThumbnail; // @synthesize hasAtLeastSentOneThumbnail=_hasAtLeastSentOneThumbnail;
@property(nonatomic) BOOL firstThumbnailUpdateRequest; // @synthesize firstThumbnailUpdateRequest=_firstThumbnailUpdateRequest;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSDictionary *mailDisplayState; // @synthesize mailDisplayState=_mailDisplayState;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(nonatomic) struct CGRect mailFrame; // @synthesize mailFrame=_mailFrame;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> currentTimeWindowController; // @synthesize currentTimeWindowController=_currentTimeWindowController;
@property(nonatomic) BOOL timeMachineStarted; // @synthesize timeMachineStarted=_timeMachineStarted;
@property(nonatomic) BOOL showChangedItemsOnly; // @synthesize showChangedItemsOnly=_showChangedItemsOnly;
@property(nonatomic) BOOL isInTimeMachine; // @synthesize isInTimeMachine=_isInTimeMachine;
@property(retain, nonatomic) NSDictionary *sharedDisplayState; // @synthesize sharedDisplayState=_sharedDisplayState;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)restoreFromURL:(id)arg1;
- (void)_showChangedItemsOnlyToggled:(unsigned char)arg1;
- (id)deactivateWindowForURL:(id)arg1;
- (id)_activateWindowForURL:(id)arg1 changedItemsOnly:(unsigned char)arg2 atFrame:(struct CGRect)arg3;
- (id)revisionIDForURL:(id)arg1;
- (id)_correctedURLForURL:(id)arg1 proposedQueryString:(id)arg2;
- (void)scheduleUpdateForURL:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)updateNextThumbnail;
- (void)markSnapshotAsDirty:(id)arg1;
- (void)updateThumbnailForURL:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)updateAllThumbnails;
- (void)_updateAllThumbnails;
- (void)timeMachineWasDismissed;
- (BOOL)startTimeMachine;
- (void)removeWindowControllerForURL:(id)arg1;
- (id)windowControllerForURL:(id)arg1 forDisplay:(BOOL)arg2 canCreate:(BOOL)arg3;
- (void)appHasExitedTimeMachineAndFinishedRestoring;
- (void)startExitTransitionOfWindowController:(id)arg1;
- (void)_enterTransitionDidEnd:(id)arg1;
- (void)startEnterTransitionOfWindowController:(id)arg1 fromFrame:(struct CGRect)arg2;
@property(nonatomic) __weak id <MTMMailboxControllerProtocol> activeWindowController;
- (void)showCurrentStateMailDisplayState:(id)arg1;
- (id)mainURL;
- (void)dealloc;
- (id)init;

@end

