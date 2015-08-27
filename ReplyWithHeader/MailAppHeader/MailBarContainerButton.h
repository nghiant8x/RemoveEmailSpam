#import <AppKit/NSButton.h>

@interface MailBarContainerButton : NSButton
{
    BOOL _isPerformingSearchScope;	// 172 = 0xac
}

- (BOOL)shouldSetFontSmoothingBackgroundColor;
@property(nonatomic) BOOL isPerformingSearchScope;
- (id)initWithFrame:(struct CGRect)arg1;

@end

