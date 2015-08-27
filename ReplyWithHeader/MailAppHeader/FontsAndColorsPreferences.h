#import <AppKit/NSPreferencesModule.h>

@class FontPreferenceContainerView, NSArray, NSFont, NSMutableDictionary, NSPopUpButton, NSTextView;

@interface FontsAndColorsPreferences : NSPreferencesModule
{
    NSMutableDictionary *_midYDict;	// 48 = 0x30
    BOOL _isQuotedTextColored;	// 56 = 0x38
    BOOL _isPlainTextOfFixedWidth;	// 57 = 0x39
    NSFont *_messageListFont;	// 64 = 0x40
    NSFont *_messageFont;	// 72 = 0x48
    NSFont *_fixedWidthFont;	// 80 = 0x50
    NSArray *_colorList;	// 88 = 0x58
    FontPreferenceContainerView *_messageListContainerView;	// 96 = 0x60
    FontPreferenceContainerView *_messageTextContainerView;	// 104 = 0x68
    FontPreferenceContainerView *_fixedWidthContainerView;	// 112 = 0x70
    NSPopUpButton *_colorPopupOne;	// 120 = 0x78
    NSPopUpButton *_colorPopupTwo;	// 128 = 0x80
    NSPopUpButton *_colorPopupThree;	// 136 = 0x88
    NSTextView *_exampleTextView;	// 144 = 0x90
    NSArray *_fontPrefContainerViews;	// 152 = 0x98
    double _containerSuperViewSpacingY;	// 160 = 0xa0
    double _containerContainerSpacingY;	// 168 = 0xa8
    long long _changingFontPreference;	// 176 = 0xb0
    NSPopUpButton *_lastColorPopupSelected;	// 184 = 0xb8
}

+ (id)keyPathsForValuesAffectingFixedWidthSampleFont;
+ (id)keyPathsForValuesAffectingMessageSampleFont;
+ (id)keyPathsForValuesAffectingMessageListSampleFont;
@property(nonatomic) __weak NSPopUpButton *lastColorPopupSelected; // @synthesize lastColorPopupSelected=_lastColorPopupSelected;
@property(nonatomic) long long changingFontPreference; // @synthesize changingFontPreference=_changingFontPreference;
@property(nonatomic) double containerContainerSpacingY; // @synthesize containerContainerSpacingY=_containerContainerSpacingY;
@property(nonatomic) double containerSuperViewSpacingY; // @synthesize containerSuperViewSpacingY=_containerSuperViewSpacingY;
@property(copy, nonatomic) NSArray *fontPrefContainerViews; // @synthesize fontPrefContainerViews=_fontPrefContainerViews;
@property(retain, nonatomic) NSTextView *exampleTextView; // @synthesize exampleTextView=_exampleTextView;
@property(nonatomic) __weak NSPopUpButton *colorPopupThree; // @synthesize colorPopupThree=_colorPopupThree;
@property(nonatomic) __weak NSPopUpButton *colorPopupTwo; // @synthesize colorPopupTwo=_colorPopupTwo;
@property(nonatomic) __weak NSPopUpButton *colorPopupOne; // @synthesize colorPopupOne=_colorPopupOne;
@property(nonatomic) __weak FontPreferenceContainerView *fixedWidthContainerView; // @synthesize fixedWidthContainerView=_fixedWidthContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageTextContainerView; // @synthesize messageTextContainerView=_messageTextContainerView;
@property(nonatomic) __weak FontPreferenceContainerView *messageListContainerView; // @synthesize messageListContainerView=_messageListContainerView;
@property(retain, nonatomic) NSArray *colorList; // @synthesize colorList=_colorList;
@property(nonatomic) BOOL isPlainTextOfFixedWidth; // @synthesize isPlainTextOfFixedWidth=_isPlainTextOfFixedWidth;
@property(nonatomic) BOOL isQuotedTextColored; // @synthesize isQuotedTextColored=_isQuotedTextColored;
@property(retain, nonatomic) NSFont *fixedWidthFont; // @synthesize fixedWidthFont=_fixedWidthFont;
@property(retain, nonatomic) NSFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) NSFont *messageListFont; // @synthesize messageListFont=_messageListFont;
- (void).cxx_destruct;
- (void)_setFont:(id)arg1 forPreferenceContainer:(id)arg2;
- (id)_getFontForPreferenceContainer:(id)arg1;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)_colorPicked:(id)arg1;
- (void)colorPopupChanged:(id)arg1;
- (void)colorQuotesButtonClicked:(id)arg1;
- (void)_updateColorList;
- (void)_updateExampleTextView;
- (void)_setColor:(id)arg1 forPopup:(id)arg2;
- (void)_setOtherColor:(id)arg1 forPopup:(id)arg2;
- (void)changeFont:(id)arg1;
- (double)_sizeContainerView:(id)arg1;
- (id)_containerViewForFontPreference:(long long)arg1;
- (void)toggleUseFixedWidthFont:(id)arg1;
- (void)toggleColorQuotedText:(id)arg1;
- (void)selectFont:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)_populateFontPrefContainers;
- (id)_sampleFontForFont:(id)arg1;
@property(readonly, nonatomic) NSFont *fixedWidthSampleFont;
@property(readonly, nonatomic) NSFont *messageSampleFont;
@property(readonly, nonatomic) NSFont *messageListSampleFont;
- (void)_replaceExampleTextView;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (void)_layoutFromFontPreference:(long long)arg1;
- (void)_updateAutoresizeFlags:(long long)arg1;
- (void)_growWindowVertically:(double)arg1 animate:(BOOL)arg2;
- (void)initializeFromDefaults;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)awakeFromNib;

@end

