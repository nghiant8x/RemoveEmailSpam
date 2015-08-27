#import <AppKit/NSVisualEffectView.h>

@class CALayer, NSPopUpButton;
@protocol RichMessageListSortViewProtocol;

@interface RichMessageListSortView : NSVisualEffectView
{
    id <RichMessageListSortViewProtocol> _delegate;	// 176 = 0xb0
    CALayer *_dividerLayer;	// 184 = 0xb8
    NSPopUpButton *_sortButton;	// 192 = 0xc0
}

+ (id)_dividerColor;
@property(nonatomic) __weak NSPopUpButton *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) CALayer *dividerLayer; // @synthesize dividerLayer=_dividerLayer;
@property(nonatomic) __weak id <RichMessageListSortViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (id)makeBackingLayer;
- (void)setSortTitle:(id)arg1;
- (void)awakeFromNib;
- (void)_richMessageListSortViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

