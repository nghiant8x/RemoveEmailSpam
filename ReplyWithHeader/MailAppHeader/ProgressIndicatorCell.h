#import <AppKit/NSImageCell.h>

@class NSProgressIndicator;

@interface ProgressIndicatorCell : NSImageCell
{
    NSProgressIndicator *_progressIndicator;	// 64 = 0x40
}

@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

