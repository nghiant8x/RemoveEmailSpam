#import "MVMailBundle.h"

@class MFSyncedFile, NSMutableArray, NSMutableDictionary;

@interface SignatureBundle : MVMailBundle
{
    NSMutableDictionary *_signatures;	// 8 = 0x8
    NSMutableArray *_accounts;	// 16 = 0x10
    NSMutableDictionary *_lastDefaultSignatures;	// 24 = 0x18
    BOOL _isDirty;	// 32 = 0x20
    MFSyncedFile *_syncedFile;	// 40 = 0x28
}

+ (id)signaturesFolderPath;
+ (id)allSignaturesAccount;
+ (void)initialize;
@property(readonly, nonatomic) MFSyncedFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
- (void).cxx_destruct;
- (void)configurePopUpButton:(id)arg1 forAccount:(id)arg2 defaultSignature:(id)arg3 selectionMethod:(int)arg4 showAccount:(BOOL)arg5;
- (void)setPlaceSignatureAboveQuotedText:(BOOL)arg1;
- (BOOL)placeSignatureAboveQuotedText;
- (void)unsetShowsComposeAccessoryView;
- (void)setShowsComposeAccessoryView:(BOOL)arg1;
- (BOOL)showComposeAccessoryView;
- (BOOL)showComposeAccessoryView:(char *)arg1;
- (id)activeSignatureWithId:(id)arg1;
- (id)activeSignatureWithName:(id)arg1;
- (void)setSignatureSelectionMethod:(int)arg1 forAccount:(id)arg2;
- (int)signatureSelectionMethodForAccount:(id)arg1;
- (id)defaultSignatureForAccount:(id)arg1;
- (void)setDefaultSignature:(id)arg1 forAccount:(id)arg2;
- (void)_setDefaultSignatureId:(id)arg1 forAccountId:(id)arg2;
- (void)_signatureBundleChanged:(id)arg1;
- (void)_signatureChanged:(id)arg1;
- (id)_accountsMap;
- (id)_serializedSignatures;
- (void)saveChangesToDisk;
- (void)_signatureNameChanged:(id)arg1;
- (void)addSignature:(id)arg1;
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2 forAccount:(id)arg3;
- (void)removeSignatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)_removeSignature:(id)arg1;
- (void)removeSignatureAtIndex:(unsigned long long)arg1;
- (id)signatureAtIndex:(unsigned long long)arg1;
- (id)signatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;
- (id)signaturesForAccount:(id)arg1;
- (unsigned long long)numberOfSignatures;
- (id)_fixAccountIdsInPlist:(id)arg1;
- (void)loadSignaturesFromDisk;
- (id)signatures;
- (void)_loadAllSignatures:(id)arg1 forAccounts:(id)arg2;
- (BOOL)updateAccountList;
- (id)signatureAccounts;
- (void)_loadLastDefaultSignatures;
- (void)dealloc;
- (id)init;

@end

