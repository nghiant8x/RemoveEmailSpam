#import "EmailImporter.h"

@class NSSet;

@interface FilesystemEmailImporter : EmailImporter
{
}

- (void)verifyFromSpaceHeaderForScanner:(id)arg1 dataLength:(unsigned long long)arg2;
- (void)sniffLineDelimiterFromData:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
- (char *)fromString;
@property(readonly, copy, nonatomic) NSSet *pathExtensions;
- (void)readMailbox:(id)arg1 intoMailbox:(id)arg2;
- (void)processUserSelection;
- (double)progressValueForMailboxAtPath:(id)arg1;
- (id)prepareForImport;

@end

