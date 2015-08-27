#import <AppKit/NSActionCell.h>

@class MFMailAccount, NSImage, NSString;

@interface AccountCell : NSActionCell
{
    MFMailAccount *_account;	// 64 = 0x40
    NSImage *_icon;	// 72 = 0x48
    NSString *_subtitle;	// 80 = 0x50
}

@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
- (id)title;
- (void)setAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_accountCellCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

