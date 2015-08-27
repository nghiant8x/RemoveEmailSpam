#import <objc/NSObject.h>

@class ActivityViewer, MCActivityMonitor, NSButton, NSProgressIndicator, NSTextField, NSView;

@interface ActivityViewEntry : NSObject
{
    MCActivityMonitor *_monitoredActivity;	// 8 = 0x8
    int _lastChangeCount;	// 16 = 0x10
    NSView *_box;	// 24 = 0x18
    NSProgressIndicator *_progressBar;	// 32 = 0x20
    NSTextField *_statusField;	// 40 = 0x28
    NSButton *_stopButton;	// 48 = 0x30
    NSTextField *_taskNameField;	// 56 = 0x38
    ActivityViewer *_viewer;	// 64 = 0x40
}

@property(readonly, nonatomic) __weak ActivityViewer *viewer; // @synthesize viewer=_viewer;
@property(nonatomic) int lastChangeCount; // @synthesize lastChangeCount=_lastChangeCount;
@property(nonatomic) __weak NSTextField *taskNameField; // @synthesize taskNameField=_taskNameField;
@property(nonatomic) __weak NSButton *stopButton; // @synthesize stopButton=_stopButton;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField=_statusField;
@property(nonatomic) __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) NSView *box; // @synthesize box=_box;
- (void).cxx_destruct;
- (void)setupUI;
- (BOOL)inUse;
- (void)stop:(id)arg1;
- (void)_handleActivityEnded:(id)arg1;
- (void)update;
@property(retain, nonatomic) MCActivityMonitor *monitoredActivity;
- (id)description;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)initForViewer:(id)arg1;

@end

