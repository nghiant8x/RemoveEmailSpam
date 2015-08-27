#import <objc/NSObject.h>

@class MCActivityMonitor, NSProgressIndicator, NSString, NSTextField, NSView;

@interface LoadingOverlay : NSObject
{
    MCActivityMonitor *_activityMonitor;	// 8 = 0x8
    NSView *_overlayView;	// 16 = 0x10
    NSProgressIndicator *_progressIndicator;	// 24 = 0x18
    NSTextField *_statusMessageField;	// 32 = 0x20
    id _modalDelegate;	// 40 = 0x28
}

@property(nonatomic) __weak id modalDelegate; // @synthesize modalDelegate=_modalDelegate;
@property(nonatomic) __weak NSTextField *statusMessageField; // @synthesize statusMessageField=_statusMessageField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (void)stop;
- (void)_activityEnded:(id)arg1;
@property(retain, nonatomic) NSString *statusMessage;
@property(retain, nonatomic) MCActivityMonitor *activityMonitor;
- (void)displayInSuperviewAfterDelay:(id)arg1;
- (void)displayInSuperview:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithModalDelegate:(id)arg1;

@end

