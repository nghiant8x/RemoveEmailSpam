#import <AppKit/NSTableRowView.h>

@class NSTableView;

@interface RichTableRowView : NSTableRowView
{
    unsigned long long _rowStyle;	// 216 = 0xd8
    NSTableView *_tableView;	// 224 = 0xe0
}

@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rowStyle;
- (void)setEmphasized:(BOOL)arg1;
- (void)setNextRowSelected:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)_backgroundColorForMargin;
- (void)_drawBasicSeparatorInRect:(struct CGRect)arg1 withMargin:(BOOL)arg2;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (BOOL)_isFollowedByExpandedThread;
- (BOOL)_isChildOfThread;
- (BOOL)_isLastThreadChild;
- (BOOL)_isExpandedThreadParent;
- (id)_rowBelow;
- (id)_rowAbove;
- (id)_threadBackgroundColor;
- (id)_separatorColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (void)_richTableRowViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

