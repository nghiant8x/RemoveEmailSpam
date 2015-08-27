#import <objc/NSObject.h>

@class NSPopUpButton, NSView;

@interface SpecialMailboxes : NSObject
{
    NSView *_view;	// 8 = 0x8
    NSPopUpButton *_sentMessagesAgePopup;	// 16 = 0x10
    NSPopUpButton *_junkAgePopup;	// 24 = 0x18
    NSPopUpButton *_trashAgePopup;	// 32 = 0x20
}

+ (id)specialMailboxesForAccountClass:(Class)arg1;
@property(nonatomic) __weak NSPopUpButton *trashAgePopup; // @synthesize trashAgePopup=_trashAgePopup;
@property(nonatomic) __weak NSPopUpButton *junkAgePopup; // @synthesize junkAgePopup=_junkAgePopup;
@property(nonatomic) __weak NSPopUpButton *sentMessagesAgePopup; // @synthesize sentMessagesAgePopup=_sentMessagesAgePopup;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)postSpecialMailboxesDidChangeNotification:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end

