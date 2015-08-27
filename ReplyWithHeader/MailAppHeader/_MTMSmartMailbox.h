#import "MTMSpecialMailbox.h"

@interface _MTMSmartMailbox : MTMSpecialMailbox
{
}

- (BOOL)isSmartMailbox;
- (BOOL)enabled;
- (id)messageColumnConfiguration;
- (id)identifier;

@end

