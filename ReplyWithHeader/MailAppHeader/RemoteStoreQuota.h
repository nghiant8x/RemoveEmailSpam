#import "Quota.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSButton, NSMutableArray, NSString;

@interface RemoteStoreQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_mailboxes;	// 8 = 0x8
    struct QuotaSimpleSortDescriptor _simpleSortDescs[3];	// 16 = 0x10
    NSButton *_showMessagesButton;	// 64 = 0x40
}

@property(nonatomic) __weak NSButton *showMessagesButton; // @synthesize showMessagesButton=_showMessagesButton;
- (void).cxx_destruct;
- (void)resortMailboxes;
- (void)syncSortDescriptors;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSortDescriptors;
- (id)_iconForMailbox:(id)arg1;
- (BOOL)tableShouldIncludeMailbox:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showMessages:(id)arg1;
- (void)engineUpdated:(id)arg1;
@property(copy, nonatomic) NSArray *mailboxes;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

