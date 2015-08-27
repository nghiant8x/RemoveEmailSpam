#import <AppKit/NSTableHeaderCell.h>

@class MessageListCell;

@interface MessageListHeaderCell : NSTableHeaderCell
{
    unsigned long long _imageAlignment;	// 88 = 0x58
    MessageListCell *_realCell;	// 96 = 0x60
}

@property(retain, nonatomic) MessageListCell *realCell; // @synthesize realCell=_realCell;
- (void).cxx_destruct;
- (void)setImageAlignment:(unsigned long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

