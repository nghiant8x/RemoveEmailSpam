#import <AppKit/NSTextFieldCell.h>

@class AccountPreferences, MFMailAccount, NSImageCell;

@interface _AccountDisplayCell : NSTextFieldCell
{
    AccountPreferences *_accountPreferences;	// 88 = 0x58
    NSTextFieldCell *_descriptionTextCell;	// 96 = 0x60
    NSTextFieldCell *_activeTextCell;	// 104 = 0x68
    NSImageCell *_imageCell;	// 112 = 0x70
    MFMailAccount *_account;	// 120 = 0x78
}

@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSImageCell *imageCell; // @synthesize imageCell=_imageCell;
@property(readonly, nonatomic) NSTextFieldCell *activeTextCell; // @synthesize activeTextCell=_activeTextCell;
@property(readonly, nonatomic) NSTextFieldCell *descriptionTextCell; // @synthesize descriptionTextCell=_descriptionTextCell;
@property(readonly, nonatomic) __weak AccountPreferences *accountPreferences; // @synthesize accountPreferences=_accountPreferences;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)willBeDisplayed;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_accountDisplayCellCommonInitWithAccountPreferences:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithAccountPreferences:(id)arg1;

@end

