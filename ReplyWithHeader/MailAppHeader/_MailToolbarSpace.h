#import <AppKit/NSView.h>

@class MailToolbarSpaceItemWithPin;

@interface _MailToolbarSpace : NSView
{
    BOOL _inPalette;	// 152 = 0x98
    MailToolbarSpaceItemWithPin *_spaceItem;	// 160 = 0xa0
}

@property(readonly, nonatomic) BOOL inPalette; // @synthesize inPalette=_inPalette;
@property(readonly, nonatomic) __weak MailToolbarSpaceItemWithPin *spaceItem; // @synthesize spaceItem=_spaceItem;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSize:(struct CGSize)arg1 forSpaceItem:(id)arg2;

@end

