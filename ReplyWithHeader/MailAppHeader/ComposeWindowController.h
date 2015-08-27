#import <AppKit/NSWindowController.h>

#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class ComposeDraft, ComposeViewController, NSString;

@interface ComposeWindowController : NSWindowController <NSToolbarDelegate, NSWindowDelegate>
{
    ComposeViewController *_viewController;	// 80 = 0x50
}

@property(readonly, nonatomic) ComposeViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)windowWillReturnUndoManager:(id)arg1;
@property(retain, nonatomic) ComposeDraft *representedObject;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)_windowDidClose;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_composeWindowControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

