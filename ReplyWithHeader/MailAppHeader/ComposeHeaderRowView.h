#import <AppKit/NSView.h>

@interface ComposeHeaderRowView : NSView
{
    BOOL _drawsFullWidthSeparator;	// 152 = 0x98
}

@property(nonatomic) BOOL drawsFullWidthSeparator; // @synthesize drawsFullWidthSeparator=_drawsFullWidthSeparator;
- (void)drawRect:(struct CGRect)arg1;

@end

