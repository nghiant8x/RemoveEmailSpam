#import <AppKit/NSToolbarItem.h>

@protocol FlaggedStatusToolbarItemDelegate;

@interface FlaggedStatusToolbarItem : NSToolbarItem
{
    id <FlaggedStatusToolbarItemDelegate> _delegate;	// 152 = 0x98
}

@property(nonatomic) __weak id <FlaggedStatusToolbarItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)validate;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1;

@end

