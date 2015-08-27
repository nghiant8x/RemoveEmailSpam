#import "LoadRemoteContentBannerViewController.h"

@class NSTextField;

@interface JunkMailBannerViewController : LoadRemoteContentBannerViewController
{
    NSTextField *_messageField;	// 104 = 0x68
}

@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)markNotJunk:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)shouldDisplayToLoadRemoteContent;
- (id)backgroundColor;
- (void)dealloc;
- (id)nibName;

@end

