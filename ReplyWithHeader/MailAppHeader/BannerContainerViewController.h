#import <AppKit/NSViewController.h>

@class MessageWebDocumentView, NSArray, NSLayoutConstraint;

@interface BannerContainerViewController : NSViewController
{
    BOOL _loaded;	// 100 = 0x64
    NSLayoutConstraint *_heightConstraint;	// 104 = 0x68
    MessageWebDocumentView *_webDocumentView;	// 112 = 0x70
    NSArray *_bannerViewControllers;	// 120 = 0x78
}

@property(readonly, nonatomic) NSArray *bannerViewControllers; // @synthesize bannerViewControllers=_bannerViewControllers;
@property(nonatomic) BOOL loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void).cxx_destruct;
- (void)updateBannerDisplay;
- (void)addSubviewForBanner:(id)arg1;
- (void)updateLoaded;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)dealloc;
- (void)_bannerContainerViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

