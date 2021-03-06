#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, _StationeryThumbnailCreator;

@interface StationeryLoader : NSObject
{
    NSMutableDictionary *_categoriesByDisplayName;	// 8 = 0x8
    NSMutableArray *_orderedCategoryDisplayNames;	// 16 = 0x10
    NSMutableDictionary *_orderedStationeryByCategoryDisplayName;	// 24 = 0x18
    _StationeryThumbnailCreator *_thumbnailCreator;	// 32 = 0x20
}

+ (void)purgeDeletedCustomStationery;
+ (id)pathForCustomCategoryResources;
+ (id)pathForCustomCategory;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) _StationeryThumbnailCreator *thumbnailCreator; // @synthesize thumbnailCreator=_thumbnailCreator;
- (void).cxx_destruct;
- (void)_synchronouslyPurgeDeletedCustomStationery:(id)arg1;
- (void)purgeDeletedCustomStationery:(id)arg1;
- (void)_reinsertStationeryWithInformation:(id)arg1;
- (void)deleteStationeryWithDictionary:(id)arg1 fromCategoryWithDisplayName:(id)arg2 undoManager:(id)arg3;
- (BOOL)installStationery:(id)arg1;
- (BOOL)_saveCustomStationery:(id)arg1 byMovingFromPath:(id)arg2 error:(id *)arg3;
- (BOOL)saveCustomStationery:(id)arg1 error:(id *)arg2;
- (BOOL)_recursivelyCreateDirectory:(id)arg1 error:(id *)arg2;
- (void)_addToFavoritesInPosition:(unsigned long long)arg1 stationeryWithPath:(id)arg2 inCategoryWithDisplayName:(id)arg3;
- (void)addToFavoritesStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (BOOL)customStationeryWithNameExists:(id)arg1 index:(unsigned long long *)arg2;
- (BOOL)stationery:(id)arg1 isInCategoryWithDisplayName:(id)arg2;
- (void)thumbnailCreator:(id)arg1 didCreateThumbnail:(id)arg2 forCustomStationeryWithPath:(id)arg3;
- (void)thumbnailCreatorDidCreateThumbnailForCustomStationery:(id)arg1;
- (void)thumbnailCreatorDidCompletelyFinish:(id)arg1;
- (id)_categoryTOCForCategoryFolderName:(id)arg1 company:(id)arg2 type:(long long)arg3 categoryDisplayName:(id)arg4;
- (void)_updateStationeryInCategoryWithDisplayName:(id)arg1;
- (id)_validatedStationeryDictionary:(id)arg1 withName:(id)arg2 categoryBundle:(id)arg3 needsThumbnail:(char *)arg4;
- (id)_validatedCompanyCategoryDictionary:(id)arg1 categoryFolderName:(id)arg2 companyBundle:(id)arg3 type:(long long)arg4;
- (id)_dictionaryForCustomCategoryForCompany:(BOOL)arg1;
- (void)_combinePartialTOCs:(id)arg1;
- (id)_companyTOCWithName:(id)arg1 type:(long long)arg2 isFromCache:(char *)arg3;
- (void)_updateCategories;
- (id)_cacheNameForCompany:(id)arg1 categoryDisplayName:(id)arg2 type:(long long)arg3;
- (void)_cacheTOC:(id)arg1 withName:(id)arg2;
- (id)_cachedTOCWithName:(id)arg1;
- (id)_pathForStationeryNamed:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (id)_bundlePathForCategoryWithFolderName:(id)arg1 company:(id)arg2 type:(long long)arg3;
- (void)createAppleUserCompanyBundleIfNecessary;
- (id)pathForFavoritesList;
- (id)orderedStationeryDictionariesForCategoryWithDisplayName:(id)arg1;
- (id)orderedCategoryDictionaries;
- (id)orderedCategoryDisplayNamesIncludingFavorites;
- (void)updateStationery;
- (id)_dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2 position:(unsigned long long *)arg3;
- (id)_dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (id)pathForStationeryWithID:(id)arg1;
- (id)stationeryWithPath:(id)arg1;
- (id)stationeryWithID:(id)arg1;
- (void)dealloc;

@end

