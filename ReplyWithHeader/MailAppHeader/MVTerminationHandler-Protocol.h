#import "NSObject-Protocol.h"

@class MailApp;

@protocol MVTerminationHandler <NSObject>
- (void)nowWouldBeAGoodTimeToTerminate:(MailApp *)arg1;

@optional
- (BOOL)needsToPromptUserBeforeTermination:(MailApp *)arg1;
@end

