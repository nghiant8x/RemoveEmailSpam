#import "BannerViewController.h"

@class BannerImageView, NSButton, NSLayoutConstraint;

@interface LoadRemoteContentBannerViewController : BannerViewController
{
    NSButton *_loadRemoteContentButton;	// 104 = 0x68
    NSLayoutConstraint *_messageFieldToLoadRemoteContentButtonHorizontalSpacing;	// 112 = 0x70
    BannerImageView *_icon;	// 120 = 0x78
}

@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSLayoutConstraint *messageFieldToLoadRemoteContentButtonHorizontalSpacing; // @synthesize messageFieldToLoadRemoteContentButtonHorizontalSpacing=_messageFieldToLoadRemoteContentButtonHorizontalSpacing;
@property(nonatomic) __weak NSButton *loadRemoteContentButton; // @synthesize loadRemoteContentButton=_loadRemoteContentButton;
- (void).cxx_destruct;
- (void)loadRemoteContent:(id)arg1;
- (void)updateWantsDisplay;
- (void)updateBannerContents;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
@property(readonly, nonatomic) BOOL shouldDisplayToLoadRemoteContent;
- (void)dealloc;
- (id)nibName;

@end

