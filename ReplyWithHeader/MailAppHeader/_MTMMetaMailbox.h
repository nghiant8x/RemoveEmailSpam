#import "MTMSpecialMailbox.h"

@interface _MTMMetaMailbox : MTMSpecialMailbox
{
}

- (BOOL)_shouldSortMailboxes;
- (id)subRestoreString;
- (id)restoreString;
- (id)paths;
- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;
- (BOOL)needsToLoadMessagesInBackground;
- (void)_loadMessages;
- (void)discardMailbox;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

