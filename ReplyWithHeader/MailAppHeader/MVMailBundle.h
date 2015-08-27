#import <objc/NSObject.h>

@interface MVMailBundle : NSObject
{
}

+ (id)composeAccessoryViewOwnerClassName;
+ (BOOL)hasComposeAccessoryViewOwner;
+ (id)preferencesPanelName;
+ (id)preferencesOwnerClassName;
+ (BOOL)hasPreferencesPanel;
+ (id)sharedInstance;
+ (void)registerBundle;
+ (id)composeAccessoryViewOwners;
+ (id)allBundles;
- (void)dealloc;

@end

