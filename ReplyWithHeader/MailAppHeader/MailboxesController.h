#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MFMailbox, MailboxesChooser, NSArray, NSButton, NSConditionLock, NSMutableDictionary, NSMutableSet, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;
@protocol MVMailboxSelectionOwner;

@interface MailboxesController : NSObject <MCActivityTarget, MVTerminationHandler, NSMenuDelegate>
{
    MFMailbox *_currentTransferMailbox;	// 8 = 0x8
    NSConditionLock *_smartMailboxesNeedSavingLock;	// 16 = 0x10
    NSMutableSet *_rootMailboxMenus;	// 24 = 0x18
    NSMutableDictionary *_contextualMenus;	// 32 = 0x20
    BOOL _currentTransferIsCopy;	// 40 = 0x28
    NSWindow *_makeNewMailboxPanel;	// 48 = 0x30
    NSTextField *_makeNewMailboxField;	// 56 = 0x38
    NSTextField *_makeNewMailboxMessage;	// 64 = 0x40
    NSButton *_makeNewMailboxOKButton;	// 72 = 0x48
    NSPopUpButton *_makeNewMailboxPopUp;	// 80 = 0x50
    MailboxesChooser *_makeNewMailboxChooser;	// 88 = 0x58
    NSView *_exportChildrenView;	// 96 = 0x60
    NSButton *_exportChildrenCheckbox;	// 104 = 0x68
    id <MVMailboxSelectionOwner> _currentMailboxSelectionOwner;	// 112 = 0x70
    MailboxesChooser *_menuMailboxesChooser;	// 120 = 0x78
    NSArray *_originalGlobalSortOrder;	// 128 = 0x80
}

