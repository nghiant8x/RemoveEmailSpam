@class NSArray, NSAttributedString;

@protocol NSTextInputClient
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (NSArray *)validAttributesForMarkedText;
- (NSAttributedString *)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;

@optional
- (BOOL)drawsVerticallyForCharacterAtIndex:(unsigned long long)arg1;
- (long long)windowLevel;
- (double)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1;
- (NSAttributedString *)attributedString;
@end

