#import "NSObject-Protocol.h"

@class MFMailbox, NSString;

@protocol MailboxOutlineItemControllerDelegate <NSObject>
- (void)mailbox:(MFMailbox *)arg1 nameUpdated:(NSString *)arg2;
- (unsigned long long)badgeCountForItem:(id)arg1;
@end

