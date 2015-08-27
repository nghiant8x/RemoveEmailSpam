#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface ButtonIconTextCell : NSButtonCell
{
    BOOL _cellEnabled;	// 120 = 0x78
    NSImage *_icon;	// 128 = 0x80
}

@property(nonatomic) BOOL cellEnabled; // @synthesize cellEnabled=_cellEnabled;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGSize)iconSizeForFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

