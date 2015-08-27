#import "WebViewEditor.h"

#import "DOMEventListener-Protocol.h"

@class DOMNode, NSArray, NSMutableArray, NSString;

@interface MailWebViewEditor : WebViewEditor <DOMEventListener>
{
    NSMutableArray *_uneditedEditableElements;	// 8 = 0x8
    NSMutableArray *_editedEditableElements;	// 16 = 0x10
    BOOL _shouldAttachFilesAtEnd;	// 24 = 0x18
    BOOL _needToFinishMakingPlainAfterRemovingStationery;	// 25 = 0x19
    BOOL _isDeletingAllEncompassingSelection;	// 26 = 0x1a
    NSArray *_backgroundTilingElements;	// 32 = 0x20
    NSArray *_backgroundTilingDivs;	// 40 = 0x28
    NSArray *_backgroundTilingFixedSizes;	// 48 = 0x30
    DOMNode *_editableElementWithMouseDown;	// 56 = 0x38
}

@property(nonatomic) BOOL isDeletingAllEncompassingSelection; // @synthesize isDeletingAllEncompassingSelection=_isDeletingAllEncompassingSelection;
@property(retain, nonatomic) DOMNode *editableElementWithMouseDown; // @synthesize editableElementWithMouseDown=_editableElementWithMouseDown;
@property(nonatomic) BOOL needToFinishMakingPlainAfterRemovingStationery; // @synthesize needToFinishMakingPlainAfterRemovingStationery=_needToFinishMakingPlainAfterRemovingStationery;
@property(retain, nonatomic) NSArray *backgroundTilingFixedSizes; // @synthesize backgroundTilingFixedSizes=_backgroundTilingFixedSizes;
@property(retain, nonatomic) NSArray *backgroundTilingDivs; // @synthesize backgroundTilingDivs=_backgroundTilingDivs;
@property(retain, nonatomic) NSArray *backgroundTilingElements; // @synthesize backgroundTilingElements=_backgroundTilingElements;
- (void).cxx_destruct;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)webView:(id)arg1 didWriteSelectionToPasteboard:(id)arg2;
- (BOOL)insertNewline:(id)arg1;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)webViewDidChangeSelection:(id)arg1;
- (id)replaceOldSignatureWithNewSignature:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (void)mouseUpDidHappen:(id)arg1 inWebView:(id)arg2;
- (void)mouseDownDidHappen:(id)arg1 inWebView:(id)arg2;
- (id)editedEditableElements;
- (void)_doOrUndoEditingInSignatureWithInfo:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)_stationeryDidFinishLoadingResources:(id)arg1;
- (void)_webViewDidLoadStationery:(id)arg1;
- (void)prepareToRemoveStationery;
- (BOOL)webView:(id)arg1 canInsertFromPasteboard:(id)arg2 forDrag:(BOOL)arg3;
- (void)insertAttributedStringOfAttachments:(id)arg1 allAttachmentsAreOkay:(BOOL)arg2;
- (BOOL)_isOkayToInsertAttachment:(id)arg1;
- (void)_insertAttributedStringOfAttachments:(id)arg1 allAttachmentsAreOkay:(BOOL)arg2;
- (void)setShouldAttachFilesAtEnd:(BOOL)arg1;
- (BOOL)shouldAttachFilesAtEnd;
- (BOOL)isOkayToLoadStationery;
- (BOOL)webView:(id)arg1 shouldInsertAttachments:(id)arg2 context:(id)arg3;
- (id)alertForConvertingToRichText;
- (void)setAllowsRichText:(BOOL)arg1;
- (BOOL)allowQuoting;
- (void)setComposeBackEnd:(id)arg1;
- (void)setUp;
- (void)prepareToGoAway;
@property(readonly, copy, nonatomic) NSArray *insertablePasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

