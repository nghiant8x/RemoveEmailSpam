#import <AppKit/NSTextView.h>

@interface MessageTextView : NSTextView
{
}

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)saveAs:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)toggleShowControlCharacters:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)acceptsFirstResponder;

@end

