#import <objc/NSObject.h>

@class MFMailbox, NSOperationQueue;

@interface DockCountController : NSObject
{
    MFMailbox *_mailBadgeMailbox;	// 8 = 0x8
    long long _mailBadgeScope;	// 16 = 0x10
    NSOperationQueue *_workQueue;	// 24 = 0x18
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)setMailBadgeScope:(long long)arg1 mailbox:(id)arg2;
- (long long)mailBadgeScope;
- (void)unreadCountChanged:(id)arg1;
- (void)_setMailBadgeMailbox:(id)arg1;
- (id)mailBadgeMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_setDockBadgeForCount:(id)arg1;
- (void)clearCountAndStopUpdating;
- (void)dealloc;
- (id)init;

@end

