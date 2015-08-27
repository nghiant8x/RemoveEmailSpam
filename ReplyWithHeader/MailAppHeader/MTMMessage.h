#import <objc/NSObject.h>

@class MTMMailbox, NSDate, NSString, NSURL;

@interface MTMMessage : NSObject
{
    MTMMailbox *_mailbox;	// 8 = 0x8
}

@property(nonatomic) __weak MTMMailbox *mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *displayNameInMessageList;
- (unsigned long long)numberOfMessageInCurrentController;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long readFlags;
@property(readonly, nonatomic) unsigned long long messageFlags;
@property(readonly, nonatomic) unsigned long long messageSize;
@property(readonly, nonatomic) NSDate *lastViewedDate;
@property(readonly, nonatomic) NSDate *savedDate;
@property(readonly, nonatomic) NSDate *receivedDate;
@property(readonly, nonatomic) NSDate *sentDate;
@property(readonly, copy, nonatomic) NSString *to;
@property(readonly, copy, nonatomic) NSString *author;
@property(readonly, copy, nonatomic) NSString *subject;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, nonatomic) id revisionID;
@property(readonly, nonatomic) id identifier;
@property(readonly, nonatomic) id identifierForURL;

@end

