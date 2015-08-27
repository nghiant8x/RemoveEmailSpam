#import "NSObject-Protocol.h"

@class MCStringRenderContext, NSData, NSString;

@protocol MCUserAgent <NSObject>
- (NSString *)localAttachmentFilesDirectory;
- (NSString *)junkStringFromHTMLData:(NSData *)arg1 textEncodingName:(NSString *)arg2 context:(MCStringRenderContext *)arg3;
- (long long)junkMailBehavior;
- (void)setIsInTimeMachineMode:(BOOL)arg1;
- (BOOL)isInTimeMachineMode;
@end

