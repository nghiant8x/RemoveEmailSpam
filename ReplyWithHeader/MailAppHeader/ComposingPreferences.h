#import <AppKit/NSPreferencesModule.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"

@class NSButton, NSMatrix, NSPopUpButton, NSString, NSTextField;

@interface ComposingPreferences : NSPreferencesModule <AccountStatusDataSourceDelegate>
{
    BOOL _endEditingSimply;	// 48 = 0x30
    NSPopUpButton *_defaultFormatButton;	// 56 = 0x38
    NSButton *_alwaysCCMyselfSwitch;	// 64 = 0x40
    NSPopUpButton *_ccOrBccButton;	// 72 = 0x48
    NSButton *_replyUsingSameFormatSwitch;	// 80 = 0x50
    NSButton *_expandAliasesSwitch;	// 88 = 0x58
    NSButton *_useQuoteBarsSwitch;	// 96 = 0x60
    NSPopUpButton *_spellCheckingPopUpButton;	// 104 = 0x68
    NSButton *_replyQuotingSwitch;	// 112 = 0x70
    NSMatrix *_quotingBehaviorMatrix;	// 120 = 0x78
    NSTextField *_quotingBehaviorLabel;	// 128 = 0x80
    NSButton *_matchDomainsSwitch;	// 136 = 0x88
    NSTextField *_matchingDomainField;	// 144 = 0x90
    NSPopUpButton *_sendingAccountButton;	// 152 = 0x98
}

@property(nonatomic) BOOL endEditingSimply; // @synthesize endEditingSimply=_endEditingSimply;
@property(nonatomic) __weak NSPopUpButton *sendingAccountButton; // @synthesize sendingAccountButton=_sendingAccountButton;
@property(nonatomic) __weak NSTextField *matchingDomainField; // @synthesize matchingDomainField=_matchingDomainField;
@property(nonatomic) __weak NSButton *matchDomainsSwitch; // @synthesize matchDomainsSwitch=_matchDomainsSwitch;
@property(nonatomic) __weak NSTextField *quotingBehaviorLabel; // @synthesize quotingBehaviorLabel=_quotingBehaviorLabel;
@property(nonatomic) __weak NSMatrix *quotingBehaviorMatrix; // @synthesize quotingBehaviorMatrix=_quotingBehaviorMatrix;
@property(nonatomic) __weak NSButton *replyQuotingSwitch; // @synthesize replyQuotingSwitch=_replyQuotingSwitch;
@property(nonatomic) __weak NSPopUpButton *spellCheckingPopUpButton; // @synthesize spellCheckingPopUpButton=_spellCheckingPopUpButton;
@property(nonatomic) __weak NSButton *useQuoteBarsSwitch; // @synthesize useQuoteBarsSwitch=_useQuoteBarsSwitch;
@property(nonatomic) __weak NSButton *expandAliasesSwitch; // @synthesize expandAliasesSwitch=_expandAliasesSwitch;
@property(nonatomic) __weak NSButton *replyUsingSameFormatSwitch; // @synthesize replyUsingSameFormatSwitch=_replyUsingSameFormatSwitch;
@property(nonatomic) __weak NSPopUpButton *ccOrBccButton; // @synthesize ccOrBccButton=_ccOrBccButton;
@property(nonatomic) __weak NSButton *alwaysCCMyselfSwitch; // @synthesize alwaysCCMyselfSwitch=_alwaysCCMyselfSwitch;
@property(nonatomic) __weak NSPopUpButton *defaultFormatButton; // @synthesize defaultFormatButton=_defaultFormatButton;
- (void).cxx_destruct;
- (void)sendingAccountClicked:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)matchDomainsClicked:(id)arg1;
- (void)_setComposeMode:(long long)arg1;
- (void)defaultMessageFormatChanged:(id)arg1;
- (void)expandAliasesClicked:(id)arg1;
- (void)alwaysCCMyselfClicked:(id)arg1;
- (void)spellCheckingBehaviorChanged:(id)arg1;
- (void)quotingBehaviorChanged:(id)arg1;
- (void)replyQuotingBehaviorChanged:(id)arg1;
- (void)useQuoteBarsClicked:(id)arg1;
- (void)replyUsingSameFormatClicked:(id)arg1;
- (void)initializeFromDefaults;
- (void)_sizeToFitWithinSuperview:(id)arg1;
- (void)_postComposePreferencesChanged;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)configureMenuItem:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

