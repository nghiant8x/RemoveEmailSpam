#import <objc/NSObject.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSImage, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSSearchField, NSString, NSTableView, NSWindow;

@interface AddressHistoryController : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_historyRecords;	// 8 = 0x8
    BOOL _sortIsAscending;	// 16 = 0x10
    NSTableView *_historyTableView;	// 24 = 0x18
    NSButton *_addToContactsButton;	// 32 = 0x20
    NSWindow *_window;	// 40 = 0x28
    NSSearchField *_searchField;	// 48 = 0x30
    NSMutableDictionary *_abRecordMap;	// 56 = 0x38
    NSOperationQueue *_fetchQueue;	// 64 = 0x40
    NSString *_sortColumn;	// 72 = 0x48
    NSImage *_addressBookPersonImage;	// 80 = 0x50
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSImage *addressBookPersonImage; // @synthesize addressBookPersonImage=_addressBookPersonImage;
@property(nonatomic) BOOL sortIsAscending; // @synthesize sortIsAscending=_sortIsAscending;
@property(nonatomic) __weak NSString *sortColumn; // @synthesize sortColumn=_sortColumn;
@property(readonly, nonatomic) NSOperationQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSMutableDictionary *abRecordMap; // @synthesize abRecordMap=_abRecordMap;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak NSButton *addToContactsButton; // @synthesize addToContactsButton=_addToContactsButton;
@property(nonatomic) __weak NSTableView *historyTableView; // @synthesize historyTableView=_historyTableView;
- (void).cxx_destruct;
- (id)_recordForAddress:(id)arg1;
- (void)_addressBookDidChange:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)_showColumnSortIndicator;
- (void)_sortHistoryData;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openContacts:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)_cancelSearch:(id)arg1;
- (void)search:(id)arg1;
- (void)searchIndex:(id)arg1;
- (void)deleteFromHistory:(id)arg1;
- (void)addToContacts:(id)arg1;
- (void)showAddressHistory;
- (void)_fetchRecentsDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

