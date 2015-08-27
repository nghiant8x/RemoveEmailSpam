#import "NSTextFieldDelegate-Protocol.h"

@protocol MailboxTextFieldDelegate <NSTextFieldDelegate>

@optional
- (void)mailboxTextFieldEndedEditingSession;
- (void)mailboxTextFieldBeganEditingSession;
@end

