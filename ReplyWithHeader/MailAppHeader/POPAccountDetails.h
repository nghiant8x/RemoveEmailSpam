#import "AccountDetails.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface POPAccountDetails : AccountDetails
{
    NSButton *_deleteMessagesOnServer;	// 8 = 0x8
    NSTextField *_bigMessageWarningSize;	// 16 = 0x10
    NSButton *_removeSeenMessagesButton;	// 24 = 0x18
    NSPopUpButton *_removeIntervalPopup;	// 32 = 0x20
}

@property(nonatomic) __weak NSPopUpButton *removeIntervalPopup; // @synthesize removeIntervalPopup=_removeIntervalPopup;
@property(nonatomic) __weak NSButton *removeSeenMessagesButton; // @synthesize removeSeenMessagesButton=_removeSeenMessagesButton;
@property(nonatomic) __weak NSTextField *bigMessageWarningSize; // @synthesize bigMessageWarningSize=_bigMessageWarningSize;
@property(nonatomic) __weak NSButton *deleteMessagesOnServer; // @synthesize deleteMessagesOnServer=_deleteMessagesOnServer;
- (void).cxx_destruct;
- (void)_deleteServerMessagesStarted:(id)arg1;
- (void)_deleteServerMessagesCompleted:(id)arg1;
- (void)removeMessagesButtonClicked:(id)arg1;
- (void)deleteSeenMessagesNow:(id)arg1;
- (void)warnIfDeleteMessages:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (long long)_popDeletionPolicyFromUI;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAccountClass:(Class)arg1;

@end

