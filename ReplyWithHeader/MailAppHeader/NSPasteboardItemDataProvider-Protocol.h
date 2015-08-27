#import "NSObject-Protocol.h"

@class NSPasteboard, NSPasteboardItem, NSString;

@protocol NSPasteboardItemDataProvider <NSObject>
- (void)pasteboard:(NSPasteboard *)arg1 item:(NSPasteboardItem *)arg2 provideDataForType:(NSString *)arg3;

@optional
- (void)pasteboardFinishedWithDataProvider:(NSPasteboard *)arg1;
@end

