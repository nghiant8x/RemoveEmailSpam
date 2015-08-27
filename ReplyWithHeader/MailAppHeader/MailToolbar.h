#import <AppKit/NSToolbar.h>

@interface MailToolbar : NSToolbar
{
    BOOL _allowsReadWriteItems;	// 128 = 0x80
    BOOL _stateIsTemporary;	// 129 = 0x81
    BOOL _previousVisible;	// 130 = 0x82
    BOOL _frozen;	// 131 = 0x83
    unsigned long long _previousDisplayMode;	// 136 = 0x88
    long long _temporaryItemTag;	// 144 = 0x90
}

+ (void)upgradeToolbarWithIdentifier:(id)arg1 toDisplayMode:(unsigned long long)arg2;
+ (void)upgradeToolbarWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_plistForToolbarWithIdentifier:(id)arg1;
@property(nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
@property(nonatomic) BOOL previousVisible; // @synthesize previousVisible=_previousVisible;
@property(nonatomic) BOOL stateIsTemporary; // @synthesize stateIsTemporary=_stateIsTemporary;
@property(nonatomic) long long temporaryItemTag; // @synthesize temporaryItemTag=_temporaryItemTag;
@property(nonatomic) unsigned long long previousDisplayMode; // @synthesize previousDisplayMode=_previousDisplayMode;
@property(nonatomic) BOOL allowsReadWriteItems; // @synthesize allowsReadWriteItems=_allowsReadWriteItems;
- (void)validateVisibleItems;
- (void)unfreeze;
- (void)freeze;
- (void)removeItemAtIndex:(long long)arg1;
- (void)insertItemWithItemIdentifier:(id)arg1 atIndex:(long long)arg2;
- (void)setVisible:(BOOL)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)revertTemporaryStateIfAny;
- (void)setTemporaryDisplayMode:(unsigned long long)arg1 visible:(BOOL)arg2 requiredItemTag:(long long)arg3 identifier:(id)arg4;
- (id)_customMetrics;
- (BOOL)_allowsSizeMode:(unsigned long long)arg1;
- (id)_allowedItemIdentifiers;
- (BOOL)allowsExtensionItems;

@end

