#import <AppKit/NSPopoverColorWell.h>

@interface MailPopoverWell : NSPopoverColorWell
{
}

+ (id)_bezelRenderingButton;
- (struct CGSize)colorSwatchInset;
- (void)awakeFromNib;

@end

