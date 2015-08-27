#import "NSObject-Protocol.h"

@class MFLibraryUpgrader, NSError;

@protocol MFLibraryUpgraderDelegate <NSObject>
- (void)upgrader:(MFLibraryUpgrader *)arg1 didFailWithError:(NSError *)arg2;
- (void)upgraderDidFinish:(MFLibraryUpgrader *)arg1;
@end

