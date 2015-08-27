#import <objc/NSObject.h>

@class NSString;

@interface StationeryDynamicElement : NSObject
{
    NSString *_dateFormat;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
}

+ (id)dynamicElementFromDOMElement:(id)arg1;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)fragmentToReplaceHTMLObjectBackEnd:(id)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

