#import <objc/NSObject.h>

@interface FlagIconFactory : NSObject
{
}

+ (BOOL)colorForKey:(id)arg1;
+ (id)displayNameForFlag:(BOOL)arg1;
+ (id)iconForFlag:(BOOL)arg1;
+ (id)colorForFlag:(BOOL)arg1;
- (id)valueForKey:(id)arg1;

@end

