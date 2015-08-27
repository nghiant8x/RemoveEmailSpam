#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class NSArray, NSMutableSet, NSString;

@interface GenericAttachmentFetcher : NSObject <MCActivityTarget>
{
    NSMutableSet *_attachmentsBeingDownloaded;	// 8 = 0x8
    NSArray *_attachments;	// 16 = 0x10
    GenericAttachmentFetcher *_me;	// 24 = 0x18
}

@property(retain, nonatomic) GenericAttachmentFetcher *me; // @synthesize me=_me;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (double)temporaryFolderTimeout;
- (void)didSaveAttachment:(id)arg1 toPath:(id)arg2;
- (void)didSaveAttachments:(id)arg1 paths:(id)arg2;
- (void)downloadedAllAttachments;
- (void)didFinishBackgroundLoadOfAttachment:(id)arg1;
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;
- (void)_saveAttachments:(id)arg1 itemManager:(id)arg2;
- (id)downloadedAttachments;
- (void)cancelBackgroundLoad;
- (void)beginBackgroundLoad;
- (void)_downloadCompleted:(id)arg1;
- (id)init;
- (id)initWithAttachments:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

