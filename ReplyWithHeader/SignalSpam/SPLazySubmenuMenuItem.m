//
//  SPLazySubmenuMenuItem.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import "SPLazySubmenuMenuItem.h"

@implementation SPLazySubmenuMenuItem

- (void)SPSetEnabled:(BOOL)arg1{
    MLogString(@"");
    [self SPSetEnabled:arg1];
    
}

- (BOOL)SPIsEnabled{
    MLogString(@"");
    BOOL result = [self SPIsEnabled];
    return result;
}

- (id)SPSubmenu{
    MLogString(@"");
    id result = [self SPSubmenu];
    return result;
    
}

- (BOOL)SPHasSubmenu{
    MLogString(@"");
    BOOL result = [self SPHasSubmenu];
    return result;
    
}

- (id)SPCopyWithZone:(struct _NSZone *)arg1{
    MLogString(@"");
    id result = [self SPCopyWithZone:arg1];
    return result;
}

@end
