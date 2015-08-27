#import <objc/NSObject.h>

@class NSArray;

@interface _CellFindStore : NSObject
{
    BOOL _matchesAreValid;	// 8 = 0x8
    NSArray *_matches;	// 16 = 0x10
    struct CGRect _visibleRectInCell;	// 24 = 0x18
    struct CGRect _cellRectInContainingView;	// 56 = 0x38
    struct CGRect _visibleRectInContainingView;	// 88 = 0x58
}

@property(nonatomic) struct CGRect visibleRectInContainingView; // @synthesize visibleRectInContainingView=_visibleRectInContainingView;
@property(nonatomic) struct CGRect cellRectInContainingView; // @synthesize cellRectInContainingView=_cellRectInContainingView;
@property(nonatomic) struct CGRect visibleRectInCell; // @synthesize visibleRectInCell=_visibleRectInCell;
@property(nonatomic) BOOL matchesAreValid; // @synthesize matchesAreValid=_matchesAreValid;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
- (void).cxx_destruct;

@end

