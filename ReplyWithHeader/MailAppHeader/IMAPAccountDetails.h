#import "AccountDetails.h"

@class NSButton, NSTextField;

@interface IMAPAccountDetails : AccountDetails
{
    BOOL _warnedAboutCachingAndIndexing;	// 8 = 0x8
    NSButton *_cachePolicyCheckbox;	// 16 = 0x10
    NSButton *_compactWhenClosing;	// 24 = 0x18
    NSTextField *_serverPathPrefix;	// 32 = 0x20
    NSButton *_useIDLECommand;	// 40 = 0x28
}

@property(nonatomic) BOOL warnedAboutCachingAndIndexing; // @synthesize warnedAboutCachingAndIndexing=_warnedAboutCachingAndIndexing;
@property(nonatomic) __weak NSButton *useIDLECommand; // @synthesize useIDLECommand=_useIDLECommand;
@property(nonatomic) __weak NSTextField *serverPathPrefix; // @synthesize serverPathPrefix=_serverPathPrefix;
@property(nonatomic) __weak NSButton *compactWhenClosing; // @synthesize compactWhenClosing=_compactWhenClosing;
@property(nonatomic) __weak NSButton *cachePolicyCheckbox; // @synthesize cachePolicyCheckbox=_cachePolicyCheckbox;
- (void).cxx_destruct;
- (void)cachePolicyChanged:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end

