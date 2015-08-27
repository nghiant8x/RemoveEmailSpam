#import <objc/NSObject.h>

#import "EditingMessageWebViewDelegate-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class ComposeBackEnd, DOMHTMLAnchorElement, DocumentEditor, EditableWebMessageDocument, EditingMessageWebView, EditingWebMessageController, HyperlinkEditor, NSDictionary, NSMutableSet, NSString, WebFrame;

@interface WebViewEditor : NSObject <EditingMessageWebViewDelegate, NSUserInterfaceValidations>
{
    EditingWebMessageController *_messageController;	// 8 = 0x8
    NSMutableSet *_largeFilesAddedWhileEditing;	// 16 = 0x10
    BOOL _finalSpellCheckingIsInProgress;	// 24 = 0x18
    BOOL _containsRichText;	// 25 = 0x19
    BOOL _containsRichTextFlagIsValid;	// 26 = 0x1a
    BOOL _needToCheckRichnessInRange;	// 27 = 0x1b
    EditingMessageWebView *_webView;	// 32 = 0x20
    DocumentEditor *_documentEditor;	// 40 = 0x28
    WebFrame *_frameAllowedToLoadContent;	// 48 = 0x30
    NSDictionary *_infoForRichnessTest;	// 56 = 0x38
    ComposeBackEnd *_composeBackEnd;	// 64 = 0x40
    HyperlinkEditor *_hyperlinkEditor;	// 72 = 0x48
    DOMHTMLAnchorElement *_linkWhoseTextIsBeingEdited;	// 80 = 0x50
}

@property(retain, nonatomic) DOMHTMLAnchorElement *linkWhoseTextIsBeingEdited; // @synthesize linkWhoseTextIsBeingEdited=_linkWhoseTextIsBeingEdited;
@property(nonatomic) BOOL needToCheckRichnessInRange; // @synthesize needToCheckRichnessInRange=_needToCheckRichnessInRange;
@property(nonatomic) BOOL containsRichTextFlagIsValid; // @synthesize containsRichTextFlagIsValid=_containsRichTextFlagIsValid;
@property(retain, nonatomic) HyperlinkEditor *hyperlinkEditor; // @synthesize hyperlinkEditor=_hyperlinkEditor;
@property(retain, nonatomic) ComposeBackEnd *composeBackEnd; // @synthesize composeBackEnd=_composeBackEnd;
@property(retain, nonatomic) NSDictionary *infoForRichnessTest; // @synthesize infoForRichnessTest=_infoForRichnessTest;
@property(retain, nonatomic) WebFrame *frameAllowedToLoadContent; // @synthesize frameAllowedToLoadContent=_frameAllowedToLoadContent;
@property(nonatomic) __weak DocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(retain, nonatomic) EditingMessageWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webViewDidEndLiveResize:(id)arg1;
- (void)webViewWillStartLiveResize:(id)arg1;
- (void)largeFileAdded:(id)arg1;
- (id)largeFilesAddedWhileEditing;
- (void)saveChangedDocument:(id)arg1;
- (void)saveDocument:(id)arg1;
- (void)pasteAsMarkup;
- (void)replaceSelectionWithFragment:(id)arg1;
- (BOOL)_isOkayToInsertAttachment:(id)arg1;
- (void)insertAttributedStringOfAttachments:(id)arg1 allAttachmentsAreOkay:(BOOL)arg2;
- (void)addAttachmentsForFiles:(id)arg1;
- (void)redisplayChangedAttachment:(id)arg1;
- (void)viewAttachments:(id)arg1 inLine:(BOOL)arg2;
- (void)removeAttachments:(id)arg1;
- (id)directoryForAttachment:(id)arg1;
- (id)selectedAttachmentNode;
- (id)attachmentForEvent:(id)arg1;
- (id)selectedAttachments;
- (void)replaceRiskyAttachmentsWithLinks;
- (BOOL)removeAttachmentsLeavingPlaceholder:(BOOL)arg1;
- (void)removeAttachment:(id)arg1;
- (void)webView:(id)arg1 willRemoveMailAttachment:(id)arg2;
- (void)webView:(id)arg1 didAddMailAttachment:(id)arg2;
@property(nonatomic) BOOL shouldAttachFilesAtEnd;
- (void)webViewWillInsertContentsOfWebpage:(id)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(id)arg1;
- (void)webViewMainDocumentBaseURIDidChange:(id)arg1;
- (BOOL)webView:(id)arg1 shouldInsertAttachments:(id)arg2 context:(id)arg3;
- (id)webView:(id)arg1 shouldReplaceSelectionWithWebArchive:(id)arg2 givenAction:(long long)arg3;
- (id)_validRangeFromSelection:(id)arg1;
- (BOOL)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)webViewDidChange:(id)arg1;
- (BOOL)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (void)appendAttributedString:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendParsedMessage:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
- (void)appendFragment:(id)arg1 toDocument:(id)arg2 asQuote:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isSelectionEditable;
- (void)beginConvertToRichTextAlert:(id)arg1;
- (id)alertForConvertingToRichText;
- (BOOL)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
- (void)webViewDidInsertRichText:(id)arg1;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (void)_checkRichnessForEditedRange:(id)arg1;
- (void)changeComposeModeInBackEndAndView:(long long)arg1;
- (void)invalidateRichTextCache;
@property(nonatomic) BOOL containsRichText;
@property(nonatomic) BOOL allowsRichText;
- (void)removeAllFormattingFromWebView;
- (BOOL)webView:(id)arg1 canInsertFromPasteboard:(id)arg2 forDrag:(BOOL)arg3;
- (void)setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)_setFloat:(id)arg1 ofNode:(id)arg2 inView:(id)arg3 undoTitle:(id)arg4;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)insertListWithNumbers:(BOOL)arg1 undoTitle:(id)arg2;
- (void)insertBulletedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (BOOL)_selectionIsInEmptyListItem;
- (BOOL)selectionIsInListTypes:(id)arg1;
- (BOOL)selectionIsInList;
- (void)changeIndentationIfAllowed:(long long)arg1;
- (void)decreaseIndentation;
- (void)increaseIndentation;
@property(readonly, nonatomic) BOOL allowQuoting;
- (void)insertList:(id)arg1;
- (void)webViewDidChangeSelection:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;
- (void)editLink:(id)arg1;
- (void)_editLink;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateIgnoredWordsForHeader:(id)arg1;
- (BOOL)finalSpellCheckingIsInProgress;
- (void)setFinalSpellCheckingIsInProgress:(BOOL)arg1;
- (void)finalSpellCheckCompleted:(id)arg1;
- (void)endFinalSpellCheck;
- (BOOL)startFinalSpellCheck;
- (void)setCheckGrammarWithSpelling:(BOOL)arg1;
- (void)setInlineSpellCheckingEnabled:(BOOL)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)setMessageController:(id)arg1;
@property(readonly, nonatomic) EditableWebMessageDocument *document;
@property(readonly, nonatomic) BOOL useDesignMode;
- (void)close;
- (void)setUp;
- (void)earlySetUp;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

