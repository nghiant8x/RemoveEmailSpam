#import <AppKit/NSPreferencesModule.h>

#import "EditingMessageWebViewDelegate-Protocol.h"
#import "MVTerminationHandler-Protocol.h"

@class ColorBackgroundView, DeletingTableView, EditingMessageWebView, EditingWebMessageController, HyperlinkEditor, MFMailAccount, NSButton, NSPopUpButton, NSSegmentedControl, NSString, NSTableView, NSTextField, WebArchive;

@interface SignaturePreferences : NSPreferencesModule <EditingMessageWebViewDelegate, MVTerminationHandler>
{
    BOOL _addingNewSignature;	// 48 = 0x30
    BOOL _appIsTerminating;	// 49 = 0x31
    BOOL _loadedInitialHTML;	// 50 = 0x32
    BOOL _currentSignatureHasChanges;	// 51 = 0x33
    DeletingTableView *_signaturesTable;	// 56 = 0x38
    NSTableView *_accountsTable;	// 64 = 0x40
    NSPopUpButton *_selectPopup;	// 72 = 0x48
    ColorBackgroundView *_webViewBackground;	// 80 = 0x50
    EditingMessageWebView *_webView;	// 88 = 0x58
    NSButton *_textRichnessButton;	// 96 = 0x60
    NSTextField *_textRichnessMessageField;	// 104 = 0x68
    NSSegmentedControl *_createOrRemoveButton;	// 112 = 0x70
    NSButton *_placeSignatureAboveQuote;	// 120 = 0x78
    EditingWebMessageController *_controller;	// 128 = 0x80
    MFMailAccount *_selectedAccount;	// 136 = 0x88
    MFMailAccount *_allSignaturesAccount;	// 144 = 0x90
    NSString *_defaultFontName;	// 152 = 0x98
    WebArchive *_savedWebArchive;	// 160 = 0xa0
    HyperlinkEditor *_hyperlinkEditor;	// 168 = 0xa8
}

@property(nonatomic) BOOL currentSignatureHasChanges; // @synthesize currentSignatureHasChanges=_currentSignatureHasChanges;
@property(retain, nonatomic) HyperlinkEditor *hyperlinkEditor; // @synthesize hyperlinkEditor=_hyperlinkEditor;
@property(retain, nonatomic) WebArchive *savedWebArchive; // @synthesize savedWebArchive=_savedWebArchive;
@property(retain, nonatomic) NSString *defaultFontName; // @synthesize defaultFontName=_defaultFontName;
@property(nonatomic) __weak MFMailAccount *allSignaturesAccount; // @synthesize allSignaturesAccount=_allSignaturesAccount;
@property(retain, nonatomic) MFMailAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(nonatomic) BOOL loadedInitialHTML; // @synthesize loadedInitialHTML=_loadedInitialHTML;
@property(nonatomic) BOOL appIsTerminating; // @synthesize appIsTerminating=_appIsTerminating;
@property(nonatomic) BOOL addingNewSignature; // @synthesize addingNewSignature=_addingNewSignature;
@property(retain, nonatomic) EditingWebMessageController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak NSButton *placeSignatureAboveQuote; // @synthesize placeSignatureAboveQuote=_placeSignatureAboveQuote;
@property(nonatomic) __weak NSSegmentedControl *createOrRemoveButton; // @synthesize createOrRemoveButton=_createOrRemoveButton;
@property(nonatomic) __weak NSTextField *textRichnessMessageField; // @synthesize textRichnessMessageField=_textRichnessMessageField;
@property(nonatomic) __weak NSButton *textRichnessButton; // @synthesize textRichnessButton=_textRichnessButton;
@property(nonatomic) __weak EditingMessageWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak ColorBackgroundView *webViewBackground; // @synthesize webViewBackground=_webViewBackground;
@property(nonatomic) __weak NSPopUpButton *selectPopup; // @synthesize selectPopup=_selectPopup;
@property(nonatomic) __weak NSTableView *accountsTable; // @synthesize accountsTable=_accountsTable;
@property(nonatomic) __weak DeletingTableView *signaturesTable; // @synthesize signaturesTable=_signaturesTable;
- (void).cxx_destruct;
- (void)setAllowsRichText:(BOOL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;
- (BOOL)selectionIsInList;
- (void)insertBulletedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (BOOL)allowQuoting;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)truncatingAttributes;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_displaySelectedSignatureDetails;
- (id)_webArchiveForEditedSignature;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didAddMailAttachment:(id)arg2;
- (id)webView:(id)arg1 shouldReplaceSelectionWithWebArchive:(id)arg2 givenAction:(long long)arg3;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_updateWebView;
- (BOOL)_validateValuesInUI;
- (void)placeSignatureAboveQuotedText:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updatePopup;
- (void)webViewDidChange:(id)arg1;
- (void)webViewDidChangeTypingStyle:(id)arg1;
- (void)changeSignatureRichness:(id)arg1;
- (BOOL)allowsRichText;
- (void)_removeSignature:(id)arg1;
- (void)deleteKey:(id)arg1;
- (BOOL)_endEditingOfSignatureOkayToReload:(BOOL)arg1 needsToReload:(char *)arg2;
- (id)_defaultSignatureContentForSelectedAccount;
- (void)_createSignature:(id)arg1;
- (void)createOrRemoveSignature:(id)arg1;
- (void)_defaultFontMayHaveChanged:(id)arg1;
- (void)_determineDefaultFontName;
- (void)awakeFromNib;
- (void)_accountsDidChange:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (BOOL)preferencesWindowShouldClose;
- (void)moduleWillBeRemoved;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)saveChanges;
- (void)initializeFromDefaults;
- (void)defaultSignatureChanged:(id)arg1;
- (void)_validateButtonState;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

