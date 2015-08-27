#import <objc/NSObject.h>

#import "ImageResizerDelegate-Protocol.h"
#import "MCActivityTarget-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "MailFullScreenWindowDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSTextFinderClient-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CALayer, ColorBackgroundView, ComposeBackEnd, ComposeStatusView, DeliveryFailure, EditingMessageWebView, EditingWebMessageController, HeadersEditor, LoadingOverlay, MCAttachment, MailInspectorBar, MailInspectorBarItemController, MailToolbar, MailWebViewEditor, MailWindowShadowLayer, MessageViewer, NSArray, NSButton, NSDictionary, NSMutableArray, NSMutableDictionary, NSOperation, NSOperationQueue, NSRunningApplication, NSStackView, NSString, NSTextField, NSTextFinder, NSUUID, NSView, NSWindow, StationerySelector, TypeAheadWindow, WebArchive;
@protocol NSTextFinderBarContainer;

@interface DocumentEditor : NSObject <NSToolbarDelegate, NSSharingServiceDelegate, ImageResizerDelegate, MailFullScreenWindowDelegate, MCActivityTarget, MVTerminationHandler, NSAnimationDelegate, NSTextFinderClient, NSUserInterfaceValidations, NSWindowDelegate>
{
    ComposeBackEnd *_backEnd;	// 8 = 0x8
    BOOL _userSavedMessage;	// 16 = 0x10
    NSMutableDictionary *_bodiesByAttachmentURL;	// 24 = 0x18
    NSMutableArray *_imageResizers;	// 32 = 0x20
    unsigned long long _encryptionOverhead;	// 40 = 0x28
    NSMutableArray *_unapprovedRecipients;	// 48 = 0x30
    NSMutableArray *_userActionQueue;	// 56 = 0x38
    struct CGImage *_mainWindowNonKeySnapshot;	// 64 = 0x40
    BOOL _isLoaded;	// 72 = 0x48
    BOOL _isAutoSaving;	// 73 = 0x49
    BOOL _autoShowEditor;	// 74 = 0x4a
    BOOL _userCanApplyStationery;	// 75 = 0x4b
    BOOL _wantsToClose;	// 76 = 0x4c
    BOOL _shouldSaveWhenClosing;	// 77 = 0x4d
    BOOL _shouldDoPopOutAnimation;	// 78 = 0x4e
    BOOL _userKnowsSaveFailed;	// 79 = 0x4f
    BOOL _registeredForNotifications;	// 80 = 0x50
    BOOL _shouldSaveAfterLoading;	// 81 = 0x51
    BOOL _inspectorBarDisplayed;	// 82 = 0x52
    BOOL _sendWhenFinishLoading;	// 83 = 0x53
    BOOL _hasIncludedAttachmentsFromOriginal;	// 84 = 0x54
    BOOL _sendAnimationIsInProgress;	// 85 = 0x55
    BOOL _sendAnimationCancelled;	// 86 = 0x56
    BOOL _shouldCloseWindowWhenAnimationCompletes;	// 87 = 0x57
    BOOL _isShareKitOriginated;	// 88 = 0x58
    BOOL _contentIsDelayed;	// 89 = 0x59
    MailWebViewEditor *_webViewEditor;	// 96 = 0x60
    HeadersEditor *_headersEditor;	// 104 = 0x68
    TypeAheadWindow *_window;	// 112 = 0x70
    EditingMessageWebView *_composeWebView;	// 120 = 0x78
    NSTextField *_stationeryNameTextField;	// 128 = 0x80
    NSButton *_stationeryNameSaveButton;	// 136 = 0x88
    NSView<NSTextFinderBarContainer> *_findBarContainer;	// 144 = 0x90
    NSStackView *_contentStack;	// 152 = 0x98
    NSView *_clippingView;	// 160 = 0xa0
    NSView *_statusRow;	// 168 = 0xa8
    MailToolbar *_toolbar;	// 176 = 0xb0
    NSDictionary *_toolbarItems;	// 184 = 0xb8
    unsigned long long _messageType;	// 192 = 0xc0
    id _loadDelegate;	// 200 = 0xc8
    NSDictionary *_settings;	// 208 = 0xd0
    EditingWebMessageController *_webMessageController;	// 216 = 0xd8
    MessageViewer *_possibleFullScreenViewerParent;	// 224 = 0xe0
    NSRunningApplication *_activeApplicationBeforeEditorOpened;	// 232 = 0xe8
    NSWindow *_stationeryNameSheet;	// 240 = 0xf0
    ColorBackgroundView *_stationeryPane;	// 248 = 0xf8
    StationerySelector *_stationerySelector;	// 256 = 0x100
    ComposeStatusView *_composeStatusView;	// 264 = 0x108
    NSString *_userHTMLForSharingTop;	// 272 = 0x110
    NSString *_URLShareUUID;	// 280 = 0x118
    WebArchive *_pageWebArchive;	// 288 = 0x120
    WebArchive *_readerWebArchive;	// 296 = 0x128
    MCAttachment *_PDFAttachment;	// 304 = 0x130
    DocumentEditor *_me;	// 312 = 0x138
    MailInspectorBar *_inspectorBar;	// 320 = 0x140
    MailInspectorBarItemController *_inspectorBarItemController;	// 328 = 0x148
    LoadingOverlay *_loadingOverlay;	// 336 = 0x150
    NSOperationQueue *_operationQueue;	// 344 = 0x158
    NSOperation *_savedFinishLoadingEditorOperation;	// 352 = 0x160
    DeliveryFailure *_deliveryFailure;	// 360 = 0x168
    unsigned long long _textLengthForLastEstimatedMessageSize;	// 368 = 0x170
    NSTextFinder *_textFinder;	// 376 = 0x178
    NSWindow *_transparentWindow;	// 384 = 0x180
    CALayer *_mainWindowLayer;	// 392 = 0x188
    CALayer *_composeContentLayer;	// 400 = 0x190
    CALayer *_headerAndBodyHostingLayer;	// 408 = 0x198
    CALayer *_messageHeaderLayer;	// 416 = 0x1a0
    CALayer *_messageBodyLayer;	// 424 = 0x1a8
    CALayer *_composeHeaderLayer;	// 432 = 0x1b0
    CALayer *_composeBodyLayer;	// 440 = 0x1b8
    CALayer *_composeToolbarLayer;	// 448 = 0x1c0
    MailWindowShadowLayer *_shadowLayer;	// 456 = 0x1c8
    MessageViewer *_messageViewerToAttach;	// 464 = 0x1d0
    struct CGPoint _originalCascadePoint;	// 472 = 0x1d8
    struct CGRect _startRect;	// 488 = 0x1e8
    struct CGRect _endRect;	// 520 = 0x208
    struct CGRect _composeWindowFrame;	// 552 = 0x228
}

