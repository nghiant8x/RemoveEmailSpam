#import "NSObject-Protocol.h"

@class MCAttachment, MFAttachmentViewController, NSMenuItem, NSPasteboard, NSString, WebArchive, WebView;
@protocol NSDraggingInfo, NSValidatedUserInterfaceItem;

@protocol EditingMessageWebViewDelegate <NSObject>
- (BOOL)validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg1;
- (BOOL)validateMenuItem:(NSMenuItem *)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (BOOL)selectionIsInList;
- (void)removeSelectedLink;
- (void)editLink;
- (void)setAllowsRichText:(BOOL)arg1;
- (BOOL)allowsRichText;
- (BOOL)allowQuoting;

@optional
- (void)webViewWillInsertContentsOfWebpage:(WebView *)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(WebView *)arg1;
- (void)webViewMainDocumentBaseURIDidChange:(WebView *)arg1;
- (BOOL)webView:(WebView *)arg1 canInsertFromPasteboard:(NSPasteboard *)arg2 forDrag:(BOOL)arg3;
- (BOOL)webView:(WebView *)arg1 canInsertFromDraggingInfo:(id <NSDraggingInfo>)arg2;
- (WebArchive *)webView:(WebView *)arg1 shouldReplaceSelectionWithWebArchive:(WebArchive *)arg2 givenAction:(long long)arg3;
- (void)webView:(WebView *)arg1 willRemoveMailAttachment:(MFAttachmentViewController *)arg2;
- (void)webView:(WebView *)arg1 didAddMailAttachment:(MCAttachment *)arg2;
- (void)webView:(WebView *)arg1 willReplaceSelectionWithFragment:(id *)arg2 pasteboard:(NSPasteboard *)arg3 type:(NSString *)arg4 options:(long long *)arg5;
- (void)webViewDidEndLiveResize:(WebView *)arg1;
- (void)webViewWillStartLiveResize:(WebView *)arg1;
- (void)removeAttachment:(MCAttachment *)arg1;
@end

