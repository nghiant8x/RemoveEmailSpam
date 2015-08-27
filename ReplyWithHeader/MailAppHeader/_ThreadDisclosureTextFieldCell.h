#import <AppKit/NSTextFieldCell.h>

@interface _ThreadDisclosureTextFieldCell : NSTextFieldCell
{
    BOOL _threadIsOpen;	// 84 = 0x54
}

@property(nonatomic) BOOL threadIsOpen; // @synthesize threadIsOpen=_threadIsOpen;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)textColor;
- (id)backgroundColor;
- (void)_drawThreadControlWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_threadDisclousureImage;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_textRect;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;

@end

