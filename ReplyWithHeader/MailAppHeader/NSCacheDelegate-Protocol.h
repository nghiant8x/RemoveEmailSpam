#import "NSObject-Protocol.h"

@class NSCache;

@protocol NSCacheDelegate <NSObject>

@optional
- (void)cache:(NSCache *)arg1 willEvictObject:(id)arg2;
@end

