#import <Foundation/NSValueTransformer.h>

@interface EncryptImageValueTransormer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
+ (void)initialize;
- (id)transformedValue:(id)arg1;

@end

