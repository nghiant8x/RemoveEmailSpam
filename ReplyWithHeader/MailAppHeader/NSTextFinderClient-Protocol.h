#import "NSObject-Protocol.h"

@class NSArray, NSString, NSView;

@protocol NSTextFinderClient <NSObject>

@optional
@property(readonly, copy) NSArray *visibleCharacterRanges;
@property(copy) NSArray *selectedRanges;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) NSString *string;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, getter=isSelectable) BOOL selectable;
- (void)drawCharactersInRange:(struct _NSRange)arg1 forContentView:(NSView *)arg2;
- (NSArray *)rectsForCharacterRange:(struct _NSRange)arg1;
- (NSView *)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(struct _NSRange *)arg2;
- (void)didReplaceCharacters;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(NSString *)arg2;
- (BOOL)shouldReplaceCharactersInRanges:(NSArray *)arg1 withStrings:(NSArray *)arg2;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (unsigned long long)stringLength;
- (NSString *)stringAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 endsWithSearchBoundary:(char *)arg3;
@end

