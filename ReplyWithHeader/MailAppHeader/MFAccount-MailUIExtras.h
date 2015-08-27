#import <Mail/MFAccount.h>

@interface MFAccount (MailUIExtras)
+ (id)mailAccountOfClass:(Class)arg1 withHostname:(id)arg2 username:(id)arg3;
+ (id)mailAccountWithName:(id)arg1;
+ (BOOL)exchangeAccountExists;
+ (BOOL)_existsAccountOfClass:(Class)arg1;
- (id)authSchemeBindingProxies;
- (void)configureAuthenticationPopUp:(id)arg1 withAuthSchemes:(id)arg2;
- (void)configureAuthenticationPopUp:(id)arg1;
- (void)_addAuthScheme:(id)arg1 toPopUp:(id)arg2;
@end

