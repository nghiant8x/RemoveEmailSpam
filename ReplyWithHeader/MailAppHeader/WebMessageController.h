#import <objc/NSObject.h>

#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class MFWebMessageDocument, NSString, NSView, TilingWebView, WebArchive;

@interface WebMessageController : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    TilingWebView *_webView;	// 8 = 0x8
    NSView *_mainFrameDocumentView;	// 16 = 0x10
    BOOL _isForURLSharing;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    MFWebMessageDocument *_document;	// 40 = 0x28
    id _parentController;	// 48 = 0x30
    id _itemToShare;	// 56 = 0x38
    WebArchive *_webArchiveForSharing;	// 64 = 0x40
    struct CGRect _frameOfItemToShare;	// 72 = 0x48
}

+ (id)webResourcesForAttachments:(id)arg1 urls:(id)arg2;
@property(retain, nonatomic) WebArchive *webArchiveForSharing; // @synthesize webArchiveForSharing=_webArchiveForSharing;
@property(nonatomic) BOOL isForURLSharing; // @synthesize isForURLSharing=_isForURLSharing;
@property(nonatomic) struct CGRect frameOfItemToShare; // @synthesize frameOfItemToShare=_frameOfItemToShare;
@property(retain, nonatomic) id itemToShare; // @synthesize itemToShare=_itemToShare;
@property(nonatomic) __weak id parentController; // @synthesize parentController=_parentController;
@property(readonly, nonatomic) MFWebMessageDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_adjustSpellingAndGrammarMenuItems:(id)arg1;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (BOOL)considerBaseURLsInternal;
- (BOOL)_isInternalURL:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_openLinkBehind:(id)arg1;
- (void)_openLink:(id)arg1;
- (void)setMainFrameDocumentView:(id)arg1;
- (id)mainFrameDocumentView;
- (void)adjustFontSizeBy:(float)arg1;
- (void)dealloc;
- (void)stopLoading;
- (BOOL)hasFinishedLoading;
- (void)documentResized;
- (id)_webView:(id)arg1 immediateActionAnimationControllerForHitTestResult:(id)arg2 withType:(int)arg3;
@property(retain, nonatomic) TilingWebView *webView;
- (void)setDocument:(id)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

