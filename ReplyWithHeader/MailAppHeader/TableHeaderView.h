#import <AppKit/NSTableHeaderView.h>

@interface TableHeaderView : NSTableHeaderView
{
    BOOL _noSeparatorLines;	// 216 = 0xd8
}

+ (id)updateHeaderViewForTableView:(id)arg1;
@property(nonatomic) BOOL noSeparatorLines; // @synthesize noSeparatorLines=_noSeparatorLines;
- (BOOL)_drawingEndSeparator;
- (void)setDrawsSeparatorLines:(BOOL)arg1;
- (BOOL)drawsSeparatorLines;

@end

