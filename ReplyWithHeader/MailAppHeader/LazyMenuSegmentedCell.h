#import <AppKit/NSSegmentedCell.h>

@class NSMutableDictionary;

@interface LazyMenuSegmentedCell : NSSegmentedCell
{
    NSMutableDictionary *_loadedMenus;	// 160 = 0xa0
    CDUnknownBlockType _lazyMenuBlock;	// 168 = 0xa8
}

@property(copy, nonatomic) CDUnknownBlockType lazyMenuBlock; // @synthesize lazyMenuBlock=_lazyMenuBlock;
- (void).cxx_destruct;
- (id)menuForSegment:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

