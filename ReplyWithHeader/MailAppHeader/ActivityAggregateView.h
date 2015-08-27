#import <AppKit/NSView.h>

@class MCActivityAggregate, NSButton, NSProgressIndicator, NSTextField;

@interface ActivityAggregateView : NSView
{
    MCActivityAggregate *_activityAggregate;	// 152 = 0x98
    NSTextField *_nameTextField;	// 160 = 0xa0
    NSTextField *_statusTextField;	// 168 = 0xa8
    NSButton *_stopButton;	// 176 = 0xb0
    NSProgressIndicator *_progressIndicator;	// 184 = 0xb8
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) NSTextField *statusTextField; // @synthesize statusTextField=_statusTextField;
@property(retain, nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateNameTextField;
@property(retain, nonatomic) MCActivityAggregate *activityAggregate;
- (void)dealloc;
- (void)_activityAggregateViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

