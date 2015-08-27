#import <AppKit/NSPopUpButton.h>

@class NSLayoutConstraint;

@interface ComposePopUpButton : NSPopUpButton
{
    NSLayoutConstraint *_minimumWidthConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_preferredWidthConstraint;	// 192 = 0xc0
}

@property(retain, nonatomic) NSLayoutConstraint *preferredWidthConstraint; // @synthesize preferredWidthConstraint=_preferredWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // @synthesize minimumWidthConstraint=_minimumWidthConstraint;
- (void).cxx_destruct;
- (void)updateConstraints;

@end

