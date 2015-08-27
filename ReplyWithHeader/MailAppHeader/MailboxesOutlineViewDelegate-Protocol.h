#import "NSOutlineViewDelegate-Protocol.h"

@class MailboxesOutlineView;

@protocol MailboxesOutlineViewDelegate <NSOutlineViewDelegate>

@optional
- (void)outlineViewDidReload:(MailboxesOutlineView *)arg1;
- (void)setFirstResponderAfterMouseDownOnOutlineView:(MailboxesOutlineView *)arg1;
- (void)selectAllInOutlineView:(MailboxesOutlineView *)arg1;
@end

