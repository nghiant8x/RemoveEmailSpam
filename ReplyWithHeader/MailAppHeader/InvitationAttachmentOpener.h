#import "TemporaryAttachmentOpener.h"

@interface InvitationAttachmentOpener : TemporaryAttachmentOpener
{
    BOOL _openImmediately;	// 8 = 0x8
}

@property(readonly, nonatomic) BOOL openImmediately; // @synthesize openImmediately=_openImmediately;
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;
- (void)_saveAttachmentsToICalCaches:(id)arg1;
- (id)initWithAttachments:(id)arg1 openImmediately:(BOOL)arg2;

@end

