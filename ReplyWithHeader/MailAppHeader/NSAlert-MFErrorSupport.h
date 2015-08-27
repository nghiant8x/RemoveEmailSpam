#import <AppKit/NSAlert.h>

@interface NSAlert (MFErrorSupport)
+ (id)alertForError:(id)arg1 firstButton:(id)arg2 secondButton:(id)arg3 thirdButton:(id)arg4;
- (void)setKeyEquivalent:(id)arg1 onButtonWithTitle:(id)arg2;
- (void)setEscapeKeyEquivalentOnButtonWithTitle:(id)arg1;
@end

