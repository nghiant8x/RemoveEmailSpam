#import <AppKit/NSTextField.h>

@interface MailboxTextField : NSTextField
{
}

- (BOOL)canBecomeKeyView;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_mailboxTextFieldCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

