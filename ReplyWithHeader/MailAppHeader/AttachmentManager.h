#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "QLSeamlessOpenerDelegate-Protocol.h"

@class MCInvocationQueue, MFAttachmentViewController, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface AttachmentManager : NSObject <MCActivityTarget, MVTerminationHandler, NSSharingServiceDelegate, NSSharingServicePickerDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessOpenerDelegate>
{
    NSMutableArray *_openedAttachmentPaths;	// 8 = 0x8
    NSMutableDictionary *_openedAttachmentMessageIDs;	// 16 = 0x10
    NSMutableArray *_messageIDPurgeQueue;	// 24 = 0x18
    long long _purgeBehavior;	// 32 = 0x20
    NSMutableDictionary *_quickLookAttachments;	// 40 = 0x28
    BOOL _isDirty;	// 48 = 0x30
    MFAttachmentViewController *_controllerForImageToShare;	// 56 = 0x38
    NSTimer *_purgeTimer;	// 64 = 0x40
    MCInvocationQueue *_deletionHandlerQueue;	// 72 = 0x48
}

+ (BOOL)attachmentPurgingIsEnabled;
+ (id)_openedAttachmentListPath;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
@property(readonly, nonatomic) MCInvocationQueue *deletionHandlerQueue; // @synthesize deletionHandlerQueue=_deletionHandlerQueue;
@property(retain, nonatomic) NSTimer *purgeTimer; // @synthesize purgeTimer=_purgeTimer;
@property(retain, nonatomic) MFAttachmentViewController *controllerForImageToShare; // @synthesize controllerForImageToShare=_controllerForImageToShare;
- (void).cxx_destruct;
- (void)_noteFileSystemChanged:(id)arg1;
- (id)_fileForSavedFileWrapper:(id)arg1 directory:(id)arg2 makePathUnique:(BOOL)arg3;
- (BOOL)_immediatelyOpenAttachment:(id)arg1 withApplicationURL:(id)arg2 window:(id)arg3 attachmentDirectory:(id)arg4 reason:(int)arg5;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_handleMessageDeleted:(id)arg1;
- (void)_messageDeleted:(id)arg1;
- (void)_schedulePurgeOfMessageIDs:(id)arg1;
- (void)_scheduleMessageIDPurge;
- (void)_purgeMessageIDs;
- (void)_purgeAttachments:(id)arg1;
- (void)_reallyPurgeAttachments;
- (void)_finishTerminatingAttachmentPurge;
- (void)_synchronouslyPurgeAttachments;
- (BOOL)_allMessagesWithMessageIDAreDeletedOrTrashed:(id)arg1;
- (void)_saveOpenedAttachmentsList;
- (void)_scheduleAttachmentListSave;
- (void)_setDirty:(BOOL)arg1;
- (void)_addPurgeEntryForAttachmentAtPath:(id)arg1 modDate:(id)arg2 messageID:(id)arg3 partNumber:(id)arg4;
- (void)_addOrReplaceEntry:(id)arg1 inAttachmentList:(id)arg2;
- (void)_setupOpenedAttachmentsMessageIDMap;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)_immediatelyOpenAttachment:(id)arg1 path:(id)arg2 window:(id)arg3 application:(id)arg4 reason:(int)arg5 exists:(BOOL)arg6;
- (BOOL)_sameAttachmentAsBefore:(id)arg1 proposedPath:(id)arg2 withProposedAttachmentWrapper:(id)arg3;
- (BOOL)_saveAttachmentsFromMessages:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
- (void)_saveAttachmentsFromMessages:(id)arg1 toDirectory:(id)arg2;
- (BOOL)_saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3 error:(id *)arg4;
- (void)_saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (void)_saveAttachment:(id)arg1 toPath:(id)arg2 window:(id)arg3;
- (void)_immediatelySaveFileWrapper:(id)arg1 path:(id)arg2 window:(id)arg3;
- (void)_openPathsForAttachmentsWithDictionary:(id)arg1;
- (int)_openFullPath:(id)arg1 withAppURL:(struct __CFURL *)arg2 options:(unsigned int)arg3;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)writeImageAttachmentToPasteboard:(id)arg1;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3 window:(id)arg4;
- (id)contextualMenuForAttachments:(id)arg1 clickedAttachment:(id)arg2 forEditing:(BOOL)arg3;
- (void)_configureOpenWithMenu:(id)arg1 forAttachments:(id)arg2;
- (BOOL)openFileAtPath:(id)arg1 withApplication:(id)arg2 stayInBackground:(BOOL)arg3;
- (BOOL)openFileURL:(id)arg1 stayInBackground:(BOOL)arg2 window:(id)arg3;
- (void)chooseApplicationToOpenAttachments:(id)arg1 needsSave:(BOOL)arg2 window:(id)arg3 delegate:(id)arg4;
- (BOOL)openInvitationAttachments:(id)arg1 openImmediately:(BOOL)arg2;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2 window:(id)arg3;
- (void)saveAttachmentsToDownloadDirectory:(id)arg1 window:(id)arg2;
- (void)_runSavePanelForAttachments:(id)arg1 messages:(id)arg2 window:(id)arg3;
- (void)runSavePanelForAttachments:(id)arg1 window:(id)arg2;
- (void)saveAttachmentsFromMessages:(id)arg1 window:(id)arg2;
- (void)_openAttachmentsWithDictionary:(id)arg1;
- (void)openAttachments:(id)arg1 applicationURL:(id)arg2 window:(id)arg3 delegate:(id)arg4;
- (void)downloadAttachments:(id)arg1 window:(id)arg2;
- (void)quickLookAttachmentsFromMessages:(id)arg1 window:(id)arg2;
- (void)quickLookAttachments:(id)arg1 window:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (BOOL)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)_addAttachmentToQuickLookPanel:(id)arg1 attachmentDirectory:(id)arg2 window:(id)arg3;
- (BOOL)addAttachmentForQuickLook:(id)arg1 attachmentDirectory:(id)arg2;
- (void)_tellControllerAttachmentIsDownloaded:(id)arg1;
- (void)_downloadCompleted:(id)arg1;
- (void)_openFromDownloadedNotification:(id)arg1;
- (id)pathsForDraggedAttachments:(id)arg1 fromView:(id)arg2;
- (BOOL)dragAttachments:(id)arg1 startPoint:(struct CGPoint)arg2 view:(id)arg3 event:(id)arg4 image:(id)arg5 delegate:(id)arg6;
- (void)cancelLoadingInlineAttachmentsForDisplay:(id)arg1;
- (void)beginLoadingInlineAttachmentsForDisplay:(id)arg1;
- (void)setAttachmentPurgingBehavior:(long long)arg1;
- (long long)attachmentPurgingBehavior;
- (void)disableAttachmentPurging;
- (void)enableAttachmentPurging;
- (void)initializeAttachmentPurging;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

