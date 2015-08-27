#import <objc/NSObject.h>

#import "NSTableViewDataSource-Protocol.h"

@class CriterionView, NSButton, NSMutableArray, NSPanel, NSPopUpButton, NSScrollView, NSString, NSTableView, NSTextField, NSWindow;

@interface CriteriaUIHelper : NSObject <NSTableViewDataSource>
{
    NSMutableArray *_criteriaViews;	// 8 = 0x8
    BOOL _isEditingHeader;	// 16 = 0x10
    BOOL _criteriaWillBeUsedForMailboxes;	// 17 = 0x11
    CriterionView *_criterionView;	// 24 = 0x18
    NSTextField *_nameField;	// 32 = 0x20
    NSScrollView *_criteriaContainer;	// 40 = 0x28
    NSPopUpButton *_allCriteriaMustBeMetPopUp;	// 48 = 0x30
    NSButton *_includeTrashCheckbox;	// 56 = 0x38
    NSButton *_includeSentCheckbox;	// 64 = 0x40
    NSTextField *_performActionLabel;	// 72 = 0x48
    NSScrollView *_actionContainer;	// 80 = 0x50
    NSPanel *_headerListPanel;	// 88 = 0x58
    NSTableView *_headerListTable;	// 96 = 0x60
    NSButton *_addHeaderButton;	// 104 = 0x68
    NSString *_previousTitle;	// 112 = 0x70
    NSWindow *_parentWindow;	// 120 = 0x78
    id _objectWithCriteria;	// 128 = 0x80
}

+ (id)headerList;
+ (void)unpackUserCriteria:(id *)arg1 noJunkCriterion:(id *)arg2 noTrashCriterion:(id *)arg3 noSentCriterion:(id *)arg4 allCriteriaMustBeSatisfield:(char *)arg5 fromCriteria:(id)arg6;
+ (id)packageUserCriteria:(id)arg1 withNoJunk:(BOOL)arg2 noTrash:(BOOL)arg3 noSent:(BOOL)arg4 allUserCriteriaMustBeSatisfied:(BOOL)arg5;
@property(nonatomic) __weak id objectWithCriteria; // @synthesize objectWithCriteria=_objectWithCriteria;
@property(nonatomic) BOOL criteriaWillBeUsedForMailboxes; // @synthesize criteriaWillBeUsedForMailboxes=_criteriaWillBeUsedForMailboxes;
@property(nonatomic) BOOL isEditingHeader; // @synthesize isEditingHeader=_isEditingHeader;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSString *previousTitle; // @synthesize previousTitle=_previousTitle;
@property(retain, nonatomic) NSButton *addHeaderButton; // @synthesize addHeaderButton=_addHeaderButton;
@property(retain, nonatomic) NSTableView *headerListTable; // @synthesize headerListTable=_headerListTable;
@property(retain, nonatomic) NSPanel *headerListPanel; // @synthesize headerListPanel=_headerListPanel;
@property(retain, nonatomic) NSScrollView *actionContainer; // @synthesize actionContainer=_actionContainer;
@property(retain, nonatomic) NSTextField *performActionLabel; // @synthesize performActionLabel=_performActionLabel;
@property(retain, nonatomic) NSButton *includeSentCheckbox; // @synthesize includeSentCheckbox=_includeSentCheckbox;
@property(retain, nonatomic) NSButton *includeTrashCheckbox; // @synthesize includeTrashCheckbox=_includeTrashCheckbox;
@property(retain, nonatomic) NSPopUpButton *allCriteriaMustBeMetPopUp; // @synthesize allCriteriaMustBeMetPopUp=_allCriteriaMustBeMetPopUp;
@property(retain, nonatomic) NSScrollView *criteriaContainer; // @synthesize criteriaContainer=_criteriaContainer;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) CriterionView *criterionView; // @synthesize criterionView=_criterionView;
- (void).cxx_destruct;
- (void)connectNextKeyViewChain;
- (void)tileViews:(id)arg1 inContainer:(id)arg2 withChangeAtRow:(unsigned long long)arg3 removeIsEnabled:(BOOL)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)_removeInvalidHeaders;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addHeaderClicked:(id)arg1;
- (void)_headerTableEndedEditing:(id)arg1;
- (void)_headerTableBeganEditing:(id)arg1;
- (void)_updateHeaderListUI;
- (void)headerListCancelClicked:(id)arg1;
- (void)headerListOkClicked:(id)arg1;
- (void)_endEditingHeader;
- (void)resetHeaderListForObjectsWithCriteria:(id)arg1;
- (void)_configureAllCriterionMenus;
- (void)editHeaderList;
- (void)userHasSelectedSenderInContacts:(char *)arg1 senderInPreviousRecipients:(char *)arg2;
- (void)removeView:(id)arg1 fromViews:(id)arg2 inContainer:(id)arg3;
- (void)removeCriterion:(id)arg1;
- (id)_createNewCriterionViewForSender:(id)arg1;
- (void)addCriterion:(id)arg1;
- (void)configureCriteriaForObject:(id)arg1;
- (void)trashMailboxCriterionAdded;
- (void)sentMessagesMailboxCriterionAdded;
- (void)putCriteriaFromUIIntoObject:(id)arg1;
- (id)newCriterion;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

