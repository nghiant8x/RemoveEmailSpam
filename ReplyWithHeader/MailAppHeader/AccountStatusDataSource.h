#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MFAccount, MFAccountStatus, NSArray, NSMutableDictionary, NSPopUpButton, NSString, NSTableView, NSTextView;
@protocol AccountStatusDataSourceDelegate;

@interface AccountStatusDataSource : NSObject <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableDictionary *_progressIndicators;	// 8 = 0x8
    MFAccountStatus *_statusProvider;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    MFAccount *_selectedAccount;	// 32 = 0x20
    MFAccount *_dynamicAccount;	// 40 = 0x28
    BOOL _allowNone;	// 48 = 0x30
    BOOL _allowEditServerList;	// 49 = 0x31
    BOOL _omitStatus;	// 50 = 0x32
    BOOL _selectedAccountIsLocked;	// 51 = 0x33
    BOOL _delegateWantsTableDataSourceInvocations;	// 52 = 0x34
    BOOL _allowAccountLocking;	// 53 = 0x35
    BOOL _beConservative;	// 54 = 0x36
    BOOL _disabled;	// 55 = 0x37
    BOOL _usesOfflineStatusString;	// 56 = 0x38
    id <AccountStatusDataSourceDelegate> _delegate;	// 64 = 0x40
    NSPopUpButton *_popUp;	// 72 = 0x48
    NSTableView *_table;	// 80 = 0x50
    NSTextView *_ispInfoField;	// 88 = 0x58
    unsigned long long _accountFlags;	// 96 = 0x60
}

+ (id)keyPathsForValuesAffectingTotalNumberOfAccounts;
@property(nonatomic) BOOL usesOfflineStatusString; // @synthesize usesOfflineStatusString=_usesOfflineStatusString;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long accountFlags; // @synthesize accountFlags=_accountFlags;
@property(nonatomic) NSTextView *ispInfoField; // @synthesize ispInfoField=_ispInfoField;
@property(retain, nonatomic) NSTableView *table; // @synthesize table=_table;
@property(retain, nonatomic) NSPopUpButton *popUp; // @synthesize popUp=_popUp;
@property(nonatomic) __weak id <AccountStatusDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL beConservative; // @synthesize beConservative=_beConservative;
@property BOOL allowAccountLocking; // @synthesize allowAccountLocking=_allowAccountLocking;
@property BOOL delegateWantsTableDataSourceInvocations; // @synthesize delegateWantsTableDataSourceInvocations=_delegateWantsTableDataSourceInvocations;
@property BOOL selectedAccountIsLocked; // @synthesize selectedAccountIsLocked=_selectedAccountIsLocked;
@property BOOL omitStatus; // @synthesize omitStatus=_omitStatus;
@property BOOL allowEditServerList; // @synthesize allowEditServerList=_allowEditServerList;
@property BOOL allowNone; // @synthesize allowNone=_allowNone;
- (void).cxx_destruct;
- (void)_updateUIWithAccountState:(id)arg1;
- (void)_updateUI;
- (void)_removeUI:(id)arg1;
- (void)_addUI:(id)arg1;
- (void)_reloadAccounts:(id)arg1;
- (void)_accountInfoDidChange:(id)arg1;
- (void)_didUpdateAccountStatus:(id)arg1;
- (void)_willRefreshStatusForAllAccounts:(id)arg1;
- (void)_tableViewDoubleClickAction:(id)arg1;
- (void)_removeAllIndicators:(id)arg1;
- (id)_accountForTableRow:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (unsigned long long)tableRowIndexOfAccount:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewWillHide:(id)arg1;
- (void)tableViewWillBecomeVisible:(id)arg1;
- (void)configureTable:(id)arg1 ispInfoField:(id)arg2 handleDoubleClick:(BOOL)arg3 useOfflineStatusString:(BOOL)arg4;
- (void)toggleAccountLock:(id)arg1;
- (void)editServerList:(id)arg1;
- (void)_selectAccount:(id)arg1;
- (void)_synchronizePopUpWithSelectedAccount;
- (void)_popUpButtonWillPopUp:(id)arg1;
- (void)_configureMenuItem:(id)arg1 forAccount:(id)arg2;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (unsigned long long)menuItemIndexOfAccount:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)configurePopUpButton:(id)arg1;
- (void)disable;
- (void)enable;
- (void)refresh;
- (id)_displayStringWithOfflineStatusForAccount:(id)arg1;
- (void)_resetObservedAccounts;
@property(readonly, nonatomic) unsigned long long totalNumberOfAccounts;
- (void)selectAnyAccount;
@property(retain) MFAccount *selectedAccount;
@property(retain) MFAccount *dynamicAccount;
@property(copy) NSArray *accounts;
@property(retain) MFAccountStatus *statusProvider;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 forAccounts:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

