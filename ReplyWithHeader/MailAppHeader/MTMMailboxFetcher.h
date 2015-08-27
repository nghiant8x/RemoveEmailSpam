#import <objc/NSObject.h>

@class MTMMailbox, NSConditionLock, NSMutableArray;

@interface MTMMailboxFetcher : NSObject
{
    MTMMailbox *_processingMailbox;	// 8 = 0x8
    NSMutableArray *_inactiveMailboxes;	// 16 = 0x10
    NSConditionLock *_lock;	// 24 = 0x18
    MTMMailbox *_loadingMailbox;	// 32 = 0x20
    BOOL _threadLaunched;	// 40 = 0x28
}

+ (id)sharedFetcher;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL threadLaunched; // @synthesize threadLaunched=_threadLaunched;
- (void).cxx_destruct;
- (void)waitForActiveMailboxToBeLoadedWithTimeOut:(double)arg1;
- (BOOL)shouldContinueFetchingMailbox:(id)arg1;
- (void)_protectedSmartAddMailboxToInactiveMailboxes:(id)arg1;
- (void)stopFetchingInactiveMailbox:(id)arg1;
- (void)startFetchingInactiveMailbox:(id)arg1;
- (void)stopFetchingMailbox:(id)arg1;
- (void)startFetchingMailbox:(id)arg1;
- (void)_workerThread;
- (void)_unlockAndNotify;
- (void)_lockWhenThereIsWorkToDo;
- (void)_lock;
- (void)dealloc;
- (id)init;

@end

