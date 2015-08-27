#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSColor, NSDraggingSession, NSEvent, NSImage, NSIndexSet, NSMenu, NSTableColumn, NSTableView, NSWindow;

@protocol MailTableViewDelegate <NSTableViewDelegate>

@optional
- (void)userDidScrollInTableView:(NSTableView *)arg1;
- (NSMenu *)tableViewGetDefaultMenu:(NSTableView *)arg1;
- (NSColor *)mailTableViewTopLineColor:(NSTableView *)arg1;
- (void)mailTableViewDidResignFirstResponder:(NSTableView *)arg1;
- (void)mailTableViewDidBecomeFirstResponder:(NSTableView *)arg1;
- (BOOL)mailTableView:(NSTableView *)arg1 shouldAddTableColumn:(NSTableColumn *)arg2;
- (BOOL)mailTableView:(NSTableView *)arg1 shouldRemoveTableColumn:(NSTableColumn *)arg2;
- (void)mailTableView:(NSTableView *)arg1 didMouseDown:(NSEvent *)arg2;
- (void)mailTableView:(NSTableView *)arg1 willMouseDown:(NSEvent *)arg2;
- (void)mailTableView:(NSTableView *)arg1 gotEvent:(NSEvent *)arg2;
- (void)mailTableViewDidEndLiveResize:(NSTableView *)arg1;
- (void)mailTableViewWillStartLiveResize:(NSTableView *)arg1;
- (void)mailTableViewDidMoveToWindow:(NSTableView *)arg1;
- (void)mailTableView:(NSTableView *)arg1 willMoveToWindow:(NSWindow *)arg2;
- (NSArray *)mailTableView:(NSTableView *)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4;
- (void)mailTableView:(NSTableView *)arg1 willDrawRowsInRange:(struct _NSRange)arg2;
- (int)mailTableView:(NSTableView *)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (long long)mailTableView:(NSTableView *)arg1 shouldScrollRowToVisible:(long long)arg2;
- (BOOL)mailTableView:(NSTableView *)arg1 doCommandBySelector:(SEL)arg2;
- (void)mailTableViewDraggingSession:(NSDraggingSession *)arg1 movedTo:(struct CGPoint)arg2;
- (void)mailTableViewDragWillEnd:(NSTableView *)arg1 operation:(unsigned long long)arg2;
- (NSImage *)mailTableView:(NSTableView *)arg1 dragImageForRowsWithIndexes:(NSIndexSet *)arg2 event:(NSEvent *)arg3 dragImageOffset:(struct CGPoint *)arg4;
@end

