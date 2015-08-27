#import <AppKit/NSTableHeaderView.h>

@interface _MailTableHeaderView : NSTableHeaderView
{
    BOOL _didLazyLoadMenu;	// 216 = 0xd8
}

@property(nonatomic) BOOL didLazyLoadMenu; // @synthesize didLazyLoadMenu=_didLazyLoadMenu;
- (id)menu;

@end

