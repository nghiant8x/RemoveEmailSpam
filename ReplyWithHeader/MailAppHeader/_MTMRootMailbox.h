#import "MTMSpecialMailbox.h"

@interface _MTMRootMailbox : MTMSpecialMailbox
{
}

- (BOOL)_shouldSortMailboxes;
- (id)messages;

@end

