#import "NSObject-Protocol.h"

@class MailboxOutlineItemView, NSImage;

@protocol MailboxOutlineItemViewDelegate <NSObject>
- (NSImage *)mailboxOutlineItemViewShouldDisplayImage:(MailboxOutlineItemView *)arg1;
@end

