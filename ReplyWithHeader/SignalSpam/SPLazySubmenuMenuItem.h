//
//  SPLazySubmenuMenuItem.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import <Cocoa/Cocoa.h>

@interface SPLazySubmenuMenuItem : NSMenuItem

- (void)SPSetEnabled:(BOOL)arg1;
- (BOOL)SPIsEnabled;
- (id)SPSubmenu;
- (BOOL)SPHasSubmenu;
- (id)SPCopyWithZone:(struct _NSZone *)arg1;


@end
