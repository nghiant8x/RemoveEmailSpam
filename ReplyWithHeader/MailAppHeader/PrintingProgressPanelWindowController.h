#import <AppKit/NSWindowController.h>

@class NSButton, NSProgressIndicator, NSTextField;

@interface PrintingProgressPanelWindowController : NSWindowController
{
    NSProgressIndicator *_progressIndicator;	// 80 = 0x50
    NSTextField *_progressText;	// 88 = 0x58
    NSButton *_cancelButton;	// 96 = 0x60
}

@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSTextField *progressText; // @synthesize progressText=_progressText;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;
- (id)windowNibName;

@end

