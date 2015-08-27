#import <AppKit/NSView.h>

@class CALayer, NSHashTable, NSImageView;

@interface ViewingPaneView : NSView
{
    NSHashTable *_topAlignedSubviews;	// 152 = 0x98
    NSHashTable *_managedConstraints;	// 160 = 0xa0
    NSView *_singleMessageLoadingView;	// 168 = 0xa8
    NSImageView *_snapshotView;	// 176 = 0xb0
    NSView *_contentView;	// 184 = 0xb8
    CALayer *_edgeLayer;	// 192 = 0xc0
}

+ (BOOL)automaticallyNotifiesObserversOfContentView;
@property(nonatomic) __weak CALayer *edgeLayer; // @synthesize edgeLayer=_edgeLayer;
@property(readonly, nonatomic) NSImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(readonly, nonatomic) NSView *singleMessageLoadingView; // @synthesize singleMessageLoadingView=_singleMessageLoadingView;
- (void).cxx_destruct;
- (void)setLoadingOption:(long long)arg1;
- (void)updateConstraints;
@property(nonatomic) BOOL isVertical;
- (void)_showSnapshot;
- (void)_showSingleMessageLoadingView;
- (void)_hideSnapshot;
- (void)_hideSingleMessageLoadingView;
- (void)setContentView:(id)arg1 titlebarAligned:(BOOL)arg2;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void)_createSnapshotView;
- (void)_createSingleMessageLoadingView;
- (void)_createBackdropView;
- (id)_buildEdgeLayer;
- (id)makeBackingLayer;
- (void)_viewingPaneViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

