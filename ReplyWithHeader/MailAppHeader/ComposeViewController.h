#import <AppKit/NSViewController.h>

#import "MUIWebDocumentViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class ComposeDraft, MUIAddressField, MUIWebDocumentView, NSArray, NSButton, NSPopUpButton, NSStackView, NSString, NSTextField;

@interface ComposeViewController : NSViewController <MUIWebDocumentViewDelegate, NSTextFieldDelegate>
{
    long long _toState;	// 104 = 0x68
    long long _ccState;	// 112 = 0x70
    long long _bccState;	// 120 = 0x78
    long long _replyToState;	// 128 = 0x80
    long long _subjectState;	// 136 = 0x88
    long long _fromState;	// 144 = 0x90
    long long _deliveryAccountState;	// 152 = 0x98
    long long _deliveryPriorityState;	// 160 = 0xa0
    BOOL _isPerformingUICustomization;	// 168 = 0xa8
    NSArray *_fromAddresses;	// 176 = 0xb0
    NSArray *_deliveryAccounts;	// 184 = 0xb8
    NSStackView *_headerStackView;	// 192 = 0xc0
    MUIWebDocumentView *_webDocumentView;	// 200 = 0xc8
    NSStackView *_toStackView;	// 208 = 0xd0
    NSStackView *_ccStackView;	// 216 = 0xd8
    NSStackView *_bccStackView;	// 224 = 0xe0
    NSStackView *_replyToStackView;	// 232 = 0xe8
    NSStackView *_subjectStackView;	// 240 = 0xf0
    NSStackView *_fromStackView;	// 248 = 0xf8
    NSStackView *_customizationStackView;	// 256 = 0x100
    NSButton *_toCheckBox;	// 264 = 0x108
    NSButton *_ccCheckBox;	// 272 = 0x110
    NSButton *_bccCheckBox;	// 280 = 0x118
    NSButton *_replyToCheckBox;	// 288 = 0x120
    NSButton *_subjectCheckBox;	// 296 = 0x128
    NSButton *_fromCheckBox;	// 304 = 0x130
    NSButton *_deliveryAccountCheckBox;	// 312 = 0x138
    NSButton *_deliveryPriorityCheckBox;	// 320 = 0x140
    NSTextField *_toLabel;	// 328 = 0x148
    NSTextField *_ccLabel;	// 336 = 0x150
    NSTextField *_bccLabel;	// 344 = 0x158
    NSTextField *_replyToLabel;	// 352 = 0x160
    NSTextField *_subjectLabel;	// 360 = 0x168
    NSTextField *_fromLabel;	// 368 = 0x170
    MUIAddressField *_toAddressField;	// 376 = 0x178
    MUIAddressField *_ccAddressField;	// 384 = 0x180
    MUIAddressField *_bccAddressField;	// 392 = 0x188
    MUIAddressField *_replyToAddressField;	// 400 = 0x190
    NSTextField *_subjectTextField;	// 408 = 0x198
    NSPopUpButton *_fromAddressPopUpButton;	// 416 = 0x1a0
    NSPopUpButton *_deliveryAccountPopUpButton;	// 424 = 0x1a8
    NSPopUpButton *_deliveryPriorityPopUpButton;	// 432 = 0x1b0
}

