#import "AccountDetails.h"

@class NSButton, NSTextField;

@interface EWSAccountDetails : AccountDetails
{
    BOOL _warnedAboutCachingAndIndexing;	// 8 = 0x8
    NSButton *_cachePolicyCheckbox;	// 16 = 0x10
    NSTextField *_internalServerPath;	// 24 = 0x18
    NSTextField *_externalServerPath;	// 32 = 0x20
    NSTextField *_externalPortNumber;	// 40 = 0x28
    NSButton *_externalUseSSL;	// 48 = 0x30
}

@property(nonatomic) BOOL warnedAboutCachingAndIndexing; // @synthesize warnedAboutCachingAndIndexing=_warnedAboutCachingAndIndexing;
@property(nonatomic) __weak NSButton *externalUseSSL; // @synthesize externalUseSSL=_externalUseSSL;
@property(nonatomic) __weak NSTextField *externalPortNumber; // @synthesize externalPortNumber=_externalPortNumber;
@property(nonatomic) __weak NSTextField *externalServerPath; // @synthesize externalServerPath=_externalServerPath;
@property(nonatomic) __weak NSTextField *internalServerPath; // @synthesize internalServerPath=_internalServerPath;
@property(nonatomic) __weak NSButton *cachePolicyCheckbox; // @synthesize cachePolicyCheckbox=_cachePolicyCheckbox;
- (void).cxx_destruct;
- (void)cachePolicyChanged:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (id)portFieldForSSLCheckBox:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end

