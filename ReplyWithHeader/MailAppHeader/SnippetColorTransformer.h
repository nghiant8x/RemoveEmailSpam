#import <Foundation/NSValueTransformer.h>

@interface SnippetColorTransformer : NSValueTransformer
{
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (id)transformedValue:(id)arg1;

@end

