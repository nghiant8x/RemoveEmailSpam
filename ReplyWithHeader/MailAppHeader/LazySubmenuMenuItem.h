#import <AppKit/NSMenuItem.h>

@class NSMenu;

@interface LazySubmenuMenuItem : NSMenuItem
{
    BOOL _enableLoadedSubmenu;	// 96 = 0x60
    CDUnknownBlockType _lazySubmenuBlock;	// 104 = 0x68
    NSMenu *_loadedSubmenu;	// 112 = 0x70
}

@property(nonatomic) BOOL enableLoadedSubmenu; // @synthesize enableLoadedSubmenu=_enableLoadedSubmenu;
@property(retain, nonatomic) NSMenu *loadedSubmenu; // @synthesize loadedSubmenu=_loadedSubmenu;
@property(copy, nonatomic) CDUnknownBlockType lazySubmenuBlock; // @synthesize lazySubmenuBlock=_lazySubmenuBlock;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)submenu;
- (BOOL)hasSubmenu;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

