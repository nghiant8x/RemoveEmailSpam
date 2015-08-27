@class NSArray, NSAttributedString;

@protocol NSTextInput
- (NSArray *)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (NSAttributedString *)attributedSubstringFromRange:(struct _NSRange)arg1;
- (long long)conversationIdentifier;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
@end

