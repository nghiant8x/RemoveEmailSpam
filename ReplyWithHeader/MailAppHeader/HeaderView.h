#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class NSString;

@interface HeaderView : NSView <NSAccessibilityGroup>
{
}

- (BOOL)isFlipped;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