+ (id)_mergeOldMailUserInfoDictionary:(id)arg1 withSyncChanges:(id)arg2;
+ (id)_filteredMailUserInfoDictionary:(id)arg1;
+ (void)_createDownsizedImages;
+ (id)_flagColorForColor:(BOOL)arg1;
+ (id)_imageForFlagColor:(BOOL)arg1 ofSize:(unsigned long long)arg2;
+ (id)_iconForSmartMailboxWithSize:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)_iconForGenericMailboxWithSize:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)iconForMailbox:(id)arg1 size:(unsigned long long)arg2 style:(unsigned long long)arg3;
@property(retain, nonatomic) NSArray *originalGlobalSortOrder; // @synthesize originalGlobalSortOrder=_originalGlobalSortOrder;
@property(retain, nonatomic) MailboxesChooser *menuMailboxesChooser; // @synthesize menuMailboxesChooser=_menuMailboxesChooser;
@property(nonatomic) BOOL currentTransferIsCopy; // @synthesize currentTransferIsCopy=_currentTransferIsCopy;
@property(nonatomic) __weak id <MVMailboxSelectionOwner> currentMailboxSelectionOwner; // @synthesize currentMailboxSelectionOwner=_currentMailboxSelectionOwner;
@property(nonatomic) __weak NSButton *exportChildrenCheckbox; // @synthesize exportChildrenCheckbox=_exportChildrenCheckbox;
@property(retain, nonatomic) NSView *exportChildrenView; // @synthesize exportChildrenView=_exportChildrenView;
@property(retain, nonatomic) MailboxesChooser *makeNewMailboxChooser; // @synthesize makeNewMailboxChooser=_makeNewMailboxChooser;
@property(nonatomic) __weak NSPopUpButton *makeNewMailboxPopUp; // @synthesize makeNewMailboxPopUp=_makeNewMailboxPopUp;
@property(nonatomic) __weak NSButton *makeNewMailboxOKButton; // @synthesize makeNewMailboxOKButton=_makeNewMailboxOKButton;
@property(nonatomic) __weak NSTextField *makeNewMailboxMessage; // @synthesize makeNewMailboxMessage=_makeNewMailboxMessage;
@property(nonatomic) __weak NSTextField *makeNewMailboxField; // @synthesize makeNewMailboxField=_makeNewMailboxField;
@property(retain, nonatomic) NSWindow *makeNewMailboxPanel; // @synthesize makeNewMailboxPanel=_makeNewMailboxPanel;
- (void).cxx_destruct;
- (id)_smartMailboxesFromDictionaryRepresentations:(id)arg1 andMergeOldUserInfoFromMailboxes:(BOOL)arg2;
- (void)_removeLocalProperties:(id)arg1 fromSmartMailboxes:(id)arg2;
- (id)_smartMailboxesDictionaryRepresentationsFilteredForSync:(BOOL)arg1 localProperties:(id *)arg2;
- (id)_loadDefaultSmartMailboxes;
- (void)_addLocalProperties:(id)arg1 toSmartMailboxes:(id)arg2;
- (id)_readSmartMailboxesFromDisk;
- (id)_sortMailboxesDictionaries:(id)arg1 withIdentifiers:(id)arg2;
- (id)_sortMailboxes:(id)arg1 withIdentifiers:(id)arg2;
- (void)_writeSmartMailboxesToDisk;
- (void)_writeSmartMailboxesToDiskWithDelay;
- (void)_setSmartMailboxesNeedSaving:(BOOL)arg1;
- (BOOL)_smartMailboxesNeedSaving;
- (void)_smartMailboxChanged:(id)arg1;
- (id)smartMailboxesPathForFile:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (id)smartMailboxes;
- (void)_diagnosticsNotificationReceived:(id)arg1;
- (void)_reloadSmartMailboxesSyncedFile:(id)arg1;
- (void)initializeSmartMailboxes;
- (void)addSmartMailboxFolder:(id)arg1;
- (void)smartMailboxWasEdited:(id)arg1;
- (void)tentativelyAddSmartMailbox:(id)arg1;
- (void)addSmartMailbox:(id)arg1 select:(BOOL)arg2;
- (BOOL)moveOrCopy:(id)arg1 smartMailboxes:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)copyMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_synchronouslyCopyMailboxes:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3 originalParent:(id)arg4;
- (BOOL)moveMailboxes:(id)arg1 toParentMailbox:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)removeAccount:(id)arg1;
- (BOOL)moveAccount:(id)arg1 toAfterAccount:(id)arg2;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)_isCopyMenu:(id)arg1;
- (BOOL)_isMoveMenu:(id)arg1;
- (void)bringUpTransferMenu:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)_unreadMessagesInMailbox:(id)arg1;
- (void)_asynchronouslyChangeReadFlag:(BOOL)arg1 forMessages:(id)arg2;
- (void)_changeReadFlag:(BOOL)arg1 forMessages:(id)arg2;
- (void)markAllAsRead:(id)arg1;
- (void)_gatherMessagesForFlagChange:(id)arg1;
- (void)setSpecialMailbox:(id)arg1;
- (void)exportMailbox:(id)arg1;
- (void)_exportMailboxes:(id)arg1 toDirectory:(id)arg2 includeChildren:(id)arg3;
- (void)_userEditedMailboxName:(id)arg1;
- (void)renameMailbox:(id)arg1;
- (void)_synchronouslySetName:(id)arg1 andParent:(id)arg2 forMailboxes:(id)arg3 insertionIndex:(unsigned long long)arg4;
- (void)_updateDisplayIndexesInParentMailbox:(id)arg1 byMovingMailboxes:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)removeFromVIPSenders:(id)arg1;
- (void)deleteMailbox:(id)arg1;
- (void)_synchronouslyDeleteMailboxes:(id)arg1;
- (void)mailboxPopUpChanged:(id)arg1;
- (void)newGroup:(id)arg1;
- (void)newFolder:(id)arg1;
- (void)duplicateSmartMailbox:(id)arg1;
- (void)editSmartMailbox:(id)arg1;
- (void)newSmartMailbox:(id)arg1;
- (void)showOutOfOfficeSettings:(id)arg1;
- (void)newMailbox:(id)arg1;
- (void)_configureNewMailboxPanelForMailbox:(id)arg1;
- (void)_synchronouslyCreateNewMailboxWithName:(id)arg1 parent:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (id)mailboxSelectionOwnerFromSender:(id)arg1;
- (void)resignMailboxSelectionOwnerFor:(id)arg1;
- (void)setMailboxSelectionOwnerFrom:(id)arg1;
- (id)mailboxSelectionOwner;
- (id)smartMailboxesSyncedFile;
- (BOOL)currentTransferDeletesOriginals;
- (id)currentTransferMailbox;
- (void)setCurrentTransferMailbox:(id)arg1 deletedOriginals:(BOOL)arg2;
- (void)saveDefaults;
- (void)readDefaults;
- (id)menuForMailbox:(id)arg1 isContextMenu:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (id)previousMailboxIdentifiersOfType:(id)arg1 fromDictionary:(id)arg2;
- (id)previousVersionedSmartMailboxIdentifiersFromDictionary:(id)arg1;
- (id)previousSmartMailboxIdentifiersFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

