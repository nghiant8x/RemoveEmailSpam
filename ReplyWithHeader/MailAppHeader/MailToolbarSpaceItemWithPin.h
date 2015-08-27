#import <AppKit/NSToolbarItem.h>

@class NSView;

@interface MailToolbarSpaceItemWithPin : NSToolbarItem
{
    NSView *_pin;	// 152 = 0x98
}

+ (id)itemIdentifier;
@property(retain, nonatomic) NSView *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)updateWidth;
- (void)_pinViewFrameChanged;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)_updateSizeForDisplayMode:(unsigned long long)arg1;
- (BOOL)allowsDuplicatesInToolbar;
- (BOOL)_hasContents;
- (BOOL)_emptyContents;
- (BOOL)_needsRedisplayWhenBeginningToolbarEditing;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)arg1;
- (BOOL)isSeparatorItem;
- (id)menuFormRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithItemIdentifier:(id)arg1;
- (id)initWithPin:(id)arg1;

@end

