#import "NSObject-Protocol.h"

@class FlaggedStatusToolbarItem;

@protocol FlaggedStatusToolbarItemDelegate <NSObject>

@optional
- (void)toggleFlaggedStatus:(BOOL)arg1;
- (BOOL)validateFlaggedStatusToolbarItem:(FlaggedStatusToolbarItem *)arg1;
@end

