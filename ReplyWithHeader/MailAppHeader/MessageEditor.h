#import <objc/NSObject.h>

@interface MessageEditor : NSObject
{
}

+ (id)sharedMessageEditor;
+ (void)initialize;
- (void)setBackEnd:(id)arg1;
- (id)objectSpecifier;
- (void)dealloc;
- (id)init;

@end

