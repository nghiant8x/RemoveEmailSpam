#import <AppKit/NSImageCell.h>

@class NSMutableArray;

@interface MultiImageCell : NSImageCell
{
    NSMutableArray *_images;	// 64 = 0x40
    NSMutableArray *_subcells;	// 72 = 0x48
}

- (void).cxx_destruct;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setImageAlignment:(unsigned long long)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)calcDrawInfo:(struct CGRect)arg1;
- (id)_firstImageName;
- (long long)compare:(id)arg1;
- (id)stringValue;
- (void)_addSubcellsWithImages:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)setTitle:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setCellAttribute:(unsigned long long)arg1 to:(long long)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setUsesSingleLineMode:(BOOL)arg1;
- (void)setTruncatesLastVisibleLine:(BOOL)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setControlTint:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setControlView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_multiImageCellCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)init;

@end
