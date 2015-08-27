#import "MTMSpecialMailbox.h"

@interface _MTMAccountMailbox : MTMSpecialMailbox
{
}

- (id)identifier;
- (id)subRestoreString;
- (id)restoreString;
- (id)recoverDisplayName;
- (id)displayName;

@end

