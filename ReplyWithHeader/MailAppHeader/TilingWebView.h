#import <WebKit/WebView.h>

@interface TilingWebView : WebView
{
    BOOL _disableSizeToFit;	// 160 = 0xa0
    double _leftMargin;	// 168 = 0xa8
    double _minHeight;	// 176 = 0xb0
}

@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) BOOL disableSizeToFit; // @synthesize disableSizeToFit=_disableSizeToFit;
- (void)sizeToFit;
- (void)_tilingWebViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;

@end

