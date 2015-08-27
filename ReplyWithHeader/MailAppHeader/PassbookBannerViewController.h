#import "LoadRemoteContentBannerViewController.h"

@class NSButton, NSMutableArray, NSTextField;

@interface PassbookBannerViewController : LoadRemoteContentBannerViewController
{
    NSTextField *_messageField;	// 104 = 0x68
    NSButton *_viewPassButton;	// 112 = 0x70
    NSMutableArray *_passes;	// 120 = 0x78
}

@property(retain, nonatomic) NSMutableArray *passes; // @synthesize passes=_passes;
@property(nonatomic) __weak NSButton *viewPassButton; // @synthesize viewPassButton=_viewPassButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)showPasses:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)setWantsDisplay:(BOOL)arg1;
- (void)setContainer:(id)arg1;
- (BOOL)shouldDisplayToLoadRemoteContent;
- (void)dealloc;
- (id)initWithBannerContainerViewController:(id)arg1;
- (id)nibName;

@end

