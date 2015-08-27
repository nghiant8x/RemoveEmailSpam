#import <AppKit/NSFont.h>

@interface NSFont (MailAdditions)
+ (id)validFontFamilyName:(id)arg1 fixedPitchOnly:(BOOL)arg2;
+ (id)fontWithBaseFont:(id)arg1 overlayFont:(id)arg2;
+ (void)setMessageListFont:(id)arg1;
+ (id)messageListFont;
+ (void)setFixedWidthFont:(id)arg1;
+ (id)fixedWidthFont;
+ (void)setMessageFont:(id)arg1;
+ (id)messageFont;
+ (id)prefsAddressFieldFont;
+ (id)addressFieldFont;
- (BOOL)isEqualNameAndSize:(id)arg1;
@end

