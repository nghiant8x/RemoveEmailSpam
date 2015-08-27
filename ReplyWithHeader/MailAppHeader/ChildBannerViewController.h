#import "BannerViewController.h"

@class BannerImageView, NSButton, NSLayoutConstraint, NSTextField;

@interface ChildBannerViewController : BannerViewController
{
    long long _parentalControlMessageState;	// 104 = 0x68
    BannerImageView *_icon;	// 112 = 0x70
    NSTextField *_messageField;	// 120 = 0x78
    NSButton *_helpButton;	// 128 = 0x80
    NSButton *_sendButton;	// 136 = 0x88
    NSLayoutConstraint *_helpButtonTrailingSpace;	// 144 = 0x90
}

@property(nonatomic) __weak NSLayoutConstraint *helpButtonTrailingSpace; // @synthesize helpButtonTrailingSpace=_helpButtonTrailingSpace;
@property(nonatomic) __weak NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak BannerImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) long long parentalControlMessageState; // @synthesize parentalControlMessageState=_parentalControlMessageState;
- (void).cxx_destruct;
- (void)sendMessage:(id)arg1;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (id)nibName;

@end

