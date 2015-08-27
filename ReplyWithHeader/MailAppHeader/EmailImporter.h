#import "Importer.h"

@class NSArray, NSString;

@interface EmailImporter : Importer
{
    NSArray *_sourcePaths;	// 8 = 0x8
    NSString *_destinationFolderName;	// 16 = 0x10
    BOOL _errorsDuringImport;	// 24 = 0x18
    NSString *_rootFolder;	// 32 = 0x20
    NSArray *_sourceFolders;	// 40 = 0x28
    char *_lineDelimiter;	// 48 = 0x30
    char *_fromSpaceSeparator;	// 56 = 0x38
    NSString *_attachmentBeingSearchedFor;	// 64 = 0x40
    NSString *_lastDirectoryFound;	// 72 = 0x48
}

@property(copy, nonatomic) NSString *lastDirectoryFound; // @synthesize lastDirectoryFound=_lastDirectoryFound;
@property(nonatomic) __weak NSString *attachmentBeingSearchedFor; // @synthesize attachmentBeingSearchedFor=_attachmentBeingSearchedFor;
@property(nonatomic) BOOL errorsDuringImport; // @synthesize errorsDuringImport=_errorsDuringImport;
@property(nonatomic) char *fromSpaceSeparator; // @synthesize fromSpaceSeparator=_fromSpaceSeparator;
@property(nonatomic) char *lineDelimiter; // @synthesize lineDelimiter=_lineDelimiter;
@property(copy, nonatomic) NSArray *sourceFolders; // @synthesize sourceFolders=_sourceFolders;
@property(copy, nonatomic) NSString *rootFolder; // @synthesize rootFolder=_rootFolder;
- (void).cxx_destruct;
- (id)mailboxForImportItem:(id)arg1;
- (id)mailboxNameForImportItem:(id)arg1;
- (id)copyAttachmentsToMailFolder:(id)arg1;
- (BOOL)isAttachmentBeingSearchedFor:(id)arg1;
- (id)locateAttachments:(id)arg1 inFolder:(id)arg2;
- (id)createAttachmentText:(id)arg1 isHTML:(BOOL)arg2;
- (id)regenerateMessageData:(id)arg1 isHTML:(BOOL)arg2 isRich:(BOOL)arg3;
- (id)longestCommonPathForItems:(id)arg1;
- (id)uniqueDirectoriesForItems:(id)arg1;
- (id)searchForValidItemInsideDirectory:(id)arg1 searchDepth:(long long)arg2 validityBlock:(CDUnknownBlockType)arg3;
- (id)searchForValidItemsInsideDirectory:(id)arg1 limit:(unsigned long long)arg2 searchDepth:(long long)arg3 validityBlock:(CDUnknownBlockType)arg4;
- (id)validItemsFromPaths:(id)arg1 validityBlock:(CDUnknownBlockType)arg2;
- (void)convertChar:(BOOL)arg1 toChar:(BOOL)arg2 inBytes:(char *)arg3 length:(unsigned long long)arg4;
- (void)updateSubjectStringForMessageHeaders:(id)arg1;
- (void)addMessagesToLibrary:(id)arg1 withMailbox:(id)arg2;
- (id)messageWithImporterData:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
@property(copy, nonatomic) NSArray *sourceList;
@property(readonly, copy, nonatomic) NSString *destinationFolderName;
- (id)regexForAttachmentName:(id)arg1;
- (id)preProcessSourceData:(id)arg1;
- (void)importMailbox:(id)arg1;
- (void)cleanup;
- (id)statusLine;
- (id)importFinishedText;
- (void)importFinished;
- (void)revealMailbox:(id)arg1;
- (void)performImport;
- (id)init;

@end

