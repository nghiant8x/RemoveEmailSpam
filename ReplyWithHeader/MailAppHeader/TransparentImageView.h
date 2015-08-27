#import <AppKit/NSImageView.h>

@class NSView;

@interface TransparentImageView : NSImageView
{
    NSView *_backgroundView;	// 192 = 0xc0
}

@property(retain, nonatomic) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;

@end

