#import "NSObject-Protocol.h"

@class NSTabView, NSTabViewItem;

@protocol NSTabViewDelegate <NSObject>

@optional
- (void)tabViewDidChangeNumberOfTabViewItems:(NSTabView *)arg1;
- (void)tabView:(NSTabView *)arg1 didSelectTabViewItem:(NSTabViewItem *)arg2;
- (void)tabView:(NSTabView *)arg1 willSelectTabViewItem:(NSTabViewItem *)arg2;
- (BOOL)tabView:(NSTabView *)arg1 shouldSelectTabViewItem:(NSTabViewItem *)arg2;
@end

