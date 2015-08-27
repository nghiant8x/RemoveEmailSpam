#import "MTMSpecialMailbox.h"

@interface _MTMStoredMetaMailbox : MTMSpecialMailbox
{
}

- (BOOL)_shouldSortMailboxes;
- (id)restoreString;
- (id)paths;
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;
- (void)_updateMessages:(id)arg1;
- (void)_loadMessages;

@end

