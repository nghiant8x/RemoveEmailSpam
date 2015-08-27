#import "BannerViewController.h"

@class BannerImageView, NSButton, NSTextField;

@interface CertificateBannerViewController : BannerViewController
{
    BannerImageView *_certificateImage;	// 104 = 0x68
    NSTextField *_messageField;	// 112 = 0x70
    NSButton *_helpButton;	// 120 = 0x78
}

@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak BannerImageView *certificateImage; // @synthesize certificateImage=_certificateImage;
- (void).cxx_destruct;
- (void)showDetails:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (id)nibName;

@end

