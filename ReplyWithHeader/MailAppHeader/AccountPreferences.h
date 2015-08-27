#import <AppKit/NSPreferencesModule.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSTabViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class AccountDetails, AccountStatusDataSource, MFMailAccount, NSButton, NSIndexSet, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSSecureTextField, NSSegmentedControl, NSString, NSTabView, NSTableView, NSTextField, NSTextView, NSView;

@interface AccountPreferences : NSPreferencesModule <AccountStatusDataSourceDelegate, MVTerminationHandler, NSTableViewDataSource, NSTableViewDelegate, NSTabViewDelegate>
{
    NSMutableArray *_accounts;	// 48 = 0x30
    NSMutableDictionary *_userEnteredInfo;	// 56 = 0x38
    BOOL _accountBeingEditedWasEnabledWhenEditingStarted;	// 64 = 0x40
    BOOL _creatingNewAccount;	// 65 = 0x41
    BOOL _passwordFieldHasBeenTouched;	// 66 = 0x42
    BOOL _userWantsToQuit;	// 67 = 0x43
    BOOL _userWantsToClosePrefsPanel;	// 68 = 0x44
    BOOL _userWantsToChangeSelection;	// 69 = 0x45
    BOOL _userWantsToCreateNewAccount;	// 70 = 0x46
    BOOL _userWantsToOpenNewAccountAssistant;	// 71 = 0x47
    BOOL _ignoreTableViewSelectionCallbacks;	// 72 = 0x48
    BOOL _registeredForNotifications;	// 73 = 0x49
    BOOL _lastPopupSelectionWasAOS;	// 74 = 0x4a
    NSTextField *_passwordLabel;	// 80 = 0x50
    NSTabView *_detailTabView;	// 88 = 0x58
    NSTableView *_accountsTable;	// 96 = 0x60
    NSSegmentedControl *_addRemoveAccountControl;	// 104 = 0x68
    NSButton *_helpButton;	// 112 = 0x70
    NSButton *_enableAccountCheckbox;	// 120 = 0x78
    NSPopUpButton *_accountTypePopup;	// 128 = 0x80
    NSTextField *_accountTypeString;	// 136 = 0x88
    NSTextField *_accountName;	// 144 = 0x90
    NSTextField *_fullNameField;	// 152 = 0x98
    NSTextField *_emailAddressField;	// 160 = 0xa0
    NSTextField *_username;	// 168 = 0xa8
    NSTextField *_hostnameLabel;	// 176 = 0xb0
    NSTextField *_hostname;	// 184 = 0xb8
    NSTextField *_externalHostnameLabel;	// 192 = 0xc0
    NSTextField *_externalHostname;	// 200 = 0xc8
    NSSecureTextField *_password;	// 208 = 0xd0
    NSTextField *_deliveryAccountLabel;	// 216 = 0xd8
    NSPopUpButton *_smtpAccountPopup;	// 224 = 0xe0
    NSButton *_lockDeliveryAccountButton;	// 232 = 0xe8
    NSView *_outlookWebAccessView;	// 240 = 0xf0
    NSTextField *_outlookWebAccessServerName;	// 248 = 0xf8
    NSTextField *_aliasLabel;	// 256 = 0x100
    NSPopUpButton *_aliasPopup;	// 264 = 0x108
    NSView *_tlsCertificatesView;	// 272 = 0x110
    NSPopUpButton *_tlsCertificatesPopup;	// 280 = 0x118
    NSTextView *_accountSupportURLField;	// 288 = 0x120
    AccountDetails *_accountDetails;	// 296 = 0x128
    AccountStatusDataSource *_deliveryASDS;	// 304 = 0x130
    MFMailAccount *_accountBeingEdited;	// 312 = 0x138
    MFMailAccount *_accountBeingValidated;	// 320 = 0x140
    long long _indexOfNewAccount;	// 328 = 0x148
    NSIndexSet *_selectedRows;	// 336 = 0x150
    NSString *_selectedToolbarIdentifier;	// 344 = 0x158
}

