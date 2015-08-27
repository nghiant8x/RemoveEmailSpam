#import <AppKit/NSScrollView.h>

@interface _AutomaticallyAdjustingScrollView : NSScrollView
{
    double _additionalTopInset;	// 232 = 0xe8
}

@property(nonatomic) double additionalTopInset; // @synthesize additionalTopInset=_additionalTopInset;
- (void)_updateContentInsets;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end

