#import <Foundation/NSValueTransformer.h>

@interface EncryptToolTipValueTransformer : NSValueTransformer
{
}

+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

