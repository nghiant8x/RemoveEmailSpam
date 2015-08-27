#import <Foundation/NSValueTransformer.h>

@interface DateColorTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

