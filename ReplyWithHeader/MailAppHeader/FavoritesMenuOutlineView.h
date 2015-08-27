#import <AppKit/NSOutlineView.h>

@class FavoritesMenuController, NSTrackingArea;

@interface FavoritesMenuOutlineView : NSOutlineView
{
    FavoritesMenuController *_controller;	// 656 = 0x290
    NSTrackingArea *_trackingArea;	// 664 = 0x298
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) __weak FavoritesMenuController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (void)_favoritesMenuOutlineViewCommonInitWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

