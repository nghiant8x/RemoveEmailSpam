#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSOutlineView;

@interface OutlineViewProgressIndicatorsController : NSObject
{
    NSMutableDictionary *_progressIndicators;	// 8 = 0x8
    NSMutableDictionary *_fractionsDone;	// 16 = 0x10
    NSMutableDictionary *_origins;	// 24 = 0x18
    NSMutableDictionary *_roundDeterminateColors;	// 32 = 0x20
    NSMutableSet *_scheduledUpdates;	// 40 = 0x28
    NSMutableSet *_scheduledRemovals;	// 48 = 0x30
    BOOL _updateScheduled;	// 56 = 0x38
    NSOutlineView *_outlineView;	// 64 = 0x40
}

@property(nonatomic) BOOL updateScheduled; // @synthesize updateScheduled=_updateScheduled;
@property(readonly, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)_removeProgressIndicatorForKey:(id)arg1;
- (void)_updateProgressIndicatorForKey:(id)arg1;
- (void)_processUpdates;
- (void)_scheduleUpdate;
- (void)_setNeedsToRemoveProgressIndicatorForKey:(id)arg1;
- (void)_setNeedsToUpdateProgressIndicatorForKey:(id)arg1;
- (id)_progressIndicatorForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_itemForKey:(id)arg1;
- (id)_keyForItem:(id)arg1;
- (void)setRoundDeterminateColor:(id)arg1 forProgressIndicatorForItem:(id)arg2;
- (void)positionProgressIndicatorForItem:(id)arg1 inRect:(struct CGRect)arg2;
- (void)removeOrphanProgressIndicators;
- (void)removeProgressIndicatorForItem:(id)arg1;
- (void)showDeterminateProgressIndicatorForItem:(id)arg1 fractionDone:(double)arg2;
- (void)showIndeterminateProgressIndicatorForItem:(id)arg1;
- (id)initWithOutlineView:(id)arg1;
- (id)init;

@end

