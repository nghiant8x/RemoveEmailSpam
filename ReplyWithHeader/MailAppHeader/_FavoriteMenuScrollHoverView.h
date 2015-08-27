#import <AppKit/NSView.h>

@class NSImage, NSTrackingArea;
@protocol FavoriteHoverViewDirectionProtocol;

@interface _FavoriteMenuScrollHoverView : NSView
{
    long long _direction;	// 152 = 0x98
    id <FavoriteHoverViewDirectionProtocol> _delegate;	// 160 = 0xa0
    NSTrackingArea *_trackingArea;	// 168 = 0xa8
    NSImage *_arrowImage;	// 176 = 0xb0
}

@property(readonly, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) __weak id <FavoriteHoverViewDirectionProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (void)_favoriteMenuScrollHoverViewCommonInitWithDirection:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDirection:(long long)arg1;

@end

