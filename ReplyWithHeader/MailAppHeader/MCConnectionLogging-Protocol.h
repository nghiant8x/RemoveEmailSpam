#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol MCConnectionLogging <NSObject>
- (void)flushLog;
- (void)logBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)logData:(NSData *)arg1 range:(struct _NSRange)arg2;
- (void)logData:(NSData *)arg1;
- (void)logString:(NSString *)arg1;
@end

