#import <objc/NSObject.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"

@class AccountStatusDataSource, DocumentEditor, MCError, NSButton, NSPanel, NSString, NSTableView, NSTextField, NSTextView, NSView;

@interface DeliveryFailure : NSObject <AccountStatusDataSourceDelegate>
{
    NSPanel *_panel;	// 8 = 0x8
    NSTextField *_errorLabel;	// 16 = 0x10
    NSTextView *_errorDescriptionLabel;	// 24 = 0x18
    NSView *_contents;	// 32 = 0x20
    NSTableView *_table;	// 40 = 0x28
    NSButton *_tryLaterButton;	// 48 = 0x30
    NSButton *_tryOtherButton;	// 56 = 0x38
    AccountStatusDataSource *_deliveryASDS;	// 64 = 0x40
    DocumentEditor *_editor;	// 72 = 0x48
    MCError *_error;	// 80 = 0x50
}

@property(retain, nonatomic) MCError *error; // @synthesize error=_error;
@property(nonatomic) __weak DocumentEditor *editor; // @synthesize editor=_editor;
@property(readonly, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(nonatomic) __weak NSButton *tryOtherButton; // @synthesize tryOtherButton=_tryOtherButton;
@property(nonatomic) __weak NSButton *tryLaterButton; // @synthesize tryLaterButton=_tryLaterButton;
@property(nonatomic) __weak NSTableView *table; // @synthesize table=_table;
@property(nonatomic) __weak NSView *contents; // @synthesize contents=_contents;
@property(nonatomic) NSTextView *errorDescriptionLabel; // @synthesize errorDescriptionLabel=_errorDescriptionLabel;
@property(nonatomic) __weak NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) NSPanel *panel; // @synthesize panel=_panel;
- (void).cxx_destruct;
- (void)_retile;
- (void)_tile;
- (void)_postDeliveryFailureHappened;
- (void)_deliveryAccountsDidChange:(id)arg1;
- (void)_selectedAccountDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_setDynamicDeliveryAccountForAccount:(id)arg1;
- (void)editServerList:(id)arg1;
- (void)tryOtherAccount:(id)arg1;
- (void)editMessage:(id)arg1;
- (void)sendLater:(id)arg1;
- (void)runChooseAlternateDeliveryAccountSheet;
- (void)reportError:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)editorWillClose;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