+ (id)ispAccountInfoOfSelectedItemInAccountTypePopup:(id)arg1;
+ (Class)accountClassOfSelectedItemInAccountTypePopup:(id)arg1;
+ (void)selectAccoutType:(Class)arg1 inTypePopup:(id)arg2;
+ (void)configureAccountTypePopUp:(id)arg1;
+ (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
+ (void)focusAccount:(id)arg1;
+ (void)initialize;
+ (void)_addAccountType:(id)arg1 class:(Class)arg2;
@property(nonatomic) BOOL lastPopupSelectionWasAOS; // @synthesize lastPopupSelectionWasAOS=_lastPopupSelectionWasAOS;
@property(nonatomic) BOOL registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) BOOL ignoreTableViewSelectionCallbacks; // @synthesize ignoreTableViewSelectionCallbacks=_ignoreTableViewSelectionCallbacks;
@property(copy, nonatomic) NSString *selectedToolbarIdentifier; // @synthesize selectedToolbarIdentifier=_selectedToolbarIdentifier;
@property(copy, nonatomic) NSIndexSet *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(nonatomic) BOOL userWantsToOpenNewAccountAssistant; // @synthesize userWantsToOpenNewAccountAssistant=_userWantsToOpenNewAccountAssistant;
@property(nonatomic) BOOL userWantsToCreateNewAccount; // @synthesize userWantsToCreateNewAccount=_userWantsToCreateNewAccount;
@property(nonatomic) BOOL userWantsToChangeSelection; // @synthesize userWantsToChangeSelection=_userWantsToChangeSelection;
@property(nonatomic) BOOL userWantsToClosePrefsPanel; // @synthesize userWantsToClosePrefsPanel=_userWantsToClosePrefsPanel;
@property(nonatomic) BOOL userWantsToQuit; // @synthesize userWantsToQuit=_userWantsToQuit;
@property(nonatomic) long long indexOfNewAccount; // @synthesize indexOfNewAccount=_indexOfNewAccount;
@property(nonatomic) BOOL passwordFieldHasBeenTouched; // @synthesize passwordFieldHasBeenTouched=_passwordFieldHasBeenTouched;
@property(nonatomic) BOOL creatingNewAccount; // @synthesize creatingNewAccount=_creatingNewAccount;
@property(nonatomic) BOOL accountBeingEditedWasEnabledWhenEditingStarted; // @synthesize accountBeingEditedWasEnabledWhenEditingStarted=_accountBeingEditedWasEnabledWhenEditingStarted;
@property(retain, nonatomic) MFMailAccount *accountBeingValidated; // @synthesize accountBeingValidated=_accountBeingValidated;
@property(retain, nonatomic) MFMailAccount *accountBeingEdited; // @synthesize accountBeingEdited=_accountBeingEdited;
@property(retain, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(retain, nonatomic) AccountDetails *accountDetails; // @synthesize accountDetails=_accountDetails;
@property(nonatomic) NSTextView *accountSupportURLField; // @synthesize accountSupportURLField=_accountSupportURLField;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatesPopup; // @synthesize tlsCertificatesPopup=_tlsCertificatesPopup;
@property(nonatomic) __weak NSView *tlsCertificatesView; // @synthesize tlsCertificatesView=_tlsCertificatesView;
@property(nonatomic) __weak NSPopUpButton *aliasPopup; // @synthesize aliasPopup=_aliasPopup;
@property(nonatomic) __weak NSTextField *aliasLabel; // @synthesize aliasLabel=_aliasLabel;
@property(nonatomic) __weak NSTextField *outlookWebAccessServerName; // @synthesize outlookWebAccessServerName=_outlookWebAccessServerName;
@property(nonatomic) __weak NSView *outlookWebAccessView; // @synthesize outlookWebAccessView=_outlookWebAccessView;
@property(nonatomic) __weak NSButton *lockDeliveryAccountButton; // @synthesize lockDeliveryAccountButton=_lockDeliveryAccountButton;
@property(nonatomic) __weak NSPopUpButton *smtpAccountPopup; // @synthesize smtpAccountPopup=_smtpAccountPopup;
@property(nonatomic) __weak NSTextField *deliveryAccountLabel; // @synthesize deliveryAccountLabel=_deliveryAccountLabel;
@property(nonatomic) __weak NSSecureTextField *password; // @synthesize password=_password;
@property(nonatomic) __weak NSTextField *externalHostname; // @synthesize externalHostname=_externalHostname;
@property(nonatomic) __weak NSTextField *externalHostnameLabel; // @synthesize externalHostnameLabel=_externalHostnameLabel;
@property(nonatomic) __weak NSTextField *hostname; // @synthesize hostname=_hostname;
@property(nonatomic) __weak NSTextField *hostnameLabel; // @synthesize hostnameLabel=_hostnameLabel;
@property(nonatomic) __weak NSTextField *username; // @synthesize username=_username;
@property(nonatomic) __weak NSTextField *emailAddressField; // @synthesize emailAddressField=_emailAddressField;
@property(nonatomic) __weak NSTextField *fullNameField; // @synthesize fullNameField=_fullNameField;
@property(nonatomic) __weak NSTextField *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) __weak NSTextField *accountTypeString; // @synthesize accountTypeString=_accountTypeString;
@property(nonatomic) __weak NSPopUpButton *accountTypePopup; // @synthesize accountTypePopup=_accountTypePopup;
@property(nonatomic) __weak NSButton *enableAccountCheckbox; // @synthesize enableAccountCheckbox=_enableAccountCheckbox;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(nonatomic) __weak NSTableView *accountsTable; // @synthesize accountsTable=_accountsTable;
@property(nonatomic) __weak NSTabView *detailTabView; // @synthesize detailTabView=_detailTabView;
@property(nonatomic) __weak NSTextField *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
- (void).cxx_destruct;
- (Class)_classForNewAccount;
- (id)_nameForNewAccount;
- (void)controlTextDidChange:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_accountAtRow:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
- (void)editAliases:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)customAlias:(id)arg1;
- (void)accountTypeChanged:(id)arg1;
- (void)_accountTypePopupWillPopup:(id)arg1;
- (BOOL)_newSettingsAreValid;
- (void)_synchronizeAliasPopup;
- (void)_updateAliasPopup;
- (void)_updateAccountTypePopup;
- (void)_setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)_saveAccountBeingEdited;
- (void)_runAccountDetailPanelForAccount:(id)arg1;
- (void)_setupUIForAccountBeingEdited;
- (void)_reloadDeliveryAccountPopup:(id)arg1;
- (void)_clearAccountUI;
- (void)_setUIElementsEnabled:(BOOL)arg1;
- (void)_tableDidResize:(id)arg1;
- (BOOL)_allowSwitchingAwayFromSelectedAccount;
- (void)_handleRequestToSwitchAwayFromSelectedAccountWithResponse:(BOOL)arg1;
- (BOOL)_isAccountInformationDirty;
- (void)editMailAccount:(id)arg1;
- (void)editAccount:(id)arg1;
- (void)_removeAccountBeingCreated;
- (void)addRemoveAccountClick:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)toggleIncludeWhenCheckingForNewMail:(id)arg1;
- (void)toggleAccountEnabled:(id)arg1;
- (void)_saveAccountInfo;
- (BOOL)preferencesWindowShouldClose;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWasInstalled;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)initializeFromDefaults;
- (id)init;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)_accountDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

