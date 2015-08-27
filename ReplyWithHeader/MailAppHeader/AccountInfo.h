#import <objc/NSObject.h>

#import "NSTabViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class AccountSummary, IMAPMailboxes, MFMailAccount, NSMutableSet, NSPopUpButton, NSString, NSTabView, NSTabViewItem, NSView, NSWindow, OofPanelController, Quota, SpecialMailboxes;

@interface AccountInfo : NSObject <NSTabViewDelegate, NSWindowDelegate>
{
    NSMutableSet *_tabViewItemsThatHaveBeenSetup;	// 8 = 0x8
    NSWindow *_window;	// 16 = 0x10
    NSView *_topView;	// 24 = 0x18
    NSTabView *_tabView;	// 32 = 0x20
    NSPopUpButton *_accountPopup;	// 40 = 0x28
    NSTabViewItem *_mailboxListTab;	// 48 = 0x30
    NSTabViewItem *_outOfOfficeTab;	// 56 = 0x38
    AccountSummary *_summary;	// 64 = 0x40
    SpecialMailboxes *_specialMailboxes;	// 72 = 0x48
    NSView *_specialMailboxesView;	// 80 = 0x50
    Quota *_quota;	// 88 = 0x58
    OofPanelController *_oofController;	// 96 = 0x60
    IMAPMailboxes *_mailboxes;	// 104 = 0x68
    MFMailAccount *_account;	// 112 = 0x70
    struct CGRect _oldFrame;	// 120 = 0x78
    struct CGRect _newFrame;	// 152 = 0x98
}

+ (void)showForAccount:(id)arg1 withTab:(id)arg2;
@property(nonatomic) struct CGRect newFrame; // @synthesize newFrame=_newFrame;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) IMAPMailboxes *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) OofPanelController *oofController; // @synthesize oofController=_oofController;
@property(retain, nonatomic) Quota *quota; // @synthesize quota=_quota;
@property(retain, nonatomic) NSView *specialMailboxesView; // @synthesize specialMailboxesView=_specialMailboxesView;
@property(retain, nonatomic) SpecialMailboxes *specialMailboxes; // @synthesize specialMailboxes=_specialMailboxes;
@property(retain, nonatomic) AccountSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSTabViewItem *outOfOfficeTab; // @synthesize outOfOfficeTab=_outOfOfficeTab;
@property(retain, nonatomic) NSTabViewItem *mailboxListTab; // @synthesize mailboxListTab=_mailboxListTab;
@property(nonatomic) __weak NSPopUpButton *accountPopup; // @synthesize accountPopup=_accountPopup;
@property(nonatomic) __weak NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)_handleOofError:(id)arg1;
- (void)accountPopupChanged:(id)arg1;
- (void)_showWithTab:(id)arg1;
- (void)_specialMailboxesDidChange:(id)arg1;
- (void)_accountsDidChange:(id)arg1;
- (void)_commitSpecialMailboxesChanges;
- (void)_setupTabViewItem:(id)arg1 oldTabViewItem:(id)arg2;
- (id)_getOwnerFromIdentifier:(id)arg1;
- (void)_setAccount:(id)arg1 setupSelectedTab:(BOOL)arg2;
- (id)_selectedAccount;
- (void)_configureAccountPopupSelectingAccount:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMailAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

