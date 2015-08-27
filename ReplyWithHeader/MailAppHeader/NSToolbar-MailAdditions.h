#import <AppKit/NSToolbar.h>

@interface NSToolbar (MailAdditions)
+ (id)segmentedOrBorderlessItemForItemIdentifier:(id)arg1 withDictionary:(id)arg2;
+ (id)darkGrayItemForItemIdentifier:(id)arg1 withDictionary:(id)arg2;
+ (id)borderlessItemForItemIdentifier:(id)arg1 withDictionary:(id)arg2;
+ (id)segmentedItemForItemIdentifier:(id)arg1 withDictionary:(id)arg2;
+ (void)configureSegmentedItem:(id)arg1 withDictionary:(id)arg2 forSegment:(long long)arg3;
- (id)configureToolbarItems;
- (id)itemWithTag:(long long)arg1;
@end

