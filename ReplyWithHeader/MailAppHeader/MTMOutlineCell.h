#import <AppKit/NSImageTextFieldCell.h>

@interface MTMOutlineCell : NSImageTextFieldCell
{
    BOOL _enabled;	// 100 = 0x64
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)initTextCell:(id)arg1;
- (id)init;
- (id)initImageCell:(id)arg1;

@end

