#import <AppKit/NSSegmentedControl.h>

@class FlaggedStatusToolbarItem;

@interface FlaggedStatusView : NSSegmentedControl
{
    BOOL _flagColorToDisplay;	// 208 = 0xd0
    FlaggedStatusToolbarItem *_toolbarItem;	// 216 = 0xd8
}

+ (BOOL)defaultFlagColor;
+ (id)menuForFlaggedStatus;
@property(nonatomic) __weak FlaggedStatusToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void).cxx_destruct;
- (void)_segmentedControlClicked:(id)arg1;
- (void)setupAccessibilityForButton:(BOOL)arg1;
@property(nonatomic) BOOL flagColorToDisplay;
- (void)_flaggedStatusViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

