#import <AppKit/NSView.h>

@class NSArray, NSColor, NSGradient, NSImage;

@interface ColorBackgroundView : NSView
{
    NSColor *_color;	// 152 = 0x98
    NSImage *_image;	// 160 = 0xa0
    NSArray *_colors;	// 168 = 0xa8
    BOOL _shouldTileImage;	// 176 = 0xb0
    NSGradient *_gradient;	// 184 = 0xb8
    BOOL _isFlipped;	// 192 = 0xc0
    BOOL _transparent;	// 193 = 0xc1
    double _gradientAngle;	// 200 = 0xc8
    long long _tag;	// 208 = 0xd0
    double _rowHeight;	// 216 = 0xd8
    double _rowOffset;	// 224 = 0xe0
    NSColor *_imageColor;	// 232 = 0xe8
}

@property(nonatomic) BOOL transparent; // @synthesize transparent=_transparent;
@property(retain, nonatomic) NSColor *backgroundImageColor; // @synthesize backgroundImageColor=_imageColor;
@property(nonatomic) double rowOffset; // @synthesize rowOffset=_rowOffset;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property long long tag; // @synthesize tag=_tag;
@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=_gradientAngle;
- (void).cxx_destruct;
- (id)colorForRow:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL shouldTileImage;
@property(retain, nonatomic) NSImage *backgroundImage;
- (void)updateBackgroundImageColor;
@property(retain, nonatomic) NSGradient *gradient;
@property(retain, nonatomic) NSArray *backgroundColors;
@property(retain, nonatomic) NSColor *backgroundColor;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;

@end

