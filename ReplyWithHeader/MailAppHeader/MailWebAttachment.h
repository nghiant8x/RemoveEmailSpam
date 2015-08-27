#import <MailUI/MUIWebAttachment.h>

@class MCAttachment, MCMessage, NSError, NSOperationQueue, NSURL;

@interface MailWebAttachment : MUIWebAttachment
{
    MCAttachment *_backingAttachment;	// 8 = 0x8
    MCMessage *_parentMessage;	// 16 = 0x10
    NSURL *_mailDownloadsFileURL;	// 24 = 0x18
    CDUnknownBlockType _downloadCompletionBlock;	// 32 = 0x20
    NSOperationQueue *_downloadQueue;	// 40 = 0x28
    NSError *_downloadError;	// 48 = 0x30
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy) CDUnknownBlockType downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain) NSURL *mailDownloadsFileURL; // @synthesize mailDownloadsFileURL=_mailDownloadsFileURL;
@property(nonatomic) __weak MCMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
@property(readonly, nonatomic) MCAttachment *backingAttachment; // @synthesize backingAttachment=_backingAttachment;
- (void).cxx_destruct;
- (void)takeNewDataFromURL:(id)arg1;
- (BOOL)isStationeryAttachment;
- (BOOL)isAutoArchiveAttachment;
- (void)_addPrivateAttributes:(id)arg1;
- (void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)downloadProgress;
- (BOOL)shouldAlwaysAutomaticallyDownload;
- (BOOL)isDataDownloaded;
- (id)downloadDirectory;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)writeToURL:(id)arg1;
- (id)fileURL;
- (id)_filenameForSaving;
- (id)filename;
- (unsigned long long)fileSize;
- (id)mimeType;
- (id)iconImage;
- (id)fileWrapper;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMCAttachment:(id)arg1;

@end

