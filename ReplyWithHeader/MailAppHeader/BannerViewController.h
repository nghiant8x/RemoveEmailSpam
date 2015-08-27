#import <AppKit/NSViewController.h>

@class BannerBackgroundView, BannerContainerViewController, MUIWebDocument, MessageWebDocumentView, NSColor;

@interface BannerViewController : NSViewController
{
    BOOL _loaded;	// 100 = 0x64
    BOOL _wantsDisplay;	// 101 = 0x65
    BOOL _viewIsLoaded;	// 102 = 0x66
    BannerContainerViewController *_container;	// 104 = 0x68
}

+ (id)keyPathsForValuesAffectingWebDocument;
+ (id)keyPathsForValuesAffectingWebDocumentView;
@property(nonatomic) BOOL viewIsLoaded; // @synthesize viewIsLoaded=_viewIsLoaded;
@property(nonatomic) BannerContainerViewController *container; // @synthesize container=_container;
- (void)updateWantsDisplay;
- (void)updateBannerContents;
@property(nonatomic) BOOL wantsDisplay;
@property(nonatomic) BOOL loaded;
@property(readonly, nonatomic) MUIWebDocument *webDocument;
@property(readonly, nonatomic) __weak MessageWebDocumentView *webDocumentView;
@property(readonly, nonatomic) NSColor *backgroundColor;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
@property(retain) BannerBackgroundView *view;
@property(readonly, nonatomic) double bannerHeight;
- (id)nibBundle;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBannerContainerViewController:(id)arg1;

@end

