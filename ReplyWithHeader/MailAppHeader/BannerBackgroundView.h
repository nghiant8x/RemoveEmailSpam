#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class NSString;

@interface BannerBackgroundView : NSView <NSAccessibilityGroup>
{
    long long _bannerBackgroundStyle;	// 152 = 0x98
}

- (void)setBannerBackgroundStyle:(long long)arg1;
- (long long)bannerBackgroundStyle;
- (void)_bannerBackgroundViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

