#import <objc/NSObject.h>

@class MCAuthScheme, MFMailAccount, NSButton, NSPopUpButton, NSTextField, NSView, SpecialMailboxes;

@interface AccountDetails : NSObject
{
    Class _accountClass;	// 8 = 0x8
    NSView *_detailView;	// 16 = 0x10
    NSTextField *_portNumberField;	// 24 = 0x18
    NSButton *_configureDynamically;	// 32 = 0x20
    NSButton *_autoFetch;	// 40 = 0x28
    NSButton *_sslSwitch;	// 48 = 0x30
    NSButton *_useMailDrop;	// 56 = 0x38
    NSPopUpButton *_authenticationPopup;	// 64 = 0x40
    NSButton *_allowInsecureAuthentication;	// 72 = 0x48
    MFMailAccount *_account;	// 80 = 0x50
    SpecialMailboxes *_specialMailboxes;	// 88 = 0x58
    MCAuthScheme *_authScheme;	// 96 = 0x60
}

+ (id)accountDetailsNibName;
+ (id)accountDetailsForAccountClass:(Class)arg1;
@property(nonatomic) __weak MCAuthScheme *authScheme; // @synthesize authScheme=_authScheme;
@property(retain, nonatomic) SpecialMailboxes *specialMailboxes; // @synthesize specialMailboxes=_specialMailboxes;
@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak NSButton *allowInsecureAuthentication; // @synthesize allowInsecureAuthentication=_allowInsecureAuthentication;
@property(nonatomic) __weak NSPopUpButton *authenticationPopup; // @synthesize authenticationPopup=_authenticationPopup;
@property(nonatomic) __weak NSButton *useMailDrop; // @synthesize useMailDrop=_useMailDrop;
@property(nonatomic) __weak NSButton *sslSwitch; // @synthesize sslSwitch=_sslSwitch;
@property(nonatomic) __weak NSButton *autoFetch; // @synthesize autoFetch=_autoFetch;
@property(nonatomic) __weak NSButton *configureDynamically; // @synthesize configureDynamically=_configureDynamically;
@property(nonatomic) __weak NSTextField *portNumberField; // @synthesize portNumberField=_portNumberField;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)_specialMailboxesDidChange:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)sslChanged:(id)arg1;
- (id)portFieldForSSLCheckBox:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (id)setupSpecialMailboxesUIFromValuesInAccount:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setupAccountFromValuesInSpecialMailboxesUI:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (Class)accountClass;
- (void)dealloc;
- (id)init;
- (id)initWithAccountClass:(Class)arg1;

@end

