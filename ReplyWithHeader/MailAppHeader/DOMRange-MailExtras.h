#import <WebKit/DOMRange.h>

@interface DOMRange (MailExtras)
- (BOOL)hasNoSignificantContents;
- (BOOL)hasNoSignificantContentsOtherThanAttachments;
- (BOOL)hasNoSignificantContentsOrWhitespace;
- (BOOL)runSelectorOnContents:(SEL)arg1;
- (BOOL)containsListElements;
- (BOOL)isEditable;
- (void)setWithStringRepresentation:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (BOOL)isEqualToRange:(id)arg1;
- (id)stringRepresentation;
- (id)attachmentsFromDocument:(id)arg1;
- (void)attachments:(id *)arg1 urls:(id *)arg2 fromDocument:(id)arg3;
- (id)attachmentsByURLFromDocument:(id)arg1;
- (BOOL)containsRichTextForMessageFont:(id)arg1;
- (id)rangeOfContainingBlock;
- (void)balanceContainers;
- (void)fixIfStartIsAtEndOfContainerNode;
- (void)fixIfEndpointIsAtBeginningOfLine;
- (void)getBlockBoundaryParent:(id *)arg1 nextSibling:(id *)arg2 atStart:(BOOL)arg3;
- (id)attributedStringWithDocument:(id)arg1;
- (id)stringValue;
- (void)hoistRange;
- (BOOL)includeTemporarySelectionMarkers;
- (BOOL)isEquivalentToCollapsedRange;
- (id)lastNode;
- (id)firstNode;
@end

