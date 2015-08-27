#import "NSObject-Protocol.h"

@class MFAccount, NSMenuItem;

@protocol AccountStatusDataSourceDelegate <NSObject>

@optional
- (void)configureMenuItem:(NSMenuItem *)arg1 forAccount:(MFAccount *)arg2;
- (void)showConnectionDoctor:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(MFAccount *)arg2;
- (void)toggleAccountLock:(id)arg1;
- (void)addServer:(id)arg1;
- (void)setSelectedAccount:(MFAccount *)arg1;
@end

