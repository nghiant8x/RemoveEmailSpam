#import "NSObject-Protocol.h"

@class NSMenu, NSTableHeaderView;

@protocol MailTableViewDelegateDelegate <NSObject>

@optional
- (NSMenu *)tableHeaderViewGetDefaultMenu:(NSTableHeaderView *)arg1;
@end

