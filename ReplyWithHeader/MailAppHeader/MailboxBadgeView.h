#import <AppKit/NSButton.h>

@interface MailboxBadgeView : NSButton
{
}

+ (Class)cellClass;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_mailboxBadgeViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

