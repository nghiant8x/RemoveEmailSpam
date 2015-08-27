#import "NSObject-Protocol.h"

@class MCError, MFAccount, MFDatabaseRecoverer, MFMessageStore, NSArray, NSString;

@protocol MFUserAgent <NSObject>
- (void)informUserOfBusyDatabaseWithRecoverer:(MFDatabaseRecoverer *)arg1 diagnosis:(long long *)arg2;
- (void)informUserOfIOErrorWithStateIn:(long long *)arg1;
- (BOOL)openTemporaryAttachments:(NSArray *)arg1 applicationBundle:(NSString *)arg2;
- (void)relaunchAndQuitWithAdditionalArguments:(NSArray *)arg1;
- (void)relaunchAndQuit;
- (BOOL)isTerminating;
- (void)storeBeingInvalidated:(MFMessageStore *)arg1;
- (long long)queryUserForBigMessageAction:(NSString *)arg1;
- (long long)runAlertPanelWithTitle:(NSString *)arg1 firstButtonTitle:(NSString *)arg2 secondButtonTitle:(NSString *)arg3 thirdButtonTitle:(NSString *)arg4 message:(NSString *)arg5;
- (BOOL)queryUserWithMessageText:(NSString *)arg1 informativeText:(NSString *)arg2 defaultButton:(NSString *)arg3 alternateButton:(NSString *)arg4;
- (void)informUserOfError:(MCError *)arg1;
- (void)resetSuppressedAccount:(MFAccount *)arg1;
- (BOOL)renewCredentialsForAccount:(MFAccount *)arg1;
@end

