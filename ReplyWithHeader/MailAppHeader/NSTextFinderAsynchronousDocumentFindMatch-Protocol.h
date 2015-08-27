#import "NSObject-Protocol.h"

@class NSArray, NSView;

@protocol NSTextFinderAsynchronousDocumentFindMatch <NSObject>
@property(readonly, retain, nonatomic) NSArray *textRects;
@property(readonly, retain, nonatomic) NSView *containingView;
- (void)generateTextImage:(void (^)(NSImage *))arg1;
@end

