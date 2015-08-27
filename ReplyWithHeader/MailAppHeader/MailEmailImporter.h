#import "FilesystemEmailImporter.h"

#import "MFAddProgressMonitor-Protocol.h"

@class ImportItem, NSString;

@interface MailEmailImporter : FilesystemEmailImporter <MFAddProgressMonitor>
{
    ImportItem *_currentItem;	// 8 = 0x8
    unsigned long long _currentItemMessageIndex;	// 16 = 0x10
    unsigned long long _currentItemMessageCount;	// 24 = 0x18
    unsigned long long _currentBlockSize;	// 32 = 0x20
}

+ (id)explanatoryText;
+ (id)name;
@property(nonatomic) unsigned long long currentBlockSize; // @synthesize currentBlockSize=_currentBlockSize;
@property(nonatomic) unsigned long long currentItemMessageCount; // @synthesize currentItemMessageCount=_currentItemMessageCount;
@property(nonatomic) unsigned long long currentItemMessageIndex; // @synthesize currentItemMessageIndex=_currentItemMessageIndex;
@property(nonatomic) __weak ImportItem *currentItem; // @synthesize currentItem=_currentItem;
- (void).cxx_destruct;
- (void)setFractionDone:(double)arg1;
- (id)mailboxNameForImportItem:(id)arg1;
- (void)importMailbox:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
- (id)pathExtensions;
- (id)prepareForImport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

