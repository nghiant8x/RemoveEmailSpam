#import <AppKit/NSTableCellView.h>

@class MCMessage, MessageListObjectProxy, NSColor;

@interface RichMessageCellBase : NSTableCellView
{
    NSColor *_textColor;	// 200 = 0xc8
}

+ (id)keyPathsForValuesAffectingIsSelected;
+ (id)keyPathsForValuesAffectingTextColor;
+ (id)keyPathsForValuesAffectingMessage;
+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSelected;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) MCMessage *message;
- (void)setBackgroundStyle:(long long)arg1;

// Remaining properties
@property(retain) MessageListObjectProxy *objectValue;

@end

