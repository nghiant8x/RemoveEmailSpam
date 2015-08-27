#import "NSWindowDelegate-Protocol.h"

@class FullScreenModalCapableWindow;

@protocol MailFullScreenWindowDelegate <NSWindowDelegate>
- (void)restoreFrame;
- (BOOL)mailFullScreenWindowShouldClose:(id)arg1;
- (FullScreenModalCapableWindow *)windowForMailFullScreen;
@end

