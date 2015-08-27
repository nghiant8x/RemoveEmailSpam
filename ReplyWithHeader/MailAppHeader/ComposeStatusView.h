#import <AppKit/NSStackView.h>

@class NSColor, NSMenu, NSPopUpButton, NSString, NSTextField;

@interface ComposeStatusView : NSStackView
{
    NSTextField *_messageSizeLabel;	// 272 = 0x110
    NSTextField *_messageSizeTextField;	// 280 = 0x118
    NSTextField *_imageSizePickerLabel;	// 288 = 0x120
    NSPopUpButton *_imageSizePickerPopup;	// 296 = 0x128
    NSTextField *_URLPickerLabel;	// 304 = 0x130
    NSPopUpButton *_URLPickerButton;	// 312 = 0x138
}

+ (id)keyPathsForValuesAffectingSelectedImageSize;
+ (id)keyPathsForValuesAffectingSelectedSharingDisplayType;
+ (id)keyPathsForValuesAffectingMessageSizeColor;
+ (id)keyPathsForValuesAffectingMessageSizeValue;
@property(retain, nonatomic) NSPopUpButton *URLPickerButton; // @synthesize URLPickerButton=_URLPickerButton;
@property(retain, nonatomic) NSTextField *URLPickerLabel; // @synthesize URLPickerLabel=_URLPickerLabel;
@property(retain, nonatomic) NSPopUpButton *imageSizePickerPopup; // @synthesize imageSizePickerPopup=_imageSizePickerPopup;
@property(retain, nonatomic) NSTextField *imageSizePickerLabel; // @synthesize imageSizePickerLabel=_imageSizePickerLabel;
@property(retain, nonatomic) NSTextField *messageSizeTextField; // @synthesize messageSizeTextField=_messageSizeTextField;
@property(retain, nonatomic) NSTextField *messageSizeLabel; // @synthesize messageSizeLabel=_messageSizeLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSMenu *imageSizeMenu;
@property(readonly, nonatomic) __weak NSMenu *URLPickerMenu;
@property(nonatomic) long long selectedImageSize;
@property(nonatomic) long long selectedSharingDisplayType;
@property(retain, nonatomic) NSColor *messageSizeColor;
@property(copy, nonatomic) NSString *messageSizeValue;
@property(nonatomic) BOOL showsMessageSizeLabel;
@property(nonatomic) BOOL showsImageSizePicker;
@property(nonatomic) BOOL showsURLPicker;
@property(readonly, nonatomic) BOOL canHideStatusBar;
- (void)awakeFromNib;

@end

