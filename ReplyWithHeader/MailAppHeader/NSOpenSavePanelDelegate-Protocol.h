#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol NSOpenSavePanelDelegate <NSObject>

@optional
- (void)panelSelectionDidChange:(id)arg1;
- (void)panel:(id)arg1 willExpand:(BOOL)arg2;
- (NSString *)panel:(id)arg1 userEnteredFilename:(NSString *)arg2 confirmed:(BOOL)arg3;
- (void)panel:(id)arg1 didChangeToDirectoryURL:(NSURL *)arg2;
- (BOOL)panel:(id)arg1 validateURL:(NSURL *)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(NSURL *)arg2;
@end

