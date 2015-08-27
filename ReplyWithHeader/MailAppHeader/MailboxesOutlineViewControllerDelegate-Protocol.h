#import "NSObject-Protocol.h"

@class NSArray;

@protocol MailboxesOutlineViewControllerDelegate <NSObject>
- (long long)viewerNumber;
- (void)focusMessages;
- (void)selectAllMessages;

@optional
- (void)mailboxSelectionChanged:(NSArray *)arg1;
@end

