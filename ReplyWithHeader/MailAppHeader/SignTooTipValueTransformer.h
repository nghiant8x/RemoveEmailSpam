#import <Foundation/NSValueTransformer.h>

@interface SignTooTipValueTransformer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

