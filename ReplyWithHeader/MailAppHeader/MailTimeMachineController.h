#import <objc/NSObject.h>

#import "MVTerminationHandler-Protocol.h"

@class MessageViewer, NSString, NSTimer;

@interface MailTimeMachineController : NSObject <MVTerminationHandler>
{
    id _tableOfContentsSaveLock;	// 8 = 0x8
    NSTimer *_tableOfContentsSaveTimer;	// 16 = 0x10
    BOOL _savingTOC;	// 24 = 0x18
    MessageViewer *_messageViewer;	// 32 = 0x20
    struct CGRect _originalMailWindowFrame;	// 40 = 0x28
}

+ (id)sharedController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) struct CGRect originalMailWindowFrame; // @synthesize originalMailWindowFrame=_originalMailWindowFrame;
@property(nonatomic) BOOL savingTOC; // @synthesize savingTOC=_savingTOC;
@property(retain, nonatomic) MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
- (void).cxx_destruct;
- (void)relinquishTimeMachineAccess;
- (void)exitTimeMachine;
- (void)prepareToExitTimeMachineModeWithDisplayState:(id)arg1;
- (void)enterTimeMachineMode;
- (void)finishedEnteringTM;
- (unsigned char)_launchTimeMachineHelperApp;
- (id)_mailTimeMachineDescriptionForMessage:(id)arg1 withColumns:(id)arg2 andMall:(id)arg3 selected:(BOOL)arg4;
- (void)_threadedSaveTableOfContentsApprovedQuit:(BOOL)arg1;
- (BOOL)_timingOutSaveTableOfContents;
- (void)_threadedSaveTableOfContentsEnded:(id)arg1;
- (void)_thread_saveTableOfContents:(id)arg1;
- (void)_saveTableOfContents;
- (void)_approvedQuit;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)unregisterTimeMachineHandlers;
- (void)registerTimeMachineHandlers;
- (void)disableTableOfContentsSaveTimer:(BOOL)arg1;
- (void)_setTableOfContentsTimer:(id)arg1;
- (void)_setTableOfContentsIsValid:(BOOL)arg1;
- (void)forceSaveTableOfContentsNow;
- (void)saveTableOfContents;
- (void)_invalidateTableOfContents:(id)arg1;
- (void)_invalidateTableOfContentsAndBackupManager:(id)arg1;
- (void)registerNotificationHandlers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

