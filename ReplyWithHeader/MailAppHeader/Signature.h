#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MFSyncedFile, NSData, NSString;

@interface Signature : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSData *_webArchiveData;	// 16 = 0x10
    BOOL _isRich;	// 24 = 0x18
    BOOL _isSavedAsRich;	// 25 = 0x19
    BOOL _isDirty;	// 26 = 0x1a
    NSString *_uniqueId;	// 32 = 0x20
    MFSyncedFile *_syncedFile;	// 40 = 0x28
}

@property(readonly, nonatomic) MFSyncedFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(readonly, nonatomic) BOOL isSavedAsRich; // @synthesize isSavedAsRich=_isSavedAsRich;
@property(readonly, copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (id)signaturePath;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL isRich;
- (void)setWebArchive:(id)arg1;
- (id)webArchive;
- (id)_sanitizeSignatureFileData:(id)arg1;
- (void)_makeWebArchiveDataIfNeeded;
- (id)webArchiveData;
- (void)reloadFromDisk;
@property(copy, nonatomic) NSString *name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)removeContentFromDisk;
- (BOOL)saveContentToDisk;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 uniqueId:(id)arg2;
- (id)objectSpecifier;
- (void)setSignatureContents:(id)arg1;
- (id)signatureContents;
- (void)setSignatureName:(id)arg1;
- (id)signatureName;

@end

