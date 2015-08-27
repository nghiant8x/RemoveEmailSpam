#import <WebKit/DOMHTMLElement.h>

@interface DOMHTMLElement (MailExtras)
+ (BOOL)isRichTextStyle:(id)arg1;
+ (BOOL)isRichTextStyleCheckingOnlyFont:(id)arg1;
+ (BOOL)isRichTextStyleNotCheckingFont:(id)arg1;
- (BOOL)hasClassName:(id)arg1;
- (void)attachment:(id *)arg1 url:(id *)arg2 fromDocument:(id)arg3;
- (void)restoreEditableElementsEdited:(id *)arg1 unedited:(id *)arg2;
- (void)recursivelyRemoveMailAttributes:(BOOL)arg1 convertObjectsToImages:(BOOL)arg2 convertEditableElements:(BOOL)arg3 removeDefaultColorStyle:(BOOL)arg4;
- (BOOL)isRichTextElementForMessageFont:(id)arg1;
- (BOOL)isRichTextElementType;
@end

