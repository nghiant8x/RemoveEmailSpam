#import <AppKit/NSPreferencesModule.h>

@class NSButton, NSColor, NSMatrix;

@interface JunkPreferences : NSPreferencesModule
{
    long long _junkMailBehavior;	// 48 = 0x30
    NSButton *_advancedButton;	// 56 = 0x38
    NSMatrix *_junkMailMode;	// 64 = 0x40
    NSButton *_junkMailOnOffSwitch;	// 72 = 0x48
    NSMatrix *_junkMailWhitelist;	// 80 = 0x50
}

+ (id)keyPathsForValuesAffectingIsAdvancedEnabled;
+ (id)keyPathsForValuesAffectingIsEnabled;
+ (id)keyPathsForValuesAffectingLabelColor;
@property(nonatomic) __weak NSMatrix *junkMailWhitelist; // @synthesize junkMailWhitelist=_junkMailWhitelist;
@property(nonatomic) __weak NSButton *junkMailOnOffSwitch; // @synthesize junkMailOnOffSwitch=_junkMailOnOffSwitch;
@property(nonatomic) __weak NSMatrix *junkMailMode; // @synthesize junkMailMode=_junkMailMode;
@property(nonatomic) __weak NSButton *advancedButton; // @synthesize advancedButton=_advancedButton;
- (void).cxx_destruct;
- (void)showCustomJunkMailSettings:(id)arg1;
- (void)resetJunkMailMap:(id)arg1;
- (void)changeJunkMailBehavior:(id)arg1;
@property(readonly, nonatomic) BOOL isAdvancedEnabled;
@property(readonly, nonatomic) BOOL isEnabled;
@property(nonatomic) long long junkMailBehavior;
- (void)whitelistChanged:(id)arg1;
- (void)junkMailToggled:(id)arg1;
- (void)initializeFromDefaults;
@property(readonly, nonatomic) NSColor *labelColor;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)_messageRuleChanged:(id)arg1;
- (BOOL)isResizable;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;

@end

