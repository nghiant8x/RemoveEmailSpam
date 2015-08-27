#import <objc/NSObject.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"
#import "NSStackViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class AccountStatusDataSource, ComposeHeaderRowView, DocumentEditor, MUIAddressField, NSButtonCell, NSMenu, NSMutableArray, NSPopUpButton, NSSegmentedControl, NSStackView, NSString, NSTextField, NSView;

@interface HeadersEditor : NSObject <AccountStatusDataSourceDelegate, NSStackViewDelegate, NSUserInterfaceValidations>
{
    NSMutableArray *_accessoryViewOwners;	// 8 = 0x8
    BOOL _hasChanges;	// 16 = 0x10
    BOOL _registeredForAnimationObservation;	// 17 = 0x11
    BOOL _messageIsToBeSigned;	// 18 = 0x12
    BOOL _messageIsToBeEncrypted;	// 19 = 0x13
    BOOL _canSign;	// 20 = 0x14
    BOOL _canEncrypt;	// 21 = 0x15
    DocumentEditor *_documentEditor;	// 24 = 0x18
    MUIAddressField *_toField;	// 32 = 0x20
    MUIAddressField *_ccField;	// 40 = 0x28
    MUIAddressField *_bccField;	// 48 = 0x30
    MUIAddressField *_replyToField;	// 56 = 0x38
    NSTextField *_subjectField;	// 64 = 0x40
    NSTextField *_toTitle;	// 72 = 0x48
    NSTextField *_ccTitle;	// 80 = 0x50
    NSTextField *_bccTitle;	// 88 = 0x58
    NSTextField *_replyToTitle;	// 96 = 0x60
    NSTextField *_subjectTitle;	// 104 = 0x68
    NSTextField *_fromLabel;	// 112 = 0x70
    NSPopUpButton *_fromPopup;	// 120 = 0x78
    NSTextField *_signatureLabel;	// 128 = 0x80
    NSPopUpButton *_signaturePopup;	// 136 = 0x88
    NSPopUpButton *_priorityPopup;	// 144 = 0x90
    NSView *_signBlock;	// 152 = 0x98
    NSSegmentedControl *_signButton;	// 160 = 0xa0
    NSSegmentedControl *_encryptButton;	// 168 = 0xa8
    NSStackView *_contentStack;	// 176 = 0xb0
    ComposeHeaderRowView *_ccRow;	// 184 = 0xb8
    ComposeHeaderRowView *_bccRow;	// 192 = 0xc0
    ComposeHeaderRowView *_replyToRow;	// 200 = 0xc8
    NSStackView *_subjectStack;	// 208 = 0xd0
    ComposeHeaderRowView *_fromRow;	// 216 = 0xd8
    NSStackView *_fromStack;	// 224 = 0xe0
    ComposeHeaderRowView *_statusRow;	// 232 = 0xe8
    NSMenu *_disclosureMenu;	// 240 = 0xf0
    AccountStatusDataSource *_deliveryASDS;	// 248 = 0xf8
    NSButtonCell *_encryptCell;	// 256 = 0x100
    NSButtonCell *_signCell;	// 264 = 0x108
}

