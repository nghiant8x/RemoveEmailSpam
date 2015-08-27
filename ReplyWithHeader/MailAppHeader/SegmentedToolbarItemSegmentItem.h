#import <AppKit/NSToolbarItem.h>

@class SegmentedToolbarItem;

@interface SegmentedToolbarItemSegmentItem : NSToolbarItem
{
    SegmentedToolbarItem *_parent;	// 152 = 0x98
    long long _segmentNumber;	// 160 = 0xa0
}

@property(nonatomic) long long segmentNumber; // @synthesize segmentNumber=_segmentNumber;
@property(nonatomic) __weak SegmentedToolbarItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)setMenu:(id)arg1;
- (void)setImage:(id)arg1;
- (void)_setTag:(long long)arg1;
- (void)setTag:(long long)arg1;
- (void)_setToolTip:(id)arg1;
- (void)setToolTip:(id)arg1;
- (id)menuFormRepresentation;

@end

