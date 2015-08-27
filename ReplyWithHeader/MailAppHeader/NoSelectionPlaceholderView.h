#import <AppKit/NSVisualEffectView.h>

@class NSTextField;

@interface NoSelectionPlaceholderView : NSVisualEffectView
{
    NSTextField *_noSelectionTextField;	// 176 = 0xb0
}

@property(retain, nonatomic) NSTextField *noSelectionTextField; // @synthesize noSelectionTextField=_noSelectionTextField;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isOpaque;
- (void)_noSelectionPlaceholderViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

