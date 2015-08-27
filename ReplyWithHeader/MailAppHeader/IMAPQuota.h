#import "RemoteStoreQuota.h"

@class NSPopUpButton, NSTextField, NSView, QuotaBar;

@interface IMAPQuota : RemoteStoreQuota
{
    NSPopUpButton *_quotaPopup;	// 8 = 0x8
    NSTextField *_quotaPopupLabel;	// 16 = 0x10
    NSView *_quotaContainerView;	// 24 = 0x18
    QuotaBar *_quotaBar;	// 32 = 0x20
    NSTextField *_capacityField;	// 40 = 0x28
    NSTextField *_statusField;	// 48 = 0x30
    double _spaceUnderQuotaPopup;	// 56 = 0x38
}

@property(readonly, nonatomic) double spaceUnderQuotaPopup; // @synthesize spaceUnderQuotaPopup=_spaceUnderQuotaPopup;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField=_statusField;
@property(nonatomic) __weak NSTextField *capacityField; // @synthesize capacityField=_capacityField;
@property(nonatomic) __weak QuotaBar *quotaBar; // @synthesize quotaBar=_quotaBar;
@property(nonatomic) __weak NSView *quotaContainerView; // @synthesize quotaContainerView=_quotaContainerView;
@property(nonatomic) __weak NSTextField *quotaPopupLabel; // @synthesize quotaPopupLabel=_quotaPopupLabel;
@property(nonatomic) __weak NSPopUpButton *quotaPopup; // @synthesize quotaPopup=_quotaPopup;
- (void).cxx_destruct;
- (id)_stringForSize:(unsigned long long)arg1 andCount:(long long)arg2 isCapacity:(BOOL)arg3;
- (void)_updateUIForQuotaName:(id)arg1 updateTable:(BOOL)arg2;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)_updateQuotaPopupWithQuotaNames:(id)arg1;
- (void)_engineStatusChanged:(id)arg1;
- (void)_updateStatusField;
- (void)_updateQuotaBarWithSize:(unsigned long long)arg1 maxSize:(unsigned long long)arg2 count:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (id)_selectedQuotaName;
- (void)quotaPopupChanged:(id)arg1;
- (BOOL)tableShouldIncludeMailbox:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithAccount:(id)arg1;

@end

