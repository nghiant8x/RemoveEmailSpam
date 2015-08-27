#import <AppKit/NSApplication.h>

#import "IMAPUserAgent-Protocol.h"
#import "MCActivityTarget-Protocol.h"
#import "MCUserAgent-Protocol.h"
#import "MFUserAgent-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class ActivityViewer, DeliveryQueue, DockCountController, DynamicErrorWindowController, FlagsMenuItemView, MailboxesController, NSMenu, NSMutableArray, NSMutableSet, NSString, NSTimer, NSWindow, UserActivityHandler;
@protocol MVSelectionOwner;

@interface MailApp : NSApplication <IMAPUserAgent, MCUserAgent, MFUserAgent, MCActivityTarget, MVTerminationHandler, NSApplicationDelegate, NSMenuDelegate>
{
    NSMenu *_mailboxesContextMenu;	// 144 = 0x90
    NSMenu *_addButtonMenu;	// 152 = 0x98
    NSMenu *_messageViewerContextMenu;	// 160 = 0xa0
    NSMenu *_viewAttachmentContextMenu;	// 168 = 0xa8
    NSMenu *_composeAttachmentContextMenu;	// 176 = 0xb0
    NSMutableArray *_stationeryBundlesToInstall;	// 184 = 0xb8
    DeliveryQueue *_deliveryQueue;	// 192 = 0xc0
    id _terminationHandlersLock;	// 200 = 0xc8
    NSMutableArray *_terminationHandlers;	// 208 = 0xd0
    NSMutableArray *_currentTerminationHandlers;	// 216 = 0xd8
    unsigned long long _terminateReply;	// 224 = 0xe0
    NSTimer *_terminationTimer;	// 232 = 0xe8
    BOOL _groupingByThreadDefaultsToOn;	// 240 = 0xf0
    NSMutableSet *_accountsCurrentlySynchronizing;	// 248 = 0xf8
    NSMutableArray *_appleEventDescriptorQueue;	// 256 = 0x100
    NSMutableArray *_accountsEmptyingTrash;	// 264 = 0x108
    BOOL _paused;	// 272 = 0x110
    BOOL _isTerminating;	// 273 = 0x111
    BOOL _isExitingFullscreen;	// 274 = 0x112
    BOOL _hasPerformedDelayedInitialization;	// 275 = 0x113
    BOOL _accountsHaveBeenConfigured;	// 276 = 0x114
    BOOL _autoLaunchHidden;	// 277 = 0x115
    BOOL _appHasFinishedLaunching;	// 278 = 0x116
    BOOL _synchronizingAllAccounts;	// 279 = 0x117
    BOOL _shouldUpdateEmailAliasesOnNextActivation;	// 280 = 0x118
    BOOL _accountsAreNew;	// 281 = 0x119
    BOOL _runningEmptyTrashSheet;	// 282 = 0x11a
    MailboxesController *_mailboxesController;	// 288 = 0x120
    FlagsMenuItemView *_flagsMenuItemView;	// 296 = 0x128
    NSWindow *_errorDiagnosisWindow;	// 304 = 0x130
    DynamicErrorWindowController *_errorDiagnosisWindowController;	// 312 = 0x138
    long long *_errorDiagnosisResult;	// 320 = 0x140
    id <MVSelectionOwner> _selectionOwner;	// 328 = 0x148
    ActivityViewer *_activityViewer;	// 336 = 0x150
    DockCountController *_dockCountController;	// 344 = 0x158
    double _appDidFinishLaunchingTime;	// 352 = 0x160
    UserActivityHandler *_userActivityHandler;	// 360 = 0x168
}

