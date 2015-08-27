#import <AppKit/NSConcreteTextStorage.h>

@interface ScriptableMessageTextStorage : NSConcreteTextStorage
{
}

- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;

@end

