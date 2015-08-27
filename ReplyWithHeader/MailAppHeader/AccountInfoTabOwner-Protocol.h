#import "NSObject-Protocol.h"

@class AccountInfo, NSView;

@protocol AccountInfoTabOwner <NSObject>
- (NSView *)view;
- (void)accountInfoWillShowView:(AccountInfo *)arg1;
- (void)accountInfoWillHideView:(AccountInfo *)arg1;
@end