+ (id)keyPathsForValuesAffectingDeliveryAccount;
@property(nonatomic) BOOL canEncrypt; // @synthesize canEncrypt=_canEncrypt;
@property(nonatomic) BOOL canSign; // @synthesize canSign=_canSign;
@property(nonatomic) __weak NSButtonCell *signCell; // @synthesize signCell=_signCell;
@property(nonatomic) __weak NSButtonCell *encryptCell; // @synthesize encryptCell=_encryptCell;
@property(nonatomic) BOOL registeredForAnimationObservation; // @synthesize registeredForAnimationObservation=_registeredForAnimationObservation;
@property(retain, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(retain, nonatomic) NSMenu *disclosureMenu; // @synthesize disclosureMenu=_disclosureMenu;
@property(nonatomic) __weak ComposeHeaderRowView *statusRow; // @synthesize statusRow=_statusRow;
@property(nonatomic) __weak NSStackView *fromStack; // @synthesize fromStack=_fromStack;
@property(nonatomic) __weak ComposeHeaderRowView *fromRow; // @synthesize fromRow=_fromRow;
@property(nonatomic) __weak NSStackView *subjectStack; // @synthesize subjectStack=_subjectStack;
@property(nonatomic) __weak ComposeHeaderRowView *replyToRow; // @synthesize replyToRow=_replyToRow;
@property(nonatomic) __weak ComposeHeaderRowView *bccRow; // @synthesize bccRow=_bccRow;
@property(nonatomic) __weak ComposeHeaderRowView *ccRow; // @synthesize ccRow=_ccRow;
@property(nonatomic) __weak NSStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(nonatomic) __weak NSSegmentedControl *encryptButton; // @synthesize encryptButton=_encryptButton;
@property(nonatomic) __weak NSSegmentedControl *signButton; // @synthesize signButton=_signButton;
@property(nonatomic) __weak NSView *signBlock; // @synthesize signBlock=_signBlock;
@property(nonatomic) __weak NSPopUpButton *priorityPopup; // @synthesize priorityPopup=_priorityPopup;
@property(nonatomic) __weak NSPopUpButton *signaturePopup; // @synthesize signaturePopup=_signaturePopup;
@property(nonatomic) __weak NSTextField *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(nonatomic) __weak NSPopUpButton *fromPopup; // @synthesize fromPopup=_fromPopup;
@property(nonatomic) __weak NSTextField *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(nonatomic) __weak NSTextField *subjectTitle; // @synthesize subjectTitle=_subjectTitle;
@property(nonatomic) __weak NSTextField *replyToTitle; // @synthesize replyToTitle=_replyToTitle;
@property(nonatomic) __weak NSTextField *bccTitle; // @synthesize bccTitle=_bccTitle;
@property(nonatomic) __weak NSTextField *ccTitle; // @synthesize ccTitle=_ccTitle;
@property(nonatomic) __weak NSTextField *toTitle; // @synthesize toTitle=_toTitle;
@property(nonatomic) __weak NSTextField *subjectField; // @synthesize subjectField=_subjectField;
@property(retain, nonatomic) MUIAddressField *replyToField; // @synthesize replyToField=_replyToField;
@property(retain, nonatomic) MUIAddressField *bccField; // @synthesize bccField=_bccField;
@property(retain, nonatomic) MUIAddressField *ccField; // @synthesize ccField=_ccField;
@property(retain, nonatomic) MUIAddressField *toField; // @synthesize toField=_toField;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) __weak DocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
- (void).cxx_destruct;
- (void)_updateFullWidthSeparatorState;
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (id)_newSenderMarkupStringIncludeBrackets:(BOOL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_updateSignButton;
@property(nonatomic) BOOL messageIsToBeSigned; // @synthesize messageIsToBeSigned=_messageIsToBeSigned;
- (void)_updateEncryptButton;
@property(nonatomic) BOOL messageIsToBeEncrypted; // @synthesize messageIsToBeEncrypted=_messageIsToBeEncrypted;
- (void)prepareToCloseWindow;
- (id)_newContentsForClearedField:(id)arg1;
- (void)_clearField:(id)arg1;
- (void)changeSignature:(id)arg1;
- (void)editSignatures:(id)arg1;
- (void)_toggleEncryption;
- (void)securityControlChanged:(id)arg1;
- (void)setMessagePriority:(id)arg1;
- (void)changeFromHeader:(id)arg1;
- (void)_changeHeaderField:(id)arg1;
- (void)_accountStatusDidChange:(id)arg1;
- (id)mailAccount;
- (void)setDeliveryAccount:(id)arg1;
- (void)_setDynamicDeliveryAccountForAccount:(id)arg1;
- (id)deliveryAccount;
- (void)setSelectedAccount:(id)arg1;
- (void)toggleAccountLock:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
- (BOOL)isOkayToSaveMessage:(id)arg1;
- (BOOL)canSignFromAnyAccount;
- (BOOL)messageHasRecipients;
- (void)changeSignatureFrom:(id)arg1 to:(id)arg2;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (void)appendAddressesForToHeader:(id)arg1;
- (void)setHeaders:(id)arg1;
- (BOOL)_headerFieldIsEmpty:(id)arg1;
- (void)_subjectChanged;
- (void)loadHeadersFromBackEnd:(id)arg1;
- (id)_headerKeyForView:(id)arg1;
- (BOOL)_populateField:(id)arg1 withAddressesForKey:(id)arg2;
- (void)_setupAddressField:(id)arg1;
- (void)setAGoodFirstResponder;
- (BOOL)_alwaysBCCMyself;
- (BOOL)_alwaysCCMyself;
- (void)_updateCcOrBccMyselfFieldWithSender:(id)arg1 oldSender:(id)arg2;
- (void)_updateSenderDomainWithSender:(id)arg1;
- (void)updateDeliveryAccountControl:(id)arg1;
- (void)_updateSignatureControlOverridingExistingSignature:(BOOL)arg1;
- (void)_updateFromControl;
- (id)_fromDisplayAddressFromFullAddress:(id)arg1;
- (BOOL)_shouldShowFromView;
- (void)_updateSecurityStateInBackgroundForRecipients:(id)arg1 sender:(id)arg2;
- (void)_updateSecurityControls;
- (void)_updatePriorityPopUp;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)_webViewDidLoadStationery:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)_mailAccountsDidChange:(id)arg1;
- (void)_composePreferencesChanged:(id)arg1;
- (void)_signaturePreferencesChanged:(id)arg1;
- (void)_emailAliasesDidChange:(id)arg1;
- (void)configureButtonsAndPopUps;
- (double)_rowAnimationDuration;
- (void)_animateHeaderRow:(id)arg1 toVisible:(BOOL)arg2;
- (void)_setHeaderRow:(id)arg1 toVisible:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setVisibilityForEncryptionAndSigning:(BOOL)arg1;
- (void)_setVisibilityForSignatureView:(BOOL)arg1;
- (void)_setVisibilityForFromView:(BOOL)arg1;
- (void)_setVisibilityForPriorityControl:(BOOL)arg1;
- (void)setAllHeaderFieldsToEnabled:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

