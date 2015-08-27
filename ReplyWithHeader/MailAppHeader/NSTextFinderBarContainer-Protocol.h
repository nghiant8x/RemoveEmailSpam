#import "NSObject-Protocol.h"

@class NSView;

@protocol NSTextFinderBarContainer <NSObject>
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (void)findBarViewDidChangeHeight;

@optional
- (NSView *)contentView;
@end

