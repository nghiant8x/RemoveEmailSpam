#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MessageListColumnManager : NSObject
{
    NSMutableDictionary *_tableColumnPreferences;	// 8 = 0x8
    BOOL _wereTableColumnPreferencesSetupFromScratch;	// 16 = 0x10
    BOOL _blockSavingColumnPreferences;	// 17 = 0x11
    NSArray *_tableColumns;	// 24 = 0x18
    NSDictionary *_viewerPreferences;	// 32 = 0x20
}

+ (void)setSharedManager:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) BOOL blockSavingColumnPreferences; // @synthesize blockSavingColumnPreferences=_blockSavingColumnPreferences;
@property(copy, nonatomic) NSDictionary *viewerPreferences; // @synthesize viewerPreferences=_viewerPreferences;
@property(copy, nonatomic) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(nonatomic) BOOL wereTableColumnPreferencesSetupFromScratch; // @synthesize wereTableColumnPreferencesSetupFromScratch=_wereTableColumnPreferencesSetupFromScratch;
- (void).cxx_destruct;
- (void)_setupUnreadColumnWidthInTableView:(id)arg1 forMailboxes:(id)arg2 isThreaded:(BOOL)arg3;
- (void)setUpUnreadColumnMinWidth:(id)arg1 isThreaded:(BOOL)arg2;
- (long long)calcUnreadColumnWidth:(id)arg1 forUnreadCountString:(id)arg2;
- (void)column:(id)arg1 wasMadeVisible:(BOOL)arg2 inTableView:(id)arg3 forMailboxes:(id)arg4 isSearching:(BOOL)arg5 searchTarget:(int)arg6 searchField:(long long)arg7;
- (void)sizeColumnsToFitInTableView:(id)arg1 forMailboxes:(id)arg2 isThreaded:(BOOL)arg3 threadingDidChange:(BOOL)arg4;
- (void)showColumnsInTableView:(id)arg1 allColumns:(id)arg2 forSearchTarget:(int)arg3 searchField:(long long)arg4 mailboxes:(id)arg5 isThreaded:(BOOL)arg6;
- (void)showColumnsInTableView:(id)arg1 allColumns:(id)arg2 forMailboxes:(id)arg3 isThreaded:(BOOL)arg4 threadingHasChanged:(BOOL)arg5;
- (BOOL)_someMailboxUsesLastViewedDateCriterion:(id)arg1;
- (BOOL)_column:(long long)arg1 isAnAutomaticInsertColumnForMailboxType:(id)arg2 mailboxes:(id)arg3 multipleMailboxes:(BOOL)arg4 isSearching:(BOOL)arg5 searchTarget:(int)arg6 searchField:(long long)arg7;
- (BOOL)_columnsList:(id)arg1 containsColumn:(long long)arg2;
- (id)_widthKeyForMailboxType:(id)arg1 isThreaded:(BOOL)arg2 isSearching:(BOOL)arg3 locationIsVisible:(BOOL)arg4;
- (id)typeOfMailboxes:(id)arg1 multiple:(char *)arg2;
- (id)_visibleTableColumnSettingsForMailboxes:(id)arg1 multipleMailboxes:(BOOL)arg2 ofType:(id)arg3 withLastViewedDate:(BOOL)arg4 isThreaded:(BOOL)arg5 isSearching:(BOOL)arg6 searchTarget:(int)arg7 searchField:(long long)arg8 tableView:(id)arg9;
- (void)_setColumn:(long long)arg1 isVisible:(BOOL)arg2 inSettings:(id)arg3;
- (void)_replaceColumn:(long long)arg1 byColumn:(long long)arg2 inSettings:(id)arg3;
- (id)_convertNormalSettingsFromPreleopardDefaults;
- (long long)_widthAndPosition:(long long *)arg1 forColumn:(id)arg2 mailboxes:(id)arg3 isThreaded:(BOOL)arg4 isSearching:(BOOL)arg5 locationIsVisible:(BOOL)arg6;
- (long long)widthAndPosition:(long long *)arg1 forColumn:(id)arg2 inTableView:(id)arg3 mailboxes:(id)arg4 isThreaded:(BOOL)arg5 isSearching:(BOOL)arg6;
- (id)_settingForColumn:(long long)arg1 forKey:(id)arg2 forMailboxes:(id)arg3;
- (BOOL)isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1 forMailboxes:(id)arg2;
- (BOOL)isColumnVisible:(long long)arg1 forMailboxes:(id)arg2;
- (id)_tableColumnPreferencesForMailboxType:(id)arg1;
- (void)takeDefaultsForMailboxes:(id)arg1 isThreaded:(BOOL)arg2 isSearching:(BOOL)arg3 searchTarget:(int)arg4 fromCurrentColumnsInTableView:(id)arg5;
- (void)saveColumnPreferencesToStandardDefaults;
- (void)dealloc;
- (id)initWithTableColumns:(id)arg1 viewerPreferences:(id)arg2;

@end

