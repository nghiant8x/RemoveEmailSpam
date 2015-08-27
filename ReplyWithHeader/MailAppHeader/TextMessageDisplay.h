#import <objc/NSObject.h>

#import "NSTextViewDelegate-Protocol.h"

@class MCMessage, MessageTextView, NSAttributedString, NSString, NSWindow;

@interface TextMessageDisplay : NSObject <NSTextViewDelegate>
{
    BOOL _showControlCharacters;	// 8 = 0x8
    MCMessage *_message;	// 16 = 0x10
    NSWindow *_singleWindow;	// 24 = 0x18
    MessageTextView *_textView;	// 32 = 0x20
    NSAttributedString *_rawSourceString;	// 40 = 0x28
}

+ (void)_removeDisplayForMessage:(id)arg1;
+ (void)displayRawSourceForMessage:(id)arg1;
@property(nonatomic) BOOL showControlCharacters; // @synthesize showControlCharacters=_showControlCharacters;
@property(copy, nonatomic) NSAttributedString *rawSourceString; // @synthesize rawSourceString=_rawSourceString;
@property(nonatomic) MessageTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSWindow *singleWindow; // @synthesize singleWindow=_singleWindow;
@property(retain, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)saveAs:(id)arg1;
- (void)toggleShowControlCharacters:(id)arg1;
- (void)showPrintPanel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)bringToFront;
- (BOOL)validateMenuItem:(id)arg1;
- (id)messageTextView:(id)arg1 willReturnMenu:(id)arg2 forEvent:(id)arg3;
- (void)_displayRawSource;
- (void)_prepareForMessage:(id)arg1;
- (void)_beginBackgroundLoad;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

