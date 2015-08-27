#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSMenu, NSMutableSet, NSPopUpButton, NSString;

@interface MailboxesChooser : NSObject <NSMenuDelegate>
{
    NSMenu *_rootMenu;	// 8 = 0x8
    NSPopUpButton *_popUpButton;	// 16 = 0x10
    id _selectedItem;	// 24 = 0x18
    NSMutableSet *_updatedMenus;	// 32 = 0x20
    BOOL _useSelection;	// 40 = 0x28
    CDUnknownBlockType _includeMailboxCondition;	// 48 = 0x30
    CDUnknownBlockType _enableMailboxCondition;	// 56 = 0x38
    id _target;	// 64 = 0x40
    SEL _action;	// 72 = 0x48
    NSArray *_additionalItems;	// 80 = 0x50
}

+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (BOOL)automaticallyNotifiesObserversOfPopUpButton;
+ (BOOL)automaticallyNotifiesObserversOfRootMenu;
@property(readonly, nonatomic) BOOL useSelection; // @synthesize useSelection=_useSelection;
@property(retain, nonatomic) NSArray *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType enableMailboxCondition; // @synthesize enableMailboxCondition=_enableMailboxCondition;
@property(copy, nonatomic) CDUnknownBlockType includeMailboxCondition; // @synthesize includeMailboxCondition=_includeMailboxCondition;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)_popUpAction:(id)arg1;
- (void)refresh;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_outlineViewStateDidChange:(id)arg1;
- (void)_invalidateUpdatedMenus:(id)arg1;
- (void)invalidateUpdatedMenus;
- (void)_addMenuItemsForItems:(id)arg1 toMenu:(id)arg2 withIndentationLevel:(long long)arg3 initialSeparatorItem:(BOOL)arg4;
- (id)_menuItemForItem:(id)arg1 indentationLevel:(long long)arg2;
@property(retain, nonatomic) id selectedItem;
@property(nonatomic) __weak NSPopUpButton *popUpButton;
@property(nonatomic) __weak NSMenu *rootMenu;
- (void)_setupPopUpButton;
- (void)_mailboxesChooserCommonInitWithSelection:(BOOL)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithSelection:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

