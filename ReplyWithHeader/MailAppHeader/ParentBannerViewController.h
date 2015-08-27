#import "BannerViewController.h"

@class BannerImageView, NSButton, NSMutableArray, NSString, NSTextField;

@interface ParentBannerViewController : BannerViewController
{
    NSMutableArray *_requestedAddresses;	// 104 = 0x68
    BOOL _requestIsForSenders;	// 112 = 0x70
    BannerImageView *_icon;	// 120 = 0x78
    NSTextField *_messageField;	// 128 = 0x80
    NSButton *_helpButton;	// 136 = 0x88
    NSButton *_respondButton;	// 144 = 0x90
    NSString *_childAddress;	// 152 = 0x98
    long long _permissionRequestState;	// 160 = 0xa0
}

@property(nonatomic) long long permissionRequestState; // @synthesize permissionRequestState=_permissionRequestState;
@property(nonatomic) __weak NSString *childAddress; // @synthesize childAddress=_childAddress;
@property(nonatomic) BOOL requestIsForSenders; // @synthesize requestIsForSenders=_requestIsForSenders;
@property(nonatomic) __weak NSButton *respondButton; // @synthesize respondButton=_respondButton;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)rejectChildRequest:(id)arg1;
- (void)approveChildRequest:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (id)initWithBannerContainerViewController:(id)arg1;
- (id)nibName;

@end

