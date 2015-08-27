#import <AppKit/NSPopUpButton.h>

@interface MessageViewerLazyPopUpButton : NSPopUpButton
{
    BOOL _didLazyLoadMenu;	// 184 = 0xb8
    long long _menuToUse;	// 192 = 0xc0
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
@property(nonatomic) long long menuToUse; // @synthesize menuToUse=_menuToUse;
- (void)initializeMenu;
- (void)setMenu:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

