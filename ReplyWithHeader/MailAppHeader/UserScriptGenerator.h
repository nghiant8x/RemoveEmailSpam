#import <objc/NSObject.h>

@class NSArray;

@interface UserScriptGenerator : NSObject
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (void)dealloc;

@end

