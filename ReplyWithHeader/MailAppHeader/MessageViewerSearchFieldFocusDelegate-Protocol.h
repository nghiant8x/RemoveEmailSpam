#import "NSObject-Protocol.h"

@class MessageViewerSearchField;

@protocol MessageViewerSearchFieldFocusDelegate <NSObject>
- (void)searchFieldDidEndSearching:(MessageViewerSearchField *)arg1;
@end

