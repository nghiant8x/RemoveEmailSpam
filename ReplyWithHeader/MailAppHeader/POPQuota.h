#import "Quota.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSPopUpButton, NSString;

@interface POPQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableAttributedString *_truncatedString;	// 8 = 0x8
    NSMutableDictionary *_truncatedParagraphStyle;	// 16 = 0x10
    struct QuotaSimpleSortDescriptor _simpleSortDescs[5];	// 24 = 0x18
    NSMutableArray *_messageIDs;	// 104 = 0x68
    NSPopUpButton *_showMessagesPopup;	// 112 = 0x70
    NSButton *_deleteButton;	// 120 = 0x78
}

@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NSPopUpButton *showMessagesPopup; // @synthesize showMessagesPopup=_showMessagesPopup;
- (void).cxx_destruct;
- (void)_deleteServerMessagesCompleted:(id)arg1;
- (void)_deleteServerMessagesStarted:(id)arg1;
- (BOOL)_updateMessage:(id)arg1;
- (unsigned long long)_addMessage:(id)arg1;
- (void)_resortMessages;
- (void)_syncSortDescriptors;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_truncatedAttributedStringForString:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (id)_account;
- (void)showMessagesPopupChanged:(id)arg1;
- (void)_updateUsageField;
- (id)_filterMessages:(id)arg1 showMessageType:(long long)arg2;
- (BOOL)_shouldShowMessage:(id)arg1 showMessageType:(long long)arg2;
- (void)deleteFromServer:(id)arg1;
- (Class)engineClass;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

