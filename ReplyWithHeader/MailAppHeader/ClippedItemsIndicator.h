#import <AppKit/NSButton.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenu, NSString;
@protocol ClippedItemsIndicatorDelegate;

@interface ClippedItemsIndicator : NSButton <NSMenuDelegate>
{
    id <ClippedItemsIndicatorDelegate> _delegate;	// 176 = 0xb0
    NSMenu *_menu;	// 184 = 0xb8
}

@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) __weak id <ClippedItemsIndicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)_popUpMenu;
- (void)mouseDown:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

