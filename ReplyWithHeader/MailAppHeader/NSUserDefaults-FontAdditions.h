#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (FontAdditions)
@property double messageListFontSize;
@property(retain) NSString *messageListFontName;
- (void)setMessageListFont:(id)arg1;
- (id)messageListFont;
@end

