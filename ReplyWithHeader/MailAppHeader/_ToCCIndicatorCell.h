#import <AppKit/NSTextFieldCell.h>

@interface _ToCCIndicatorCell : NSTextFieldCell
{
}

- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)textColor;
- (id)backgroundColor;
- (BOOL)_isInSelectedRow;
- (BOOL)_isInThreadParentRow;
- (id)_parentRow;
- (id)_darkBackgroundColor;
- (id)_normalBackgroundColor;
- (id)_lightBackgroundColor;

@end

