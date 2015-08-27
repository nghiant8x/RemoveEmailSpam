#import "GenericAttachmentFetcher.h"

@interface PhotoExporter : GenericAttachmentFetcher
{
}

+ (void)exportPhotoAttachments:(id)arg1;
+ (BOOL)isPhotoAttachment:(id)arg1;
- (void)downloadedAllAttachments;
- (void)_exportAttachments:(id)arg1;

@end

