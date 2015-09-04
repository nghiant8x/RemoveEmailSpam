//
//  SPBindingsEnabledMenu.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import "SPBindingsEnabledMenu.h"

@implementation SPBindingsEnabledMenu

- (id)SPInsertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4{
    MLogString(@"");
    id result = [self SPInsertItemWithTitle:arg1 action:arg2 keyEquivalent:arg3 atIndex:arg4];
    return result;
}

- (id)SPAddItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3{
    MLogString(@"");
    id result = [self SPAddItemWithTitle:arg1 action:arg2 keyEquivalent:arg3];
    
    return result;
}

@end
