#import <Foundation/NSValueTransformer.h>

@interface ChildDateColorTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

