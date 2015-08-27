#import <objc/NSObject.h>

#import "MVTerminationHandler-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSPanel, NSScrollView, NSStackView, NSString, NSTimer;

@interface ActivityViewer : NSObject <MVTerminationHandler, NSWindowDelegate>
{
    NSMutableArray *_entries;	// 8 = 0x8
    BOOL _userIsBeingPromptedForTermination;	// 16 = 0x10
    NSStackView *_docView;	// 24 = 0x18
    NSScrollView *_scrollView;	// 32 = 0x20
    NSPanel *_window;	// 40 = 0x28
    NSTimer *_updateTimer;	// 48 = 0x30
    NSDate *_updateTimerStartDate;	// 56 = 0x38
}

@property(nonatomic) BOOL userIsBeingPromptedForTermination; // @synthesize userIsBeingPromptedForTermination=_userIsBeingPromptedForTermination;
@property(retain, nonatomic) NSDate *updateTimerStartDate; // @synthesize updateTimerStartDate=_updateTimerStartDate;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSPanel *window; // @synthesize window=_window;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSStackView *docView; // @synthesize docView=_docView;
- (void).cxx_destruct;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)statusMessageForTarget:(id)arg1;
- (void)toggleActivityViewerVisible;
- (BOOL)isActivityViewerVisible;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_promptUserForTermination;
- (BOOL)needsToPromptUserBeforeTermination:(id)arg1;
- (long long)countOfBackgroundActivities;
- (BOOL)hasBackgroundActivity;
- (void)removeEntry:(id)arg1;
- (void)_appendEntry:(id)arg1;
- (void)_addViewToViewerWindow:(id)arg1;
- (void)_updateAllEntries;
- (void)_handleNewActivity:(id)arg1;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

