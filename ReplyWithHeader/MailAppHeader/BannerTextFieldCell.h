#import <AppKit/NSTextFieldCell.h>

@interface BannerTextFieldCell : NSTextFieldCell
{
}

- (void)setAttributedStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)_stringAttributes;
- (void)setBackgroundStyle:(long long)arg1;
- (void)_bannerTextFieldCellCommonInit;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

