#import "_MTMStoredMetaMailbox.h"

@interface _MTMDraftsMailbox : _MTMStoredMetaMailbox
{
}

- (id)_severalMessagesString;
- (id)_oneMesageString;
- (id)defaultMessageColumnAttributesKey;
- (id)messageColumnConfiguration;
- (id)restoreMode;
- (id)recoverDisplayName;
- (id)displayName;

@end

