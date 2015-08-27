#import <objc/NSObject.h>

#import "NSMenuDelegate-Protocol.h"

@class NSMenuItem, NSString;

@interface SortByMenuDelegate : NSObject <NSMenuDelegate>
{
    NSMenuItem *_ascendingMenuItem;	// 8 = 0x8
    NSMenuItem *_descendingMenuItem;	// 16 = 0x10
}

@property(nonatomic) __weak NSMenuItem *descendingMenuItem; // @synthesize descendingMenuItem=_descendingMenuItem;
@property(nonatomic) __weak NSMenuItem *ascendingMenuItem; // @synthesize ascendingMenuItem=_ascendingMenuItem;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

