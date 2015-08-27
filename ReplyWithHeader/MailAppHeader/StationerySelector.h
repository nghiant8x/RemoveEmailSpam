#import <objc/NSObject.h>

#import "NSDraggingSource-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class ColorBackgroundView, DocumentEditor, FlatTableView, NSArray, NSMutableArray, NSMutableDictionary, NSScrollView, NSString, NSTextField, NSView, StationeryLoader, ThumbnailMatrix;

@interface StationerySelector : NSObject <NSDraggingSource, NSTableViewDataSource, NSTableViewDelegate>
{
    NSArray *_stationeryDictionaries;	// 8 = 0x8
    NSMutableArray *_deletedStationery;	// 16 = 0x10
    NSMutableDictionary *_scrollPositionByCategory;	// 24 = 0x18
    BOOL _isFirstShowOfCategoriesForFavorites;	// 32 = 0x20
    BOOL _isFirstShowOfCategoriesForExistingStationery;	// 33 = 0x21
    BOOL _hasRegisteredForNewThumbnailImageNotifications;	// 34 = 0x22
    FlatTableView *_categoriesTableView;	// 40 = 0x28
    ThumbnailMatrix *_thumbnailMatrix;	// 48 = 0x30
    DocumentEditor *_documentEditor;	// 56 = 0x38
    ColorBackgroundView *_selectorPane;	// 64 = 0x40
    NSTextField *_emptyFavoritesMessageView;	// 72 = 0x48
    NSScrollView *_thumbnailsScrollView;	// 80 = 0x50
    ColorBackgroundView *_bottomDivider;	// 88 = 0x58
    NSView *_verticalDivider;	// 96 = 0x60
    StationeryLoader *_stationeryLoader;	// 104 = 0x68
    NSArray *_categoryDictionaries;	// 112 = 0x70
}

@property(nonatomic) BOOL hasRegisteredForNewThumbnailImageNotifications; // @synthesize hasRegisteredForNewThumbnailImageNotifications=_hasRegisteredForNewThumbnailImageNotifications;
@property(nonatomic) BOOL isFirstShowOfCategoriesForExistingStationery; // @synthesize isFirstShowOfCategoriesForExistingStationery=_isFirstShowOfCategoriesForExistingStationery;
@property(nonatomic) BOOL isFirstShowOfCategoriesForFavorites; // @synthesize isFirstShowOfCategoriesForFavorites=_isFirstShowOfCategoriesForFavorites;
@property(copy, nonatomic) NSArray *categoryDictionaries; // @synthesize categoryDictionaries=_categoryDictionaries;
@property(readonly, nonatomic) __weak StationeryLoader *stationeryLoader; // @synthesize stationeryLoader=_stationeryLoader;
@property(nonatomic) __weak NSView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(nonatomic) __weak ColorBackgroundView *bottomDivider; // @synthesize bottomDivider=_bottomDivider;
@property(nonatomic) __weak NSScrollView *thumbnailsScrollView; // @synthesize thumbnailsScrollView=_thumbnailsScrollView;
@property(nonatomic) __weak NSTextField *emptyFavoritesMessageView; // @synthesize emptyFavoritesMessageView=_emptyFavoritesMessageView;
@property(nonatomic) __weak ColorBackgroundView *selectorPane; // @synthesize selectorPane=_selectorPane;
@property(nonatomic) __weak DocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(nonatomic) __weak ThumbnailMatrix *thumbnailMatrix; // @synthesize thumbnailMatrix=_thumbnailMatrix;
@property(nonatomic) __weak FlatTableView *categoriesTableView; // @synthesize categoriesTableView=_categoriesTableView;
- (void).cxx_destruct;
- (BOOL)_draggingPasteboardContainsStationery;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_thumbnailImageIsAvailable:(id)arg1;
- (void)startDragSessionFromIndex:(long long)arg1 withImage:(id)arg2 event:(id)arg3;
- (void)deleteStationery:(id)arg1;
- (void)clearStationerySelection;
- (void)selectStationery:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_setStationeryDictionaries:(id)arg1;
- (void)_displayStationery:(id)arg1 showDeleteButtons:(BOOL)arg2 beginningAtIndex:(long long)arg3;
- (void)_restoreThumbnailScrollPosition;
- (void)_saveThumbnailScrollPosition;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (void)selectCategory:(id)arg1;
- (void)_stationeryDidChange:(id)arg1;
- (void)_refreshStationery;
- (void)showStationery;
- (void)dealloc;
- (id)_mainContentConstraintsForView:(id)arg1;
- (void)_moveThumbnailsToScrollView;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

