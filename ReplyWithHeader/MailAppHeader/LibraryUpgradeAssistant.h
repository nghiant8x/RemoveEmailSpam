#import "Assistant.h"

#import "MFLibraryUpgraderDelegate-Protocol.h"
#import "NSOpenSavePanelDelegate-Protocol.h"

@class MFLibraryUpgrader, NSButton, NSString, NSTextField, NSView;

@interface LibraryUpgradeAssistant : Assistant <MFLibraryUpgraderDelegate, NSOpenSavePanelDelegate>
{
    MFLibraryUpgrader *_libraryUpgrader;	// 8 = 0x8
    NSView *_currentView;	// 16 = 0x10
    int _state;	// 24 = 0x18
    BOOL _accountsRequireStoragePolicyChange;	// 28 = 0x1c
    BOOL _isProgressIndeterminate;	// 29 = 0x1d
    NSView *_accountsRequireCachePolicyChangeView;	// 32 = 0x20
    NSView *_unresolvedAccountsView;	// 40 = 0x28
    NSView *_complexMigrationView;	// 48 = 0x30
    NSView *_patienceView;	// 56 = 0x38
    NSView *_epilogueView;	// 64 = 0x40
    NSView *_errorView;	// 72 = 0x48
    NSButton *_showNewFeaturesButton;	// 80 = 0x50
    NSTextField *_migrationDestinationTextField;	// 88 = 0x58
    NSTextField *_errorText;	// 96 = 0x60
    NSString *_statusMessage;	// 104 = 0x68
    double _progress;	// 112 = 0x70
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL isProgressIndeterminate; // @synthesize isProgressIndeterminate=_isProgressIndeterminate;
@property(copy, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(nonatomic) BOOL accountsRequireStoragePolicyChange; // @synthesize accountsRequireStoragePolicyChange=_accountsRequireStoragePolicyChange;
@property(nonatomic) __weak NSTextField *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) __weak NSTextField *migrationDestinationTextField; // @synthesize migrationDestinationTextField=_migrationDestinationTextField;
@property(nonatomic) __weak NSButton *showNewFeaturesButton; // @synthesize showNewFeaturesButton=_showNewFeaturesButton;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSView *epilogueView; // @synthesize epilogueView=_epilogueView;
@property(retain, nonatomic) NSView *patienceView; // @synthesize patienceView=_patienceView;
@property(retain, nonatomic) NSView *complexMigrationView; // @synthesize complexMigrationView=_complexMigrationView;
@property(retain, nonatomic) NSView *unresolvedAccountsView; // @synthesize unresolvedAccountsView=_unresolvedAccountsView;
@property(retain, nonatomic) NSView *accountsRequireCachePolicyChangeView; // @synthesize accountsRequireCachePolicyChangeView=_accountsRequireCachePolicyChangeView;
- (void).cxx_destruct;
- (void)chooseMigrationDestination:(id)arg1;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (void)showNewFeatures:(id)arg1;
- (void)upgrader:(id)arg1 didFailWithError:(id)arg2;
- (void)upgraderDidFinish:(id)arg1;
- (void)requestUserAttentionWithRequestType:(unsigned long long)arg1;
- (void)goForward;
- (void)stop;
- (void)start;
@property(retain, nonatomic) NSView *currentView;
@property(nonatomic) int state;
- (id)windowTitle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) MFLibraryUpgrader *libraryUpgrader;
- (void)dealloc;
- (id)initWithAssistentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

