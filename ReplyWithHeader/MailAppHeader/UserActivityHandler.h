#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class DocumentEditor, NSMutableData, NSOutputStream, NSString, NSTimer, SingleMessageViewer;

@interface UserActivityHandler : NSObject <NSStreamDelegate>
{
    BOOL _applicationHasFinishedLaunching;	// 8 = 0x8
    BOOL _draftDataComplete;	// 9 = 0x9
    NSString *_waitingForActivityOfType;	// 16 = 0x10
    SingleMessageViewer *_viewerBeingContinued;	// 24 = 0x18
    NSString *_messageURLString;	// 32 = 0x20
    NSTimer *_timeoutTimer;	// 40 = 0x28
    DocumentEditor *_composeWindowBeingContinued;	// 48 = 0x30
    unsigned long long _continuationDataLength;	// 56 = 0x38
    NSOutputStream *_continuationReplyStream;	// 64 = 0x40
    NSMutableData *_continuationDraftData;	// 72 = 0x48
}

@property(nonatomic) BOOL draftDataComplete; // @synthesize draftDataComplete=_draftDataComplete;
@property(retain, nonatomic) NSMutableData *continuationDraftData; // @synthesize continuationDraftData=_continuationDraftData;
@property(retain, nonatomic) NSOutputStream *continuationReplyStream; // @synthesize continuationReplyStream=_continuationReplyStream;
@property(nonatomic) unsigned long long continuationDataLength; // @synthesize continuationDataLength=_continuationDataLength;
@property(retain, nonatomic) DocumentEditor *composeWindowBeingContinued; // @synthesize composeWindowBeingContinued=_composeWindowBeingContinued;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(retain, nonatomic) SingleMessageViewer *viewerBeingContinued; // @synthesize viewerBeingContinued=_viewerBeingContinued;
@property(retain, nonatomic) NSString *waitingForActivityOfType; // @synthesize waitingForActivityOfType=_waitingForActivityOfType;
@property(nonatomic) BOOL applicationHasFinishedLaunching; // @synthesize applicationHasFinishedLaunching=_applicationHasFinishedLaunching;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_timeout:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (void)_populateDraftWindow;
- (void)_showContinuedMessage;
- (void)_prepareWindowForActivity;
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (BOOL)continueUserActivity:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (BOOL)willContinueUserActivityWithType:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

