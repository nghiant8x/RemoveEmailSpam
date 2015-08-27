#import <AppKit/NSPreferences.h>

@interface MailPreferences : NSPreferences
{
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;
+ (void)configureFetchFrequencyPopUp:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)fontManager:(id)arg1 willIncludeFont:(id)arg2;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)changeFont:(id)arg1;
- (id)windowTitle;

@end

