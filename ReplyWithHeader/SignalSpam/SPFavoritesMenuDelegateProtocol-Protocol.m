//
//  SPFavoritesMenuDelegateProtocol-Protocol.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

#import "SPFavoritesMenuDelegateProtocol-Protocol.h"

@implementation SPFavoritesMenuDelegateProtocol_Protocol : NSObject


- (void)SPMenuDidClose{
    [self SPMenuDidClose];
}
- (void)SPMenuDidPresent{
    [self SPMenuDidPresent];
}
- (void)SPMenuDidSelectMailbox:(MFMailbox *)arg1{
    [self SPMenuDidSelectMailbox:arg1];
}
- (id <MFUIMailbox>)SPSelectedMailbox{
    id result = [self SPSelectedMailbox];
    return result;
}


@end
