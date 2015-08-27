#import "NSObject-Protocol.h"

@class MFMailbox, NSArray, NSMenu, NSString, NSWindow;

@protocol MVMailboxSelectionOwner <NSObject>
- (NSWindow *)mailboxSelectionWindow;
- (void)revealMailbox:(MFMailbox *)arg1;
- (BOOL)sectionIsExpanded:(NSString *)arg1;
- (BOOL)mailboxIsExpanded:(MFMailbox *)arg1;
- (void)selectPathsToMailboxes:(NSArray *)arg1;
- (BOOL)isSelectedMailboxSpecial;
- (NSArray *)sortedSectionItemsForTimeMachine;
- (MFMailbox *)selectedMailbox;
- (NSArray *)selectedMailboxes;

@optional
- (void)didCloseContextMenu:(NSMenu *)arg1;
- (void)willShowContextMenu:(NSMenu *)arg1;
- (NSArray *)expandedItems;
@end

