#import "MTMSpecialMailbox.h"

@interface _MTMJunkMailbox : MTMSpecialMailbox
{
}

- (BOOL)enabled;
- (id)defaultMessageColumnAttributesKey;
- (id)displayName;

@end

