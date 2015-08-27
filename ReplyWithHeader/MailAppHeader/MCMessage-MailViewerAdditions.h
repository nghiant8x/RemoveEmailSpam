#import <MailCore/MCMessage.h>

@interface MCMessage (MailViewerAdditions)
- (void)handleBounceMessage:(id)arg1;
- (id)handleRedirectMessage:(id)arg1;
- (id)handleForwardMessage:(id)arg1;
- (id)handleReplyToMessage:(id)arg1;
- (void)handleOpenAppleEvent:(id)arg1;
@end

