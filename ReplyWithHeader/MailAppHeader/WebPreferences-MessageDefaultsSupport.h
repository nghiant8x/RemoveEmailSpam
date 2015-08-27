#import <WebKit/WebPreferences.h>

@interface WebPreferences (MessageDefaultsSupport)
+ (id)richTextComposeWebPreferences;
+ (id)plainTextComposeWebPreferences;
+ (id)_unrenderedUserStyleSheet;
+ (id)unrenderedMailWebPreferences;
+ (id)richTextMailWebPreferences;
+ (id)plainTextMailWebPreferences;
- (void)_configureFixedFont:(id)arg1;
- (void)_configureCommonRichTextPreferences;
- (void)_configureCommonPlainTextPreferences;
- (void)_configureCommonPreferences;
- (void)_configureComposeRichPreferences:(id)arg1;
- (void)_configureComposePlainTextPreferences:(id)arg1;
- (void)_configureRichTextMessagePreferences:(id)arg1;
- (void)_configurePlainTextMessagePreferences:(id)arg1;
- (id)_userStyleSheetURLIsForCompose:(BOOL)arg1;
@end

