#import <AppKit/NSWindowController.h>

@class NSButton, NSProgressIndicator, NSTextField;
@protocol DynamicErrorWindowDelegate;

@interface DynamicErrorWindowController : NSWindowController
{
    id <DynamicErrorWindowDelegate> _delegate;	// 80 = 0x50
    NSTextField *_message;	// 88 = 0x58
    NSTextField *_explanation;	// 96 = 0x60
    NSButton *_leftButton;	// 104 = 0x68
    NSProgressIndicator *_progressIndicator;	// 112 = 0x70
    NSButton *_rightButton;	// 120 = 0x78
    NSButton *_helpButton;	// 128 = 0x80
    long long _diagnosisCode;	// 136 = 0x88
    double _distanceToRightEdge;	// 144 = 0x90
    double _distanceBetweenButtons;	// 152 = 0x98
    double _distanceFromProgresBarToButtons;	// 160 = 0xa0
    double _progressIndicatorHeight;	// 168 = 0xa8
}

@property(nonatomic) double progressIndicatorHeight; // @synthesize progressIndicatorHeight=_progressIndicatorHeight;
@property(nonatomic) double distanceFromProgresBarToButtons; // @synthesize distanceFromProgresBarToButtons=_distanceFromProgresBarToButtons;
@property(nonatomic) double distanceBetweenButtons; // @synthesize distanceBetweenButtons=_distanceBetweenButtons;
@property(nonatomic) double distanceToRightEdge; // @synthesize distanceToRightEdge=_distanceToRightEdge;
@property(nonatomic) long long diagnosisCode; // @synthesize diagnosisCode=_diagnosisCode;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak NSButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak NSTextField *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) __weak NSTextField *message; // @synthesize message=_message;
@property(retain, nonatomic) id <DynamicErrorWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightActionSelected:(id)arg1;
- (void)leftActionSelected:(id)arg1;
- (void)errorDiagnosedAs:(long long)arg1;
- (void)updateWindowLayout;
- (void)awakeFromNib;
- (void)relocateButton:(id)arg1 relativeTo:(double)arg2;
- (void)collectBasicWindowMetrics;
- (void)_updateTextField:(id)arg1 withText:(id)arg2 belowControl:(id)arg3;
- (void)_updateTextFieldHeightForNewContent:(id)arg1;

@end

