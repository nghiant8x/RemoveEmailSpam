#import "NSObject-Protocol.h"

@class NSString;

@protocol MCActivityTarget <NSObject>

@optional
- (BOOL)isSmartMailbox;
- (NSString *)displayName;
@end

