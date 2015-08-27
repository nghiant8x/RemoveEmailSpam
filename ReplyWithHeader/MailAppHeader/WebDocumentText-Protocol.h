#import "NSObject-Protocol.h"

@class NSAttributedString, NSString;

@protocol WebDocumentText <NSObject>
- (void)deselectAll;
- (void)selectAll;
- (NSAttributedString *)selectedAttributedString;
- (NSString *)selectedString;
- (NSAttributedString *)attributedString;
- (NSString *)string;
- (BOOL)supportsTextEncoding;
@end

