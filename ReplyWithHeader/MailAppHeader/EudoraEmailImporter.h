#import "FilesystemEmailImporter.h"

@interface EudoraEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;
+ (id)name;
- (BOOL)isAttachmentBeingSearchedFor:(id)arg1;
- (id)_attachmentsInEudoraMessage:(id)arg1;
- (void)_stripTag:(char *)arg1 fromData:(id)arg2;
- (struct _NSRange)_rangeOfDataContainedByTag:(char *)arg1 endTag:(char *)arg2 inData:(id)arg3;
- (id)preProcessSourceData:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
- (char *)fromString;

@end

