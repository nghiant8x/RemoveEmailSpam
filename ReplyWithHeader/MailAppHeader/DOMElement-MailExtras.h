#import <WebKit/DOMElement.h>

@interface DOMElement (MailExtras)
- (void)scrollToBottom;
- (BOOL)hasMarginsOfZero;
- (BOOL)isBlockLevelElement;
@end

