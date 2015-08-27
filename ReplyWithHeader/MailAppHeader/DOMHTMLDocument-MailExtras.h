#import <WebKit/DOMHTMLDocument.h>

@interface DOMHTMLDocument (MailExtras)
+ (id)listElements;
- (id)createElement:(id)arg1 class:(id)arg2 id:(id)arg3 editable:(id)arg4;
- (BOOL)convertStationeryBackgroundImageURLs;
- (id)backgroundImageURLs;
- (id)generatorMeta;
- (id)head;
- (id)createFragmentForURL:(id)arg1 text:(id)arg2;
- (id)createSpanElementWithTabs:(long long)arg1;
- (id)createFragmentForWebArchive:(id)arg1 baseURL:(id)arg2 bodyAsDiv:(BOOL)arg3;
- (id)createFragmentForWebArchive:(id)arg1 baseURL:(id)arg2;
- (id)createFragmentForWebArchive:(id)arg1;
- (id)createNonemptyDivElementWithPlainStyle;
- (id)createMessageQuoteElement;
- (id)createFragmentForStringLosingBR:(id)arg1;
- (id)createDocumentFragmentWithMarkupString:(id)arg1;
@property(readonly, nonatomic) BOOL containsSelectionMarkers;
@end

