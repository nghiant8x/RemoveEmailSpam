//
//  SPFavoritesMenuDelegateProtocol-Protocol.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/31/15.
//
//

#import "NSObject-Protocol.h"

@class MFMailbox;
@protocol MFUIMailbox;

@protocol SPFavoritesMenuDelegateProtocol <NSObject>

@optional

- (void)SPMenuDidClose;
- (void)SPMenuDidPresent;
- (void)SPMenuDidSelectMailbox:(MFMailbox *)arg1;
- (id <MFUIMailbox>)SPSelectedMailbox;

@end
