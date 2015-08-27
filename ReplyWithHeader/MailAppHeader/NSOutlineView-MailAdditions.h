#import <AppKit/NSOutlineView.h>

@interface NSOutlineView (MailAdditions)
- (id)editedItem;
- (id)copyOfItemAndDescendance:(id)arg1;
- (void)_collectDescendants:(id *)arg1 ofItem:(id)arg2;
- (BOOL)item:(id)arg1 isDescendantOf:(id)arg2;
@end

