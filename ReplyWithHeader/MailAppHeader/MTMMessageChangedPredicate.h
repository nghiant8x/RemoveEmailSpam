#import <Foundation/NSPredicate.h>

@interface MTMMessageChangedPredicate : NSPredicate
{
}

+ (id)messageChangedPredicate;
- (BOOL)evaluateWithObject:(id)arg1;

@end