+ (void)_testMachPorts;
@property(readonly, nonatomic) UserActivityHandler *userActivityHandler; // @synthesize userActivityHandler=_userActivityHandler;
@property(nonatomic) BOOL runningEmptyTrashSheet; // @synthesize runningEmptyTrashSheet=_runningEmptyTrashSheet;
@property(nonatomic) BOOL accountsAreNew; // @synthesize accountsAreNew=_accountsAreNew;
@property(nonatomic) BOOL shouldUpdateEmailAliasesOnNextActivation; // @synthesize shouldUpdateEmailAliasesOnNextActivation=_shouldUpdateEmailAliasesOnNextActivation;
@property BOOL synchronizingAllAccounts; // @synthesize synchronizingAllAccounts=_synchronizingAllAccounts;
@property(nonatomic) BOOL appHasFinishedLaunching; // @synthesize appHasFinishedLaunching=_appHasFinishedLaunching;
@property(nonatomic) BOOL autoLaunchHidden; // @synthesize autoLaunchHidden=_autoLaunchHidden;
@property(nonatomic) double appDidFinishLaunchingTime; // @synthesize appDidFinishLaunchingTime=_appDidFinishLaunchingTime;
@property(nonatomic) __weak DockCountController *dockCountController; // @synthesize dockCountController=_dockCountController;
@property(readonly, nonatomic) ActivityViewer *activityViewer; // @synthesize activityViewer=_activityViewer;
@property(nonatomic) __weak id <MVSelectionOwner> selectionOwner; // @synthesize selectionOwner=_selectionOwner;
@property BOOL accountsHaveBeenConfigured; // @synthesize accountsHaveBeenConfigured=_accountsHaveBeenConfigured;
@property BOOL hasPerformedDelayedInitialization; // @synthesize hasPerformedDelayedInitialization=_hasPerformedDelayedInitialization;
@property BOOL isExitingFullscreen; // @synthesize isExitingFullscreen=_isExitingFullscreen;
@property BOOL isCurrentlyTerminating; // @synthesize isCurrentlyTerminating=_isTerminating;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) long long *errorDiagnosisResult; // @synthesize errorDiagnosisResult=_errorDiagnosisResult;
@property(retain, nonatomic) DynamicErrorWindowController *errorDiagnosisWindowController; // @synthesize errorDiagnosisWindowController=_errorDiagnosisWindowController;
@property(retain, nonatomic) NSWindow *errorDiagnosisWindow; // @synthesize errorDiagnosisWindow=_errorDiagnosisWindow;
@property(retain, nonatomic) FlagsMenuItemView *flagsMenuItemView; // @synthesize flagsMenuItemView=_flagsMenuItemView;
@property(retain, nonatomic) MailboxesController *mailboxesController; // @synthesize mailboxesController=_mailboxesController;
- (void).cxx_destruct;
- (void)_delayedUpgradeSteps;
- (void)_handleSyncNotification:(id)arg1;
- (void)_rulesChanged:(id)arg1;
- (BOOL)shouldRestoreStateOnNextLaunch;
- (void)replyToApplicationShouldTerminate:(BOOL)arg1;
- (void)handler:(id)arg1 approvedQuit:(BOOL)arg2;
- (void)removeTerminationHandler:(id)arg1;
- (void)addTerminationHandler:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_terminationTimerFired:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (id)_currentTerminationHandler;
- (void)_nowWouldBeAGoodTimeForHandler:(id)arg1 toTerminateFromSelector:(SEL)arg2;
- (void)_backfillDateLastViewedAttribute;
- (void)_fixAttachmentCache;
- (void)_cleanOldDatabases:(id)arg1;
- (void)_cleanUpAccount:(id)arg1;
- (void)_cleanupFinishedForAccount:(id)arg1;
- (void)_approveQuitIfFinished:(id)arg1;
- (void)_terminateNoConfirm;
- (void)quitNoMatterWhat;
- (void)timeMachineDismiss:(id)arg1;
- (void)_timeMachineSendEvent:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (id)preferredReplyAddressBasedOnCurrentSelection;
- (id)preferredAccountBasedOnSelection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (id)selection;
- (void)resignSelectionFor:(id)arg1;
- (void)setSelectionFrom:(id)arg1;
- (id)deliveryQueue;
- (void)mailTo:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)mailSelection:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (id)messageEditor;
- (void)_mailDocuments:(id)arg1;
- (id)frameworkVersion;
- (id)applicationVersion;
- (BOOL)handleClickOnURL:(id)arg1 visibleText:(id)arg2 window:(id)arg3 dontSwitch:(BOOL)arg4;
- (BOOL)handleMessageURL:(id)arg1;
- (BOOL)handleMailToURL:(id)arg1;
- (void)_preferencesChanged:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)willPresentContextualMenu:(id)arg1;
- (id)toolbarItemCopyMenu;
- (id)toolbarItemMoveMenu;
@property(retain, nonatomic) NSMenu *composeAttachmentContextMenu;
@property(retain, nonatomic) NSMenu *viewAttachmentContextMenu;
@property(retain, nonatomic) NSMenu *messageViewerContextMenu;
@property(retain, nonatomic) NSMenu *mailboxesContextMenu;
@property(retain, nonatomic) NSMenu *addButtonMenu;
- (void)loadMailboxesContextMenuNib;
- (void)_addressManagerLoaded:(id)arg1;
- (id)_messageEditorWithSettings:(id)arg1;
- (id)openMessageEditorWithParsedMessage:(id)arg1 headers:(id)arg2 activatingApp:(BOOL)arg3;
- (id)openStoreWithMailbox:(id)arg1 andMakeKey:(BOOL)arg2;
- (id)openStoreWithMailbox:(id)arg1;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateEmailAliasesOnNextActivation;
- (void)applicationDidUnhide:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)handleStationeryBundles;
- (BOOL)_handleOpenMessage:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)checkNewMailInSelectedAccounts:(id)arg1;
- (void)_checkNewMailInAccountRepresentedByMailbox:(id)arg1;
- (void)checkNewMail:(id)arg1;
@property(nonatomic) BOOL groupingByThreadDefaultsToOn;
- (void)toggleThreadedMode:(id)arg1;
- (void)eraseJunkMail:(id)arg1;
- (void)showToolbarItemForJunkMail:(BOOL)arg1;
- (void)compactSelectedMailboxes:(id)arg1;
- (void)emptyTrashInAccount:(id)arg1;
- (id)_accountsToEmptyTrashIn:(id)arg1;
- (void)_emptyTrashPromptingUserInAccounts:(id)arg1 storeToCompact:(id)arg2;
- (void)_emptyTrashInAccounts:(id)arg1 storeToCompact:(id)arg2;
- (void)editAccount:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_setupCheckSpellingSubMenu;
- (void)_setupAccountMenuItems;
- (void)_removeAllItemsInAccountMenuWithTag:(long long)arg1;
- (void)_removeExtraSeparatorsInMailboxMenu;
- (void)bringUpGetNewMailMenu:(id)arg1;
- (void)bringUpEmptyTrashMenu:(id)arg1;
- (void)bringUpSynchronizeAccountMenu:(id)arg1;
- (void)bringUpOnlineOfflineMenu:(id)arg1;
- (void)_synchronizeAccountListMenuWithTagIfNeeded:(long long)arg1;
- (void)_getActiveAccountsThatCanGoOffline:(id)arg1 fetch:(id)arg2 sync:(id)arg3 deleteToTrash:(id)arg4 doesNotDeleteToTrash:(id)arg5;
- (id)_getMenuItemInMessageMenuWithTag:(long long)arg1;
- (id)_mailboxMenu;
- (void)_resetMenuItemWithTag:(long long)arg1;
- (void)insertOriginalAttachments:(id)arg1;
- (void)attachFilesAtEnd:(id)arg1;
- (void)alwaysAttachFilesAtEnd:(id)arg1;
- (void)sendWindowsFriendlyAttachments:(id)arg1;
- (void)alwaysSendWindowsFriendlyAttachments:(id)arg1;
- (void)showAccountInfo:(id)arg1;
- (void)showReleaseNotes:(id)arg1;
- (void)importMailboxes:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)openSystemAccountPreferences:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (void)showActivityViewer:(id)arg1;
- (void)showAddressHistoryPanel:(id)arg1;
- (void)showMediaBrowser:(id)arg1;
- (void)selectMailbox:(id)arg1;
- (void)newViewerWindow:(id)arg1;
- (void)addFontTrait:(id)arg1;
- (void)orderFrontStylesPanel:(id)arg1;
- (void)showComposeWindow:(id)arg1;
- (void)showInfoPanel:(id)arg1;
- (void)showConnectionDoctor:(id)arg1;
- (void)closeAll:(id)arg1;
- (void)_emailsRejected:(id)arg1;
- (void)_emailAddressesApproved:(id)arg1;
- (void)_handleNetworkConfigurationChange;
- (void)_networkConfigurationChanged:(id)arg1;
- (void)synchronizeAccount:(id)arg1;
- (void)performSynchronizationForAccounts:(id)arg1;
- (void)_clearAccountsCurrentlySynchronizing;
- (BOOL)_isAccountCurrentlySynchronizing:(id)arg1;
- (void)_removeFromAccountsCurrentlySynchronizing:(id)arg1;
- (void)_addToAccountsCurrentlySynchronizing:(id)arg1;
- (void)toggleAccountOnlineStatus:(id)arg1;
- (void)disconnectThisAccountFromContextMenu:(id)arg1;
- (void)connectThisAccountFromContextMenu:(id)arg1;
- (void)connectAllAccountsFromContextMenu:(id)arg1;
- (void)disconnectAllAccountsFromContextMenu:(id)arg1;
- (void)disconnectThisAccount:(id)arg1;
- (void)connectThisAccount:(id)arg1;
- (void)connectAllAccounts:(id)arg1;
- (void)disconnectAllAccounts:(id)arg1;
- (BOOL)_moreThanOneAccountCanGoOffline;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)runPageLayout:(id)arg1;
- (id)_accountBeingViewed;
- (BOOL)_isMailboxBeingViewedSpecial;
- (id)_mailboxBeingViewed;
- (id)_failureInfoForBundle:(id)arg1 path:(id)arg2;
- (void)_loadBundlesFromPath:(id)arg1 failedBundleInfos:(id)arg2;
- (void)_loadBundles;
- (void)_setupInitialState;
- (void)_restoreMessagesFromDefaults;
- (BOOL)_needToCreateLibraryUpgradingIfNecessary;
- (void)_setupQuitMenu;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)_exitIfInUpgradeOnlyMode;
- (void)transformToBackground;
- (BOOL)applicationIsInBackgroundMode;
- (void)transformToForeground;
- (BOOL)applicationWillBeRestoredByTAL;
- (void)_delayOnStartup;
- (void)_showDatabaseAlert:(BOOL)arg1 databaseFile:(id)arg2;
- (void)_showReadOnlyFolderAlert:(id)arg1;
- (void)_showUnresolvedFolderAlert:(id)arg1;
- (void)_performBackgroundDelayedInitialization;
- (void)_setSourceOnGmailLabels;
- (void)_performDelayedInitialization;
- (void)_tryToPerformDelayedInitialization;
- (void)_updateEmailAliases;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)_showViewerWindow:(id)arg1;
- (void)showViewerWindow:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)deliveryAccounts;
- (void)removeFromAccountsAtIndex:(unsigned long long)arg1;
- (void)insertInPopAccounts:(id)arg1;
- (void)insertInPopAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInImapAccounts:(id)arg1;
- (void)insertInImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAosImapAccounts:(id)arg1;
- (void)insertInAosImapAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInAccounts:(id)arg1;
- (void)insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_insertInAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)backgroundThreadCount;
- (void)setShouldCheckIntranetDomains:(BOOL)arg1 withString:(id)arg2;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (BOOL)inlineSpellCheckingEnabled;
- (void)setEncryptOutgoingMessages:(BOOL)arg1;
- (BOOL)encryptOutgoingMessages;
- (void)setSignOutgoingMessages:(BOOL)arg1;
- (BOOL)signOutgoingMessages;
- (void)setIncludeAllOfOriginalMessage:(BOOL)arg1;
- (BOOL)includeAllOfOriginalMessage;
- (void)setIncludeOriginalMessage:(BOOL)arg1;
- (BOOL)includeOriginalMessage;
- (void)setAlwaysBCCMyself:(BOOL)arg1;
- (BOOL)alwaysBCCMyself;
- (void)setAlwaysCCMyself:(BOOL)arg1;
- (BOOL)alwaysCCMyself;
- (void)setReplyInSameFormat:(BOOL)arg1;
- (BOOL)replyInSameFormat;
- (void)setUseAddressCompletion:(BOOL)arg1;
- (BOOL)useAddressCompletion;
- (void)setExpandGroupAddresses:(BOOL)arg1;
- (BOOL)expandGroupAddresses;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (BOOL)checkGrammarWithSpelling;
- (void)setSpellCheckingBehavior:(long long)arg1;
- (long long)spellCheckingBehavior;
- (void)setAutosaveComposeWindows:(BOOL)arg1;
- (BOOL)autosaveComposeWindows;
- (void)setDefaultMessageFormat:(unsigned int)arg1;
- (unsigned int)defaultMessageFormat;
- (void)setLevelThreeQuotingColor:(int)arg1;
- (int)levelThreeQuotingColor;
- (void)setLevelTwoQuotingColor:(int)arg1;
- (int)levelTwoQuotingColor;
- (void)setLevelOneQuotingColor:(int)arg1;
- (int)levelOneQuotingColor;
- (int)quotingColorValue:(id)arg1;
- (void)setQuotingColor:(int)arg1 forLevel:(unsigned long long)arg2;
- (int)quotingColorForLevel:(unsigned long long)arg1;
- (void)setFixedWidthFontSize:(double)arg1;
- (double)fixedWidthFontSize;
- (void)setFixedWidthFont:(id)arg1;
- (id)fixedWidthFont;
- (void)setUseFixedWidthFont:(BOOL)arg1;
- (BOOL)useFixedWidthFont;
- (void)setMessageFontSize:(double)arg1;
- (double)messageFontSize;
- (void)setMessageFont:(id)arg1;
- (id)messageFont;
- (void)setMessageListFontSize:(double)arg1;
- (double)messageListFontSize;
- (void)setMessageListFont:(id)arg1;
- (id)messageListFont;
- (void)setColorQuotedText:(BOOL)arg1;
- (BOOL)colorQuotedText;
- (void)setFixedPitchFont:(id)arg1 size:(double)arg2;
- (void)setMessageFont:(id)arg1 size:(double)arg2;
- (void)fontsAndColorsPreferencesDidChange;
- (void)fontsAndColorsPreferencesDidChange:(BOOL)arg1;
- (void)setIndexDecryptedMessages:(BOOL)arg1;
- (BOOL)indexDecryptedMessages;
- (void)setDownloadFolderURL:(id)arg1;
- (id)downloadFolderURL;
- (void)setMailSoundForNewMail:(id)arg1;
- (id)mailSoundForNewMail;
- (void)setSoundPathForNewMail:(id)arg1;
- (id)soundPathForNewMail;
- (void)setPlayOtherMailSounds:(BOOL)arg1;
- (BOOL)playOtherMailSounds;
- (id)soundPathForNoNewMail;
- (void)handleDiagnosticsEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleShowAccountPreferencesEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleSafariPDFEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleSafariReaderArchiveEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleSafariPageArchiveEvent:(id)arg1 replyEvent:(id)arg2;
- (void)shareInMailEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleMailWebLinkEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleMailWebPageEvent:(id)arg1 replyEvent:(id)arg2;
- (void)handleGURLAppleEvent:(id)arg1 replyEvent:(id)arg2;
- (void)queueAppleEvent:(id)arg1 replyEvent:(id)arg2;
- (void)_unregisterAppleEventHandlers;
- (void)_registerAppleEventHandlers;
- (void)_registerAppleEventQueue;
- (id)handleImportMboxCommand:(id)arg1;
- (id)handleSynchronizeAccountCommand:(id)arg1;
- (id)handleCheckMailCommand:(id)arg1;
- (id)logMessages;
- (void)setLogActivityOnHosts:(id)arg1;
- (id)logActivityOnHosts;
- (void)setLogActivityOnPorts:(id)arg1;
- (id)logActivityOnPorts;
- (void)setLogAllSocketActivity:(BOOL)arg1;
- (BOOL)logAllSocketActivity;
- (void)setUseKeychain:(BOOL)arg1;
- (BOOL)useKeychain;
- (id)_objectSpecifierForObject:(id)arg1 inArray:(id)arg2 withKey:(id)arg3;
- (id)valueInComposeMessagesWithUniqueID:(id)arg1;
- (void)removeFromComposeMessagesAtIndex:(unsigned long long)arg1;
- (void)insertInComposeMessages:(id)arg1;
- (void)insertInComposeMessages:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)composeMessages;
- (void)removeFromMessageEditorsAtIndex:(unsigned long long)arg1;
- (void)insertInMessageEditors:(id)arg1;
- (void)insertInMessageEditors:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)messageEditors;
- (void)replaceInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMailboxes:(id)arg1;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeFromMailboxesAtIndex:(unsigned long long)arg1;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)mailboxes;
- (id)junkMailbox;
- (id)trashMailbox;
- (id)sentMailbox;
- (id)draftsMailbox;
- (id)outbox;
- (id)inbox;
- (void)removeFromMessageViewersAtIndex:(unsigned long long)arg1;
- (void)insertInMessageViewers:(id)arg1;
- (void)insertInMessageViewers:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueInMessageViewersWithUniqueID:(id)arg1;
- (id)messageViewers;
- (void)removeFromDeliveryAccountsAtIndex:(unsigned long long)arg1;
- (void)insertInDeliveryAccounts:(id)arg1;
- (void)insertInDeliveryAccounts:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)aosImapAccounts;
- (id)imapAccounts;
- (id)popAccounts;
- (id)_accountsOfClass:(Class)arg1;
- (id)accounts;
- (id)applescriptSelection;
- (id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)arg1;
- (void)openHelpTopic:(id)arg1;
- (id)_convertSnowLeopardToLionKey:(id)arg1;
- (void)_upgradeDebuggingDefaults;
- (void)_upgradeComposeWindowReplyOrForwardToolbar;
- (void)_setAutoFetchFrequencyToAutomatic;
- (void)_migrateRecentsToCoreRecents;
- (void)_migrateDisableRemoteContentToSharedDomain;
- (void)_migrateDefaultsToSharedDomain;
- (void)_removeViewRelatedMessagesToolbarButtonByDefault;
- (void)_upgradeExpandedMailboxesPreference;
- (void)_adoptNewToolbarDefaultConfigurations;
- (void)_preserveSignatureAboveQuotedTextPreference;
- (void)_switchToolbarsToIconOnly;
- (void)_upgradeFlagToolbarItems;
- (void)_turnOnConversationView;
- (void)performPostPersistenceUpgrades;
- (void)performPrePersistenceUpgrades;
- (BOOL)doParentalControlProcessingForMessage:(id)arg1;
- (BOOL)addInvitationsToCalendarAutomatically;
- (void)addInvitationsToCalendarFromMessages:(id)arg1;
- (id)junkStringFromHTMLData:(id)arg1 textEncodingName:(id)arg2 context:(id)arg3;
- (long long)junkMailBehavior;
- (id)headersRequiredForParentalControl;
- (id)headersRequiredForRouting;
- (void)setIsInTimeMachineMode:(BOOL)arg1;
- (BOOL)isInTimeMachineMode;
- (id)localAttachmentFilesDirectory;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2;
- (void)relaunchAndQuitWithAdditionalArguments:(id)arg1;
- (void)relaunchAndQuit;
- (BOOL)isTerminating;
- (id)sharedAttachmentContextMenu;
- (void)storeBeingInvalidated:(id)arg1;
- (void)_downloadBigMessage:(id)arg1;
- (long long)queryUserForBigMessageAction:(id)arg1;
- (void)informUserOfBusyDatabaseWithRecoverer:(id)arg1 diagnosis:(long long *)arg2;
- (void)informUserOfIOErrorWithStateIn:(long long *)arg1;
- (void)_informUserOfDatabaseError:(id)arg1;
- (BOOL)queryUserWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (void)informUserOfError:(id)arg1;
- (long long)runAlertPanelWithTitle:(id)arg1 firstButtonTitle:(id)arg2 secondButtonTitle:(id)arg3 thirdButtonTitle:(id)arg4 message:(id)arg5;
- (void)_runAlertPanelInMainThreadWithInfo:(id)arg1;
- (void)resetSuppressedAccount:(id)arg1;
- (BOOL)renewCredentialsForAccount:(id)arg1;
- (void)removeFromRulesAtIndex:(unsigned long long)arg1;
- (void)insertInRules:(id)arg1;
- (void)insertInRules:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rules;
- (void)removeFromSignaturesAtIndex:(unsigned long long)arg1;
- (void)insertInSignatures:(id)arg1;
- (void)insertInSignatures:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSelectedSignature:(id)arg1;
- (id)selectedSignature;
- (void)setChooseSignatureWhenComposing:(BOOL)arg1;
- (BOOL)chooseSignatureWhenComposing;
- (id)signatures;
- (BOOL)shouldShowUnreadMessagesInBold;
- (void)setShouldShowUnreadMessagesInBold:(BOOL)arg1;
- (void)setShouldHighlightThreads:(BOOL)arg1;
- (BOOL)shouldHighlightThreads;
- (void)setHeaderDetail:(unsigned int)arg1;
- (unsigned int)headerDetail;
- (void)setDownloadHTMLAttachments:(BOOL)arg1;
- (BOOL)downloadHTMLAttachments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

