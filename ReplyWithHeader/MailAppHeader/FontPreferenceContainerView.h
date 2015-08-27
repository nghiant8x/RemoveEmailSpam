#import <AppKit/NSView.h>

@class NSButton, NSTextField;

@interface FontPreferenceContainerView : NSView
{
    NSButton *_selectButton;	// 152 = 0x98
    NSTextField *_labelTextField;	// 160 = 0xa0
    NSTextField *_sampleTextField;	// 168 = 0xa8
    long long _fontPreference;	// 176 = 0xb0
    double _buttonOffset;	// 184 = 0xb8
    double _labelOffset;	// 192 = 0xc0
    double _sampleOffset;	// 200 = 0xc8
    struct CGRect _myOriginalFrame;	// 208 = 0xd0
    struct CGRect _sampleTextFieldOriginalFrame;	// 240 = 0xf0
}

@property(nonatomic) double sampleOffset; // @synthesize sampleOffset=_sampleOffset;
@property(nonatomic) double labelOffset; // @synthesize labelOffset=_labelOffset;
@property(nonatomic) double buttonOffset; // @synthesize buttonOffset=_buttonOffset;
@property(nonatomic) struct CGRect sampleTextFieldOriginalFrame; // @synthesize sampleTextFieldOriginalFrame=_sampleTextFieldOriginalFrame;
@property(nonatomic) struct CGRect myOriginalFrame; // @synthesize myOriginalFrame=_myOriginalFrame;
@property(nonatomic) long long fontPreference; // @synthesize fontPreference=_fontPreference;
@property(retain, nonatomic) NSTextField *sampleTextField; // @synthesize sampleTextField=_sampleTextField;
@property(retain, nonatomic) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(retain, nonatomic) NSButton *selectButton; // @synthesize selectButton=_selectButton;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutVertically;
- (void)awakeFromNib;

@end