+ (id)keyPathsForValuesAffectingDeliveryAccount;
+ (void)_emailAddresses:(id)arg1 approvedOrRejected:(BOOL)arg2;
+ (void)emailsRejected:(id)arg1;
+ (void)emailAddressesApproved:(id)arg1;
+ (void)_autoSaveTimerFired;
+ (void)setNeedsAutosave;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (id)restoreDraftMessage:(id)arg1 withSavedState:(id)arg2;
+ (void)showEditorWithSavedState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)restoreFromDefaults;
+ (void)handleFailedDeliveryOfMessage:(id)arg1 error:(id)arg2;
+ (void)_presentFullScreenDeliveryFailureWithError:(id)arg1;
+ (void)_setMessageStatus:(id)arg1 onMessageID:(id)arg2;
+ (id)createEditorWithType:(unsigned long long)arg1 settings:(id)arg2;
+ (id)keyPathsForValuesAffectingDocumentID;
+ (id)existingEditorForMessage:(id)arg1;
+ (id)editorsForDocumentID:(id)arg1 editorClass:(Class)arg2;
+ (id)existingEditorForMessage:(id)arg1 editorClass:(Class)arg2;
+ (id)documentWebPreferencesIdentifierForRichText:(BOOL)arg1;
+ (BOOL)documentType;
+ (void)unregisterDocumentEditor:(id)arg1;
+ (void)registerDocumentEditor:(id)arg1;
+ (id)documentEditors;
+ (id)_documentEditors;
+ (void)setAutosaveTimer:(id)arg1;
+ (id)autoSaveTimer;
+ (void)initialize;
@property(nonatomic) BOOL contentIsDelayed; // @synthesize contentIsDelayed=_contentIsDelayed;
@property(nonatomic) BOOL isShareKitOriginated; // @synthesize isShareKitOriginated=_isShareKitOriginated;
@property(nonatomic) BOOL shouldCloseWindowWhenAnimationCompletes; // @synthesize shouldCloseWindowWhenAnimationCompletes=_shouldCloseWindowWhenAnimationCompletes;
@property(nonatomic) BOOL sendAnimationCancelled; // @synthesize sendAnimationCancelled=_sendAnimationCancelled;
@property(nonatomic) BOOL sendAnimationIsInProgress; // @synthesize sendAnimationIsInProgress=_sendAnimationIsInProgress;
@property(retain, nonatomic) MessageViewer *messageViewerToAttach; // @synthesize messageViewerToAttach=_messageViewerToAttach;
@property(nonatomic) struct CGRect composeWindowFrame; // @synthesize composeWindowFrame=_composeWindowFrame;
@property(nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
@property(retain, nonatomic) MailWindowShadowLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) CALayer *composeToolbarLayer; // @synthesize composeToolbarLayer=_composeToolbarLayer;
@property(retain, nonatomic) CALayer *composeBodyLayer; // @synthesize composeBodyLayer=_composeBodyLayer;
@property(retain, nonatomic) CALayer *composeHeaderLayer; // @synthesize composeHeaderLayer=_composeHeaderLayer;
@property(retain, nonatomic) CALayer *messageBodyLayer; // @synthesize messageBodyLayer=_messageBodyLayer;
@property(retain, nonatomic) CALayer *messageHeaderLayer; // @synthesize messageHeaderLayer=_messageHeaderLayer;
@property(retain, nonatomic) CALayer *headerAndBodyHostingLayer; // @synthesize headerAndBodyHostingLayer=_headerAndBodyHostingLayer;
@property(retain, nonatomic) CALayer *composeContentLayer; // @synthesize composeContentLayer=_composeContentLayer;
@property(retain, nonatomic) CALayer *mainWindowLayer; // @synthesize mainWindowLayer=_mainWindowLayer;
@property(retain, nonatomic) NSWindow *transparentWindow; // @synthesize transparentWindow=_transparentWindow;
@property(retain, nonatomic) NSTextFinder *textFinder; // @synthesize textFinder=_textFinder;
@property(nonatomic) BOOL hasIncludedAttachmentsFromOriginal; // @synthesize hasIncludedAttachmentsFromOriginal=_hasIncludedAttachmentsFromOriginal;
@property(nonatomic) BOOL sendWhenFinishLoading; // @synthesize sendWhenFinishLoading=_sendWhenFinishLoading;
@property(nonatomic) unsigned long long textLengthForLastEstimatedMessageSize; // @synthesize textLengthForLastEstimatedMessageSize=_textLengthForLastEstimatedMessageSize;
@property(retain, nonatomic) DeliveryFailure *deliveryFailure; // @synthesize deliveryFailure=_deliveryFailure;
@property(nonatomic) BOOL inspectorBarDisplayed; // @synthesize inspectorBarDisplayed=_inspectorBarDisplayed;
@property(nonatomic) __weak NSOperation *savedFinishLoadingEditorOperation; // @synthesize savedFinishLoadingEditorOperation=_savedFinishLoadingEditorOperation;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) struct CGPoint originalCascadePoint; // @synthesize originalCascadePoint=_originalCascadePoint;
@property(nonatomic) BOOL shouldSaveAfterLoading; // @synthesize shouldSaveAfterLoading=_shouldSaveAfterLoading;
@property(nonatomic) BOOL registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) BOOL userKnowsSaveFailed; // @synthesize userKnowsSaveFailed=_userKnowsSaveFailed;
@property(retain, nonatomic) LoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) MailInspectorBarItemController *inspectorBarItemController; // @synthesize inspectorBarItemController=_inspectorBarItemController;
@property(retain, nonatomic) MailInspectorBar *inspectorBar; // @synthesize inspectorBar=_inspectorBar;
@property(retain, nonatomic) DocumentEditor *me; // @synthesize me=_me;
@property(nonatomic) BOOL shouldDoPopOutAnimation; // @synthesize shouldDoPopOutAnimation=_shouldDoPopOutAnimation;
@property(retain, nonatomic) MCAttachment *PDFAttachment; // @synthesize PDFAttachment=_PDFAttachment;
@property(retain, nonatomic) WebArchive *readerWebArchive; // @synthesize readerWebArchive=_readerWebArchive;
@property(retain, nonatomic) WebArchive *pageWebArchive; // @synthesize pageWebArchive=_pageWebArchive;
@property(retain, nonatomic) NSString *URLShareUUID; // @synthesize URLShareUUID=_URLShareUUID;
@property(retain, nonatomic) NSString *userHTMLForSharingTop; // @synthesize userHTMLForSharingTop=_userHTMLForSharingTop;
@property(retain, nonatomic) ComposeStatusView *composeStatusView; // @synthesize composeStatusView=_composeStatusView;
@property(retain, nonatomic) StationerySelector *stationerySelector; // @synthesize stationerySelector=_stationerySelector;
@property(retain, nonatomic) ColorBackgroundView *stationeryPane; // @synthesize stationeryPane=_stationeryPane;
@property(retain, nonatomic) NSWindow *stationeryNameSheet; // @synthesize stationeryNameSheet=_stationeryNameSheet;
@property(retain, nonatomic) NSRunningApplication *activeApplicationBeforeEditorOpened; // @synthesize activeApplicationBeforeEditorOpened=_activeApplicationBeforeEditorOpened;
@property(nonatomic) BOOL shouldSaveWhenClosing; // @synthesize shouldSaveWhenClosing=_shouldSaveWhenClosing;
@property(nonatomic) __weak MessageViewer *possibleFullScreenViewerParent; // @synthesize possibleFullScreenViewerParent=_possibleFullScreenViewerParent;
@property(readonly, nonatomic) EditingWebMessageController *webMessageController; // @synthesize webMessageController=_webMessageController;
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id loadDelegate; // @synthesize loadDelegate=_loadDelegate;
@property(nonatomic) BOOL wantsToClose; // @synthesize wantsToClose=_wantsToClose;
@property(nonatomic) BOOL userCanApplyStationery; // @synthesize userCanApplyStationery=_userCanApplyStationery;
@property(nonatomic) BOOL autoShowEditor; // @synthesize autoShowEditor=_autoShowEditor;
@property(nonatomic) BOOL isAutoSaving; // @synthesize isAutoSaving=_isAutoSaving;
@property(nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain, nonatomic) MailToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak NSView *statusRow; // @synthesize statusRow=_statusRow;
@property(retain, nonatomic) NSView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak NSStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(nonatomic) __weak NSView<NSTextFinderBarContainer> *findBarContainer; // @synthesize findBarContainer=_findBarContainer;
@property(nonatomic) __weak NSButton *stationeryNameSaveButton; // @synthesize stationeryNameSaveButton=_stationeryNameSaveButton;
@property(nonatomic) __weak NSTextField *stationeryNameTextField; // @synthesize stationeryNameTextField=_stationeryNameTextField;
@property(retain, nonatomic) EditingMessageWebView *composeWebView; // @synthesize composeWebView=_composeWebView;
@property(retain, nonatomic) TypeAheadWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) HeadersEditor *headersEditor; // @synthesize headersEditor=_headersEditor;
@property(retain, nonatomic) MailWebViewEditor *webViewEditor; // @synthesize webViewEditor=_webViewEditor;
- (void).cxx_destruct;
- (void)backEndHandedMessageToDevice:(id)arg1;
- (void)setInsertionPointAtEnd;
- (void)activityContinuationFailed;
- (void)_cancelSendAnimation;
- (void)_sendAnimationCompleted;
- (void)_performSendAnimation;
- (void)_animationCompleted;
- (void)_cleanupAnimation;
- (void)_performPopOutAnimation;
- (void)_doPopOutAnimationIfPossible;
- (id)_toolbarAnimation;
- (id)_mainWindowAnimation;
- (id)_composeBodyAnimation;
- (id)_messageBodyAnimation;
- (id)_composeHeaderAnimation;
- (id)_messageHeaderAnimation;
- (id)_sizeAnimation;
- (id)_positionAnimationWithStartPosition:(struct CGPoint)arg1 endPosition:(struct CGPoint)arg2 percentFromStart:(double)arg3;
- (void)_setupPopOutAnimation:(CDUnknownBlockType)arg1;
- (BOOL)_canDoPopOutAnimation;
- (void)_getSnapshotsForAnimation:(CDUnknownBlockType)arg1;
- (void)_getMainWindowSnapshot;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)restoreFrame;
- (BOOL)mailFullScreenWindowShouldClose:(id)arg1;
- (id)windowForMailFullScreen;
- (void)windowDidBecomeMain:(id)arg1;
- (void)forceClose;
- (void)_clearToolbarTargets;
- (void)windowWillClose:(id)arg1;
- (void)prepareToGoAway;
- (BOOL)windowShouldClose:(id)arg1;
- (void)endDocumentMove;
- (void)beginDocumentMove;
- (id)shouldSaveHelptag;
- (id)shouldSaveDescription;
- (id)shouldSaveTitle;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)_hideStatusBar;
- (void)_showStatusBar;
- (void)toggleCheckGrammarWithSpelling:(id)arg1;
- (void)changeSpellCheckingBehavior:(id)arg1;
- (void)_printAsExportJob:(BOOL)arg1;
- (void)exportAsPDF:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)performClose:(id)arg1;
- (void)saveChangedDocument:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)setMessagePriority:(id)arg1;
- (void)makeFontSmaller:(id)arg1;
- (void)makeFontBigger:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)insertBulletedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (void)toggleRich:(id)arg1;
- (void)makePlainText:(id)arg1;
- (void)makeRichText:(id)arg1;
- (BOOL)_sendButtonShouldBeEnabled;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_firstSelectedAttachmentView;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)shareItemsForSelection;
- (void)invokeExtensionService:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly, getter=isEditable) BOOL editable;
- (void)didFindNonIncrementalSearchInWebView:(id)arg1 DOMRange:(id)arg2;
- (id)currentlySelectedWebView;
- (id)webViews;
- (void)performTextFinderAction:(id)arg1;
- (void)_generateParsedMessagesToAppendForMessages:(id)arg1;
- (void)_appendMessages:(id)arg1 withParsedMessages:(id)arg2;
- (void)appendMessageArray:(id)arg1;
- (void)appendMessages:(id)arg1;
- (id)mailAttachmentsAdded:(id)arg1;
- (void)_attachmentDidFinishReading:(id)arg1;
- (void)mailAttachmentsDeleted:(id)arg1;
- (void)_mailAttachmentsDeleted;
- (void)_setImageSizePopupToSize:(id)arg1;
- (void)_saveImageSizeToDefaults;
- (unsigned long long)_estimatedMessageSize;
- (unsigned long long)_encryptionOverhead;
- (unsigned long long)_signatureOverhead;
- (unsigned long long)_textLengthEstimate;
- (BOOL)_attachmentCanBeResized:(id)arg1;
- (BOOL)_resizeImageAttachments:(id)arg1;
- (BOOL)_resizeAttachment:(id)arg1;
- (id)_resizerForAttachment:(id)arg1;
- (BOOL)_isResizingImages;
- (void)imageResizer:(id)arg1 didFinishResizingWithResultCode:(long long)arg2;
- (id)_maxImageSizeAsString;
- (struct CGSize)_selectedImageSize;
- (struct CGSize)_imageSizeForTag:(long long)arg1;
- (void)_hideImageStatus;
- (void)_showImageStatus;
- (void)_updateImageSizePopup;
- (unsigned char)_attachmentsContainScalableImage:(id)arg1 scalables:(id)arg2;
- (unsigned char)_isAttachmentScalable:(id)arg1;
- (void)updateAttachmentStatus;
- (void)encryptionStatusDidChange;
- (void)messageSizeDidChange:(id)arg1;
- (void)imageSizePopupChanged:(id)arg1;
- (void)_addAttachmentsFromShareKit;
- (BOOL)_isReplyingFromShareKitWithFileAttachments;
- (id)_parsedMessageFromShareDictionary:(id)arg1;
- (void)_showURLPicker;
- (void)_setupDefaultURLState;
- (BOOL)_needsURLPicker;
- (void)_showURLPickerIfNeeded;
- (void)_validateURLPicker;
- (void)_insertUserHTMLDivs;
- (void)_getUserHTMLForEditing;
- (void)_addBaseURLToDocumentIfNeeded;
- (id)_newOriginalSharingSourceURLHTMLString;
- (void)_changeSharedURLToDisplayType:(long long)arg1;
- (void)refreshShareContentsForDisplayType:(long long)arg1;
- (void)URLPickerPopupChanged:(id)arg1;
- (void)setDeliveryAccount:(id)arg1;
- (id)deliveryAccount;
- (void)editSignatures:(id)arg1;
- (void)changeSignature:(id)arg1;
- (void)showImmediately;
- (void)_setUnapprovedRecipients:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)changeReplyMode:(id)arg1;
- (void)_displayPendingAttachmentAlert;
- (void)insertFile:(id)arg1;
- (void)attachFilesAtEnd:(id)arg1;
- (void)alwaysAttachFilesAtEnd:(id)arg1;
- (void)_setSendWindowsFriendlyAttachments:(BOOL)arg1;
- (void)sendWindowsFriendlyAttachments:(id)arg1;
- (void)alwaysSendWindowsFriendlyAttachments:(id)arg1;
- (BOOL)_restoreOriginalAttachments;
- (void)insertOriginalAttachments:(id)arg1;
- (void)removeAttachments:(id)arg1;
- (BOOL)_hasPendingAttachmentReads;
- (id)mimeBodyForAttachmentWithURL:(id)arg1;
- (void)_composePreferencesChanged:(id)arg1;
- (void)updateUIAfterAppleScriptModification:(id)arg1;
- (void)updateWindowContent;
- (void)webViewDidChange:(id)arg1;
- (void)backEndSenderDidChange:(id)arg1;
- (void)backEndDidChange:(id)arg1;
- (BOOL)backEnd:(id)arg1 shouldSaveMessage:(id)arg2;
- (void)backEnd:(id)arg1 willCreateMessageWithHeaders:(id)arg2;
- (void)_saveMessageDueToUserAction:(BOOL)arg1;
- (void)saveMessageToDrafts:(id)arg1;
@property(readonly, nonatomic) BOOL canSave;
- (void)backEndDidSaveMessage:(id)arg1 result:(unsigned int)arg2;
- (void)reportSaveFailure:(id)arg1;
@property(readonly, nonatomic) BOOL hasChanges;
- (void)_setUserSavedMessage:(BOOL)arg1;
@property(readonly, nonatomic) BOOL shouldSave;
- (BOOL)autoSave;
- (void)loadingOverlayDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)backEnd:(id)arg1 didBeginBackgroundLoadActivity:(id)arg2;
- (void)saveSaveAsStationery:(id)arg1;
- (void)cancelSaveAsStationery:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)saveAsStationery:(id)arg1;
- (void)loadStationery:(id)arg1;
- (id)currentStationery;
@property(readonly, nonatomic) BOOL stationeryPaneIsVisible;
- (void)animationDidEnd:(id)arg1;
- (void)_animateStationerySelector:(BOOL)arg1;
- (void)showOrHideStationery:(id)arg1;
- (double)_animationDuration;
- (void)toolbarWillAddItem:(id)arg1;
- (void)_synchronizeIncludeAttachmentsToolbarItem:(id)arg1;
- (void)continueLoadingInitialContent;
- (id)parsedMessageFromSettings:(id)arg1;
- (void)_attachmentFinishedDownloading:(id)arg1;
- (void)backEndDidLoadInitialContent:(id)arg1;
- (void)loadInitialDocumentIntoWebView:(id)arg1;
- (void)_sanitizeHTML;
- (void)_setupSpellingAndGrammarChecking;
- (void)_registerForNotificationsIfNeeded;
- (void)postDocumentEditorDidFinishSetup;
- (void)prepareContent;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (id)_frameSaveName;
- (id)_savedState;
- (id)webView;
- (id)document;
- (BOOL)isModal;
- (id)webMessageDocument;
@property(retain, nonatomic) ComposeBackEnd *backEnd;
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForEncryptionError:(id)arg2;
- (id)missingCertificatesMessageForRecipients:(id)arg1 uponDelivery:(BOOL)arg2;
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForMissingCertificatesForRecipients:(id)arg2;
- (void)cancelModal:(id)arg1;
- (void)reportDeliveryFailure:(id)arg1;
- (void)backEnd:(id)arg1 didCancelMessageDeliveryForError:(id)arg2;
- (void)_setMessageStatusOnOriginalMessage;
- (BOOL)backEnd:(id)arg1 shouldDeliverMessage:(id)arg2;
- (void)backEndDidAppendMessageToOutbox:(id)arg1 result:(unsigned int)arg2;
- (void)backEndDidCancelMessageDeliveryForAttachmentError:(id)arg1;
- (void)_showMailDropAlert:(id)arg1 forMultipleAttachments:(BOOL)arg2;
- (void)sendMessageAfterChecking:(id)arg1;
- (void)send:(id)arg1;
- (void)_determineIfCanSendViaMailDrop:(CDUnknownBlockType)arg1;
- (void)_didToggleComposeFormatInspectorBar;
- (void)_willToggleComposeFormatInspectorBar;
- (void)toggleComposeFormatInspectorBar:(id)arg1;
- (void)updateInspectorBar;
- (void)setShouldDisplayInspectorBar:(BOOL)arg1;
- (BOOL)shouldDisplayInspectorBar;
- (id)_inspectorBarVisibilityKey;
- (void)setHeaders:(id)arg1;
- (void)show;
- (BOOL)_loadEditorNib;
- (void)dealloc;
- (Class)backEndClass;
- (void)finishLoadingEditor;
- (void)performOperationAfterLoad:(id)arg1;
@property(readonly, nonatomic) BOOL isFinishedLoading;
- (id)finishLoadingEditorOperation;
- (id)loadInitialDocumentOperation;
- (id)prepareContentOperation;
- (id)showInterfaceOperation;
- (BOOL)shouldRecordTypeAheadEvents;
- (BOOL)_loadContent;
- (BOOL)load;
- (void)prepareWithSettings:(id)arg1;
- (id)init;
- (id)initWithBackEnd:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 settings:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 settings:(id)arg2 backEnd:(id)arg3;
- (id)initForPendingMessageOfType:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEditingDocumentID:(id)arg1;
@property(readonly, nonatomic) NSUUID *documentID;
- (oneway void)release;
- (void)editVisibleHeaders:(id)arg1;
- (id)_menuForListsItem;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (void)updateSendButtonStateInToolbar;
- (void)toggleReplyType:(unsigned long long)arg1;
- (void)synchronizeChangeReplyItem:(id)arg1 messageType:(unsigned long long)arg2;
- (id)toolbarIdentifier;
- (void)setupFullScreenButtonWidths;
- (void)setupToolbar;
- (BOOL)validateToolbarItem:(id)arg1;

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end

