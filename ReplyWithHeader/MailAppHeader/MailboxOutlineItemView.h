#import <AppKit/NSTableCellView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class MailboxBadgeView, NSButton, NSObject, NSString;
@protocol MailboxOutlineItemViewDelegate;

@interface MailboxOutlineItemView : NSTableCellView <NSTextFieldDelegate>
{
    MailboxBadgeView *_badgeView;	// 200 = 0xc8
    NSObject<MailboxOutlineItemViewDelegate> *_delegate;	// 208 = 0xd0
    NSButton *_indicatorView;	// 216 = 0xd8
}

@property(retain, nonatomic) NSButton *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak NSObject<MailboxOutlineItemViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MailboxBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)viewWillDraw;
- (void)_layoutAuxiliaryViews;
- (void)_layoutAuxiliaryViewsForcingBadge:(BOOL)arg1 forcingIndicator:(BOOL)arg2;
- (struct CGRect)_layoutText:(struct CGRect *)arg1 isRTL:(BOOL)arg2;
- (struct CGRect)_layoutIndicator:(struct CGRect *)arg1 force:(BOOL)arg2 isRTL:(BOOL)arg3;
- (struct CGRect)_leftAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)_rightAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)_layoutBadge:(struct CGRect *)arg1 force:(BOOL)arg2 isRTL:(BOOL)arg3;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)menu;
- (id)menuForEvent:(id)arg1;
@property(readonly, nonatomic) double idealWidth;
- (void)setAlertTarget:(id)arg1;
- (void)setAlertAction:(SEL)arg1;
- (void)setRowSizeStyle:(long long)arg1;
- (void)showAlertIndicator:(BOOL)arg1 withState:(long long)arg2;
- (void)showBadge:(BOOL)arg1 withCount:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_updateImage;
- (void)_windowKeyStateChanged:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_mailboxOutlineItemViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

