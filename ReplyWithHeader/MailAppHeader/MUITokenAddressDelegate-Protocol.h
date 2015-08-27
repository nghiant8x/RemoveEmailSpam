#import "NSObject-Protocol.h"

@class MUITokenAddress;

@protocol MUITokenAddressDelegate <NSObject>
- (BOOL)tokenAddressIsVIP:(MUITokenAddress *)arg1;
- (void)tokenAddress:(MUITokenAddress *)arg1 didSelectAction:(long long)arg2;
@end

