#import <AppKit/NSView.h>

@class FlagButtonImageView, NSMutableArray, NSMutableDictionary, NSTextField;

@interface FlagsMenuItemView : NSView
{
    NSMutableDictionary *_flagViews;	// 152 = 0x98
    NSMutableArray *_trackingAreas;	// 160 = 0xa0
    NSTextField *_flagTitleTextField;	// 168 = 0xa8
    NSTextField *_flagNameTextField;	// 176 = 0xb0
    FlagButtonImageView *_clearFlaggedStatusView;	// 184 = 0xb8
}

@property(retain, nonatomic) FlagButtonImageView *clearFlaggedStatusView; // @synthesize clearFlaggedStatusView=_clearFlaggedStatusView;
@property(retain, nonatomic) NSTextField *flagNameTextField; // @synthesize flagNameTextField=_flagNameTextField;
@property(retain, nonatomic) NSTextField *flagTitleTextField; // @synthesize flagTitleTextField=_flagTitleTextField;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)viewDidMoveToWindow;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_drawSelectedOutlineForView:(id)arg1;
- (id)_viewForFlagColor:(BOOL)arg1;
- (void)updateTrackingAreas;
- (void)awakeFromNib;
- (void)_flagsMenuItemViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

