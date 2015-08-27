#import <Foundation/NSMoveCommand.h>

@interface MailMoveCommand : NSMoveCommand
{
}

+ (void)_performBackgroundCommand:(id)arg1 copyMessages:(id)arg2 fromStores:(id)arg3 toMailbox:(id)arg4 shouldDelete:(BOOL)arg5;
- (id)performDefaultImplementation;

@end

