#import <AppKit/NSWindow.h>

@interface NSWindow (MailWindowAdditions)
+ (void)updateMailPreferredBackingLocationFromDefaults;
- (void)setMailPreferredBackingLocationFromDefaults;
- (void)_setMailDeferredBackingLocationFromDefaults;
@end

