#import <objc/NSObject.h>

@class IAPasswordUIController, NSCondition, NSMutableArray, NSMutableSet, NSOperationQueue;

@interface CredentialRenewalManager : NSObject
{
    NSMutableArray *_pendingAccounts;	// 8 = 0x8
    NSMutableSet *_suppressedAccounts;	// 16 = 0x10
    NSCondition *_credentialChanged;	// 24 = 0x18
    long long _lastRenewResultType;	// 32 = 0x20
    union {
        long long accountCredentialRenewResult;
        long long passwordUIControllerResult;
    } _lastRenewResult;	// 40 = 0x28
    id _renewingCredentialsLock;	// 48 = 0x30
    BOOL _isRenewingCredentials;	// 56 = 0x38
    IAPasswordUIController *_passwordController;	// 64 = 0x40
    NSOperationQueue *_passwordChangeQueue;	// 72 = 0x48
}

+ (void)resetSuppressedAccount:(id)arg1;
+ (void)resetSuppressedAccounts;
+ (BOOL)isShowingPasswordUI;
+ (BOOL)renewCredentialsForAccount:(id)arg1;
+ (id)_credentialRenewerInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *passwordChangeQueue; // @synthesize passwordChangeQueue=_passwordChangeQueue;
@property(retain) IAPasswordUIController *passwordController; // @synthesize passwordController=_passwordController;
- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_accountChanged:(id)arg1;
- (void)_mainWindowChanged:(id)arg1;
- (BOOL)_waitForCredentialRenewalCompletion:(id)arg1;
- (BOOL)_isSuppressedAccount:(id)arg1;
- (void)_resetSuppressedAccount:(id)arg1;
- (void)_resetAllSuppressedAccounts;
- (void)_renewalDidFinish;
- (void)_finalizeRenewalResult:(long long)arg1 renewalType:(long long)arg2 forAccount:(id)arg3;
- (void)_displayPasswordUIForAccount:(id)arg1;
- (void)_renewCredentialsForAccount:(id)arg1 parentAccount:(id)arg2 accountStore:(id)arg3;
- (void)_renewCredentialsForFirstPendingAccountIfNeeded;
- (BOOL)_renewCredentialsForAccount:(id)arg1;
- (void)dealloc;
- (id)init;

@end

