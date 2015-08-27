#import "ComposeBackEnd.h"

@class NSTextStorage;

@interface ComposeBackEnd_Scripting : ComposeBackEnd
{
    NSTextStorage *_textStorage;	// 8 = 0x8
}

@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)_coalescedConvertTextStorage;
- (void)_convertTextStorage;
- (void)_pushTextStorage;
- (void)setContent:(id)arg1;
- (id)content;

@end

