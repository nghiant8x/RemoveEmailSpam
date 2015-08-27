#import "NSObject-Protocol.h"

@class MFMailbox;
@protocol MFUIMailbox;

@protocol FavoritesMenuDelegateProtocol <NSObject>

@optional
- (void)menuDidClose;
- (void)menuDidPresent;
- (void)menuDidSelectMailbox:(MFMailbox *)arg1;
- (id <MFUIMailbox>)selectedMailbox;
@end

