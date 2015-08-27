#import <objc/NSObject.h>

#import "AssistantDelegate-Protocol.h"

@class Assistant, NSButton, NSEvent, NSString, NSView, NSWindow;

@interface AssistantManager : NSObject <AssistantDelegate>
{
    Assistant *_assistant;	// 8 = 0x8
    BOOL _userWantsToQuit;	// 16 = 0x10
    NSWindow *_window;	// 24 = 0x18
    NSView *_assistantContainerView;	// 32 = 0x20
    NSButton *_backButton;	// 40 = 0x28
    NSButton *_forwardButton;	// 48 = 0x30
    NSButton *_cancelButton;	// 56 = 0x38
    NSButton *_helpButton;	// 64 = 0x40
    NSEvent *_libraryUpgradeCompletedEvent;	// 72 = 0x48
    long long _type;	// 80 = 0x50
    AssistantManager *_me;	// 88 = 0x58
}

+ (BOOL)isImporting;
+ (id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2 userWantsToQuit:(char *)arg3;
+ (id)openAssistantOfType:(long long)arg1 modalForWindow:(id)arg2;
@property(retain, nonatomic) AssistantManager *me; // @synthesize me=_me;
@property(nonatomic) BOOL userWantsToQuit; // @synthesize userWantsToQuit=_userWantsToQuit;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSEvent *libraryUpgradeCompletedEvent; // @synthesize libraryUpgradeCompletedEvent=_libraryUpgradeCompletedEvent;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(nonatomic) __weak NSButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak NSView *assistantContainerView; // @synthesize assistantContainerView=_assistantContainerView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)assistantDidFinish:(id)arg1;
- (void)_moveWindowToFront:(id)arg1;
- (void)_terminate;
- (void)_sheetWillBegin:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_showInWindow:(id)arg1;
- (void)_start;
- (void)cancel:(id)arg1;
- (void)forward:(id)arg1;
- (void)back:(id)arg1;
- (void)dealloc;
- (id)_initWithType:(long long)arg1;
@property(retain, nonatomic) Assistant *assistant;
- (id)init;
- (id)_newAssistantOfType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

