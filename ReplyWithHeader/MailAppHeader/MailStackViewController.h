#import <objc/NSObject.h>

#import "StackDataSource-Protocol.h"
#import "StackDelegate-Protocol.h"

@class CALayer, NSArray, NSImage, NSMutableDictionary, NSMutableSet, NSString, NSView, StackController, _StackContainerView;

@interface MailStackViewController : NSObject <StackDataSource, StackDelegate>
{
    NSMutableDictionary *_messageViewControllers;	// 8 = 0x8
    NSMutableDictionary *_messageLayers;	// 16 = 0x10
    NSMutableSet *_snapshotWindows;	// 24 = 0x18
    BOOL _performingAsynchronousAnimation;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
    NSImage *_topLayerSnapshot;	// 48 = 0x30
    NSView *_containerView;	// 56 = 0x38
    _StackContainerView *_stackContainerView;	// 64 = 0x40
    CALayer *_stackContainerLayer;	// 72 = 0x48
    StackController *_stackController;	// 80 = 0x50
}

@property(retain, nonatomic) StackController *stackController; // @synthesize stackController=_stackController;
@property(retain, nonatomic) CALayer *stackContainerLayer; // @synthesize stackContainerLayer=_stackContainerLayer;
@property(retain, nonatomic) _StackContainerView *stackContainerView; // @synthesize stackContainerView=_stackContainerView;
@property(readonly, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSImage *topLayerSnapshot; // @synthesize topLayerSnapshot=_topLayerSnapshot;
@property(nonatomic) BOOL performingAsynchronousAnimation; // @synthesize performingAsynchronousAnimation=_performingAsynchronousAnimation;
@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)stackController:(id)arg1 willRemoveLayerForItem:(id)arg2;
- (void)stackController:(id)arg1 willDisplayLayer:(id)arg2 forItem:(id)arg3;
- (void)stackController:(id)arg1 willStackLayer:(id)arg2 forItem:(id)arg3;
- (void)stackControllerDidStopStackingLayers:(id)arg1;
- (void)stackControllerWillStartStackingLayers:(id)arg1;
- (void)stackController:(id)arg1 loadDataForItem:(id)arg2 inLayer:(id)arg3;
- (BOOL)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inLayer:(id)arg3;
- (id)stackController:(id)arg1 layerForItem:(id)arg2;
- (id)stackContainerLayerForStackController:(id)arg1;
- (void)updateDisplayForSelectedMessages:(id)arg1;
- (id)_stackControllerCreateIfNeeded:(BOOL)arg1;
- (void)_abortAnimations;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;
- (void)_viewDidEndLiveResize:(id)arg1;
- (void)_viewFrameDidChange:(id)arg1;
- (void)_resizeMessageViewWithID:(id)arg1 toSize:(struct CGSize)arg2 animating:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_takeSnapshotOfMessageViewForController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeMessageViewForItem:(id)arg1;
- (id)_messageViewForItem:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)_detachMessageViewFromIndividualWindow:(id)arg1;
- (void)_attachMessageViewToIndividualWindow:(id)arg1;
- (void)setStackVisible:(BOOL)arg1 animates:(BOOL)arg2;
- (void)dealloc;
- (id)initWithContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

