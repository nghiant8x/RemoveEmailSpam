#import <objc/NSObject.h>

@class ImportAssistant, NSArray, NSMutableArray, NSString;

@interface Importer : NSObject
{
    NSMutableArray *_importArray;	// 8 = 0x8
    BOOL _importCanceled;	// 16 = 0x10
    ImportAssistant *_delegate;	// 24 = 0x18
    NSArray *_importFields;	// 32 = 0x20
}

@property(copy, nonatomic) NSArray *importFields; // @synthesize importFields=_importFields;
@property(nonatomic) BOOL importCanceled; // @synthesize importCanceled=_importCanceled;
@property(retain, nonatomic) ImportAssistant *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)importFinishedText;
- (void)sortImportArray;
- (unsigned long long)countOfEnabledItems;
- (void)insertObject:(id)arg1 inImportArrayAtIndex:(unsigned long long)arg2;
- (void)clearImportArray;
- (unsigned long long)countOfImportArray;
@property(readonly, copy, nonatomic) NSArray *importArray;
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;

@end

