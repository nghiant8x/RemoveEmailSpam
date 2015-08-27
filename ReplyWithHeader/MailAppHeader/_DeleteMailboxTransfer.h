#import <objc/NSObject.h>

#import "MessageDeletionTransfer-Protocol.h"

@class MCMonitoredInvocation;

@interface _DeleteMailboxTransfer : NSObject <MessageDeletionTransfer>
{
    MCMonitoredInvocation *_invocation;	// 8 = 0x8
}

@property(retain, nonatomic) MCMonitoredInvocation *invocation; // @synthesize invocation=_invocation;
- (void).cxx_destruct;
- (void)beginTransfer;
- (BOOL)canBeginTransfer;

@end

