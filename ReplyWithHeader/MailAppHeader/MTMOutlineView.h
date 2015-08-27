#import <AppKit/NSOutlineView.h>

@class MTMFullWindowController;

@interface MTMOutlineView : NSOutlineView
{
    MTMFullWindowController *_windowController;	// 656 = 0x290
}

@property(nonatomic) __weak MTMFullWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)selectAll:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;

@end

