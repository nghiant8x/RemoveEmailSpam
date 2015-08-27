#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class MailStackViewController, NSString;

@interface _StackContainerView : NSView <NSAccessibilityGroup, NSDraggingSource>
{
    MailStackViewController *_controller;	// 152 = 0x98
}

@property(nonatomic) __weak MailStackViewController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDragged:(id)arg1;
- (id)accessibilityLabel;
- (void)viewDidEndLiveResize;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

