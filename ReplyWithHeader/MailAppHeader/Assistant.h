#import <objc/NSObject.h>

@class NSButton, NSView;
@protocol AssistantDelegate;

@interface Assistant : NSObject
{
    id <AssistantDelegate> _delegate;	// 8 = 0x8
    NSView *_parentView;	// 16 = 0x10
    NSButton *_backButton;	// 24 = 0x18
    NSButton *_forwardButton;	// 32 = 0x20
    NSButton *_cancelButton;	// 40 = 0x28
}

@property(readonly, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) NSButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(readonly, nonatomic) NSButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) NSView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) __weak id <AssistantDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupKeyViewLoop;
- (id)windowTitle;
- (void)weAreDone;
- (BOOL)shouldStop;
- (void)goBackward;
- (void)goForward;
- (void)stop;
- (void)start;
- (id)init;
- (id)initWithAssistentManager:(id)arg1;

@end

