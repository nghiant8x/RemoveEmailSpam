#import <AppKit/NSButtonCell.h>

@interface _TextButtonCell : NSButtonCell
{
    long long _buttonType;	// 120 = 0x78
}

@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

