#import <Foundation/NSPredicate.h>

@interface MTMMailboxChangedPredicate : NSPredicate
{
}

+ (id)mailboxChangedPredicate;
- (BOOL)evaluateWithObject:(id)arg1;

@end

