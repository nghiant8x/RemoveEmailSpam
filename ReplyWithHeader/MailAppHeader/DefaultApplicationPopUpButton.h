#import <AppKit/NSPopUpButton.h>

@interface DefaultApplicationPopUpButton : NSPopUpButton
{
    long long _indexOfSelectedHandler;	// 184 = 0xb8
}

@property(nonatomic) long long indexOfSelectedHandler; // @synthesize indexOfSelectedHandler=_indexOfSelectedHandler;
- (void)_selectApplication:(id)arg1;
- (void)_setDefaultEmailHandler:(id)arg1;
- (void)_selectHandlerWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (long long)_addHandlerWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (void)_populateMenu;
- (void)refreshApplicationList;

@end