@property(nonatomic) BOOL isPerformingUICustomization; // @synthesize isPerformingUICustomization=_isPerformingUICustomization;
@property(retain, nonatomic) NSPopUpButton *deliveryPriorityPopUpButton; // @synthesize deliveryPriorityPopUpButton=_deliveryPriorityPopUpButton;
@property(retain, nonatomic) NSPopUpButton *deliveryAccountPopUpButton; // @synthesize deliveryAccountPopUpButton=_deliveryAccountPopUpButton;
@property(retain, nonatomic) NSPopUpButton *fromAddressPopUpButton; // @synthesize fromAddressPopUpButton=_fromAddressPopUpButton;
@property(retain, nonatomic) NSTextField *subjectTextField; // @synthesize subjectTextField=_subjectTextField;
@property(retain, nonatomic) MUIAddressField *replyToAddressField; // @synthesize replyToAddressField=_replyToAddressField;
@property(retain, nonatomic) MUIAddressField *bccAddressField; // @synthesize bccAddressField=_bccAddressField;
@property(retain, nonatomic) MUIAddressField *ccAddressField; // @synthesize ccAddressField=_ccAddressField;
@property(retain, nonatomic) MUIAddressField *toAddressField; // @synthesize toAddressField=_toAddressField;
@property(retain, nonatomic) NSTextField *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) NSTextField *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) NSTextField *replyToLabel; // @synthesize replyToLabel=_replyToLabel;
@property(retain, nonatomic) NSTextField *bccLabel; // @synthesize bccLabel=_bccLabel;
@property(retain, nonatomic) NSTextField *ccLabel; // @synthesize ccLabel=_ccLabel;
@property(retain, nonatomic) NSTextField *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) NSButton *deliveryPriorityCheckBox; // @synthesize deliveryPriorityCheckBox=_deliveryPriorityCheckBox;
@property(retain, nonatomic) NSButton *deliveryAccountCheckBox; // @synthesize deliveryAccountCheckBox=_deliveryAccountCheckBox;
@property(retain, nonatomic) NSButton *fromCheckBox; // @synthesize fromCheckBox=_fromCheckBox;
@property(retain, nonatomic) NSButton *subjectCheckBox; // @synthesize subjectCheckBox=_subjectCheckBox;
@property(retain, nonatomic) NSButton *replyToCheckBox; // @synthesize replyToCheckBox=_replyToCheckBox;
@property(retain, nonatomic) NSButton *bccCheckBox; // @synthesize bccCheckBox=_bccCheckBox;
@property(retain, nonatomic) NSButton *ccCheckBox; // @synthesize ccCheckBox=_ccCheckBox;
@property(retain, nonatomic) NSButton *toCheckBox; // @synthesize toCheckBox=_toCheckBox;
@property(retain, nonatomic) NSStackView *customizationStackView; // @synthesize customizationStackView=_customizationStackView;
@property(retain, nonatomic) NSStackView *fromStackView; // @synthesize fromStackView=_fromStackView;
@property(retain, nonatomic) NSStackView *subjectStackView; // @synthesize subjectStackView=_subjectStackView;
@property(retain, nonatomic) NSStackView *replyToStackView; // @synthesize replyToStackView=_replyToStackView;
@property(retain, nonatomic) NSStackView *bccStackView; // @synthesize bccStackView=_bccStackView;
@property(retain, nonatomic) NSStackView *ccStackView; // @synthesize ccStackView=_ccStackView;
@property(retain, nonatomic) NSStackView *toStackView; // @synthesize toStackView=_toStackView;
@property(retain, nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSStackView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(copy, nonatomic) NSArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
@property(copy, nonatomic) NSArray *fromAddresses; // @synthesize fromAddresses=_fromAddresses;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)finishUICustomization:(id)arg1;
- (void)beginUICustomization:(id)arg1;
- (double)_customizationAnimationDuration;
- (void)_configureUIElements;
- (void)_alignUILabels;
- (void)_updateDeliveryAccountsMenu:(id)arg1;
- (void)_synchronizeDeliveryAccount;
- (void)_updateDeliveryAccounts:(id)arg1;
- (void)_updateFromAddressesMenu:(id)arg1;
- (void)_synchronizeFromAddress;
- (void)_updateFromAddresses:(id)arg1;
- (void)_updateDisplayNameWithSubject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_controlForIdentifer:(long long)arg1;
- (id)_checkBoxForIdentifier:(long long)arg1;
- (id)_labelForIdentifier:(long long)arg1;
- (id)_stackViewForIdentifier:(long long)arg1;
- (long long)_stateForIdentifier:(long long)arg1;
@property(nonatomic) long long deliveryPriorityState;
@property(nonatomic) long long deliveryAccountState;
@property(nonatomic) long long fromState;
@property(nonatomic) long long subjectState;
@property(nonatomic) long long replyToState;
@property(nonatomic) long long bccState;
@property(nonatomic) long long ccState;
@property(nonatomic) long long toState;
@property(retain) ComposeDraft *representedObject;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_newComposeViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

