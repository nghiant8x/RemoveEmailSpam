#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class MCActivityMonitor, NSMutableArray, NSString;
@protocol MCMessageDataSource;

@interface AttachmentLoader : NSObject <MCActivityTarget>
{
    id <MCMessageDataSource> _store;	// 8 = 0x8
    MCActivityMonitor *_monitor;	// 16 = 0x10
    NSMutableArray *_entries;	// 24 = 0x18
}

+ (id)_makeLoaderForStore:(id)arg1;
+ (id)_loaderForStore:(id)arg1;
+ (void)cancelInlineLoads:(id)arg1 window:(id)arg2;
+ (void)startLoadingInlineAttachments:(id)arg1 window:(id)arg2 delegate:(id)arg3;
+ (id)loaderForSavingAttachment:(id)arg1 window:(id)arg2 path:(id)arg3;
+ (id)loaderForAttachmentViewController:(id)arg1 window:(id)arg2 reason:(int)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
+ (id)loaderForAttachment:(id)arg1 window:(id)arg2 reason:(int)arg3 application:(id)arg4 attachmentDirectory:(id)arg5;
- (void).cxx_destruct;
- (BOOL)_addOrReprioritizeEntryEqualTo:(id)arg1;
- (void)_addAttachmentsToFetch:(id)arg1 fromWindow:(id)arg2 delegate:(id)arg3;
- (void)_startBackgroundThreadIfNeeded;
- (void)_setStore:(id)arg1;
- (void)_mailboxBecameInvalid;
- (void)_monitorQuit:(id)arg1;
- (void)_setMonitor:(id)arg1;
- (void)_processAttachmentQueue;
- (void)_didFetchDataForQueueEntry:(id)arg1;
- (void)_cancelInlineLoadsForWindow:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

