#import <AppKit/NSView.h>

@class NSProgressIndicator;

@interface MTMLoadingView : NSView
{
    NSProgressIndicator *_progressIndicator;	// 152 = 0x98
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;

@end

