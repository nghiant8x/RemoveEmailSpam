#import "MessageViewer.h"

#import "MVSelectionOwner-Protocol.h"
#import "MailFullScreenWindowDelegate-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class LoadingOverlay, MCMessage, NSArray, NSOperation, NSSet, NSString;

@interface SingleMessageViewer : MessageViewer <MailFullScreenWindowDelegate, MVSelectionOwner, NSDraggingSource, NSToolbarDelegate>
{
    BOOL _nibLoaded;	// 16 = 0x10
    BOOL _nextDeleteShouldMoveToTrash;	// 17 = 0x11
    MCMessage *_initialMessage;	// 24 = 0x18
    NSOperation *_proxyIconOperation;	// 32 = 0x20
    NSOperation *_subjectLoadOperation;	// 40 = 0x28
    NSArray *_selectedMailboxes;	// 48 = 0x30
    NSSet *_hiddenCopies;	// 56 = 0x38
    NSArray *_messagesToDelete;	// 64 = 0x40
    LoadingOverlay *_loadingOverlay;	// 72 = 0x48
}

+ (void)restoreAllViewersFromDefaults;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (id)_createWithSavedAttributes:(id)arg1;
+ (id)_messagesFromDictionary:(id)arg1;
+ (id)_createWithMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4 andAttributes:(id)arg5;
+ (id)newDefaultMessageViewer;
+ (id)toolbarIdentifierForMessageType:(BOOL)arg1 fullScreen:(BOOL)arg2;
+ (id)toolbarIdentifier;
+ (id)viewerForMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4;
+ (id)viewerForPendingMessage;
+ (id)existingSingleMessageViewerForMessage:(id)arg1;
@property(retain, nonatomic) LoadingOverlay *loadingOverlay; // @synthesize loadingOverlay=_loadingOverlay;
@property(retain, nonatomic) NSArray *messagesToDelete; // @synthesize messagesToDelete=_messagesToDelete;
@property(nonatomic) BOOL nextDeleteShouldMoveToTrash; // @synthesize nextDeleteShouldMoveToTrash=_nextDeleteShouldMoveToTrash;
@property(readonly, nonatomic) NSSet *hiddenCopies; // @synthesize hiddenCopies=_hiddenCopies;
@property(nonatomic) BOOL nibLoaded; // @synthesize nibLoaded=_nibLoaded;
@property(retain, nonatomic) NSArray *selectedMailboxes; // @synthesize selectedMailboxes=_selectedMailboxes;
@property(retain, nonatomic) NSOperation *subjectLoadOperation; // @synthesize subjectLoadOperation=_subjectLoadOperation;
@property(retain, nonatomic) NSOperation *proxyIconOperation; // @synthesize proxyIconOperation=_proxyIconOperation;
@property(retain, nonatomic) MCMessage *initialMessage; // @synthesize initialMessage=_initialMessage;
- (void).cxx_destruct;
- (struct CGRect)nonToolbarWindowContentRect;
- (void)revealMessage:(id)arg1;
- (void)setShouldDisplayShowInMailboxLink:(BOOL)arg1;
- (id)messageStore;
- (id)currentDisplayedMessage;
- (void)selectMessages:(id)arg1;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (id)selection;
- (BOOL)_replaceWithEditorForType:(unsigned long long)arg1 action:(SEL)arg2;
- (void)editorDidLoad:(id)arg1;
- (BOOL)send:(id)arg1;
- (void)redirectMessage:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (void)replyToOriginalSender:(id)arg1;
- (void)replyAllMessage:(id)arg1;
- (void)replyMessage:(id)arg1;
- (void)archiveMessages:(id)arg1;
- (void)undeleteMessagesAllowUndo:(BOOL)arg1;
- (void)undeleteMessages:(id)arg1;
- (void)_reallyDeleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)fullScreenDeleteAnimationFinished;
- (void)deleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (BOOL)_displayingSingletonMessage;
- (void)deleteMessages:(id)arg1;
- (void)_noMessagesLeftToDisplay:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messageFlagsDidChange:(id)arg1;
- (void)_messagesWereRemoved:(id)arg1;
- (BOOL)shouldDeleteMessagesGivenCurrentState;
- (BOOL)shouldDeleteMessageGivenCurrentState;
- (BOOL)_isViewingMessage:(id)arg1;
- (void)updateToolbar;
- (void)setupToolbar;
- (void)selectMailbox:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)selectedMessages;
- (void)resignAsSelectionOwner;
- (void)takeOverAsSelectionOwner;
- (void)saveDefaultWindowState;
- (id)dictionaryRepresentation;
- (void)_restoreViewer;
- (void)showAndMakeKey:(BOOL)arg1;
- (void)_setupFromAttributes;
- (void)_adjustNewSingleViewerWindowFrame;
- (void)_setWindowFrameFromDefaults;
- (id)_messageIDDictionaryRepresentationOf:(id)arg1;
- (void)_addMessageIDsFrom:(id)arg1 toDictionary:(id)arg2;
- (id)expandedSelectedMailboxesAllowingSearch;
- (id)expandedSelectedMailboxes;
- (id)messagesIncludingHiddenCopies:(id)arg1;
- (void)dealloc;
- (void)initFullScreenController;
- (id)initWithMailboxes:(id)arg1;
- (id)initPlainWithAttributes:(id)arg1;
- (void)_setUpForMessage:(id)arg1 showRelatedMessages:(BOOL)arg2;
- (void)setMessageToView:(id)arg1;
- (id)initForViewingMessage:(id)arg1 hiddenCopies:(id)arg2 showRelatedMessages:(BOOL)arg3 expandedSelectedMailboxes:(id)arg4 withAttributes:(id)arg5;
- (void)loadMessageWindowNib;
- (void)_openEnclosingMailbox:(id)arg1;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (BOOL)window:(id)arg1 shouldDragDocumentWithEvent:(id)arg2 from:(struct CGPoint)arg3 withPasteboard:(id)arg4;
- (id)filenameToDrag:(id)arg1;
- (void)_reallyUpdateWindowTitle:(id)arg1;
- (void)updateWindowTitle:(id)arg1;
- (void)_updateWindowProxy:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldCloseForDelete;
- (BOOL)windowShouldClose:(id)arg1;
- (void)restoreFrame;
- (BOOL)mailFullScreenWindowShouldClose:(id)arg1;
- (id)windowForMailFullScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
