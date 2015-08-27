#import <AppKit/NSImageView.h>

@interface FlagButtonImageView : NSImageView
{
    BOOL _selected;	// 192 = 0xc0
    BOOL _displayMouseOverStyle;	// 193 = 0xc1
}

@property(nonatomic) BOOL displayMouseOverStyle; // @synthesize displayMouseOverStyle=_displayMouseOverStyle;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)drawRect:(struct CGRect)arg1;

@end

