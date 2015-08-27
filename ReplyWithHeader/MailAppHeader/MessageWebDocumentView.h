#import <MailUI/MUIWebDocumentView.h>

@interface MessageWebDocumentView : MUIWebDocumentView
{
    struct CGRect _exclusionRect;	// 152 = 0x98
    BOOL _showRedundantContent;	// 184 = 0xb8
    BOOL _showRedundantContentLinks;	// 185 = 0xb9
    BOOL _hasBackground;	// 186 = 0xba
    long long _currentClusterIndex;	// 192 = 0xc0
}

@property(nonatomic) BOOL hasBackground; // @synthesize hasBackground=_hasBackground;
@property(nonatomic) long long currentClusterIndex; // @synthesize currentClusterIndex=_currentClusterIndex;
- (void)linkAccessibilityView:(id)arg1;
- (void)_hasBackgroundChanged:(id)arg1;
- (void)toggleHighlightRedundantContent:(id)arg1;
- (void)generateSelectionParsedMessage:(CDUnknownBlockType)arg1;
- (void)generateStyleInlinedParsedMessage:(CDUnknownBlockType)arg1;
- (BOOL)shouldHandleClickForURL:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)setWebDocument:(id)arg1;
@property(nonatomic) BOOL showRedundantContentLinks;
@property(nonatomic) BOOL showRedundantContent;
@property(nonatomic) struct CGRect exclusionRect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewGroup:(id)arg2;
- (id)initWithCoder:(id)arg1 viewGroup:(id)arg2;
- (BOOL)_debugBundleLoaded;
- (void)_messageWebDocumentViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

