#import <objc/NSObject.h>

@interface TableViewScrollState : NSObject
{
    long long _type;	// 8 = 0x8
    long long _pinnedRow;	// 16 = 0x10
    double _offsetFromTop;	// 24 = 0x18
}

@property(nonatomic) double offsetFromTop; // @synthesize offsetFromTop=_offsetFromTop;
@property(nonatomic) long long pinnedRow; // @synthesize pinnedRow=_pinnedRow;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

