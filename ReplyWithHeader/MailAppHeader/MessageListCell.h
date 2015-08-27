#import <AppKit/NSImageCell.h>

@class NSString, NSTextFieldCell;

@interface MessageListCell : NSImageCell
{
    NSTextFieldCell *_textCell;	// 64 = 0x40
    int _contentType;	// 72 = 0x48
    double _maxHeight;	// 80 = 0x50
    double _maxWidth;	// 88 = 0x58
    unsigned long long _contentCount;	// 96 = 0x60
    NSString *_stringValue;	// 104 = 0x68
}

@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (void).cxx_destruct;
- (struct _NSRange)accessibilitySelectedTextRange;
- (id)accessibilitySelectedText;
- (long long)accessibilityNumberOfCharacters;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isRepresentedAsButton;
- (BOOL)isRepresentedAsStaticText;
- (id)contentValue;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)setObjectValue:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGPoint)_drawOriginForSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)_imageSizeForCellFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)_textCell;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

