#import <Foundation/NSValueTransformer.h>

@interface SignImageValueTransformer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
+ (void)initialize;
- (id)transformedValue:(id)arg1;

@end

