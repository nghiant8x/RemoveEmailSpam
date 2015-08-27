#import <AppKit/NSVisualEffectView.h>

@class NSImageView;

@interface HeaderDividerView : NSVisualEffectView
{
    NSImageView *_snapshotView;	// 176 = 0xb0
}

@property(nonatomic) __weak NSImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;
- (void)mui_didCacheDisplayInRect;
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

