#import "_MTMSubMetaMailbox.h"

@interface _MTMStoredSubMetaMailbox : _MTMSubMetaMailbox
{
}

- (void)loadNextMessagesWithControllingMailbox:(id)arg1 andFetcher:(id)arg2;
- (void)_updateMessages:(id)arg1;
- (void)_loadMessages;

@end

