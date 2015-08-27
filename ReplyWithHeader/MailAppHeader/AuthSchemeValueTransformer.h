#import <Foundation/NSValueTransformer.h>

@interface AuthSchemeValueTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end

