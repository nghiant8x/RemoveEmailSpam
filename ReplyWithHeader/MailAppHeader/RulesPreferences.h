#import <AppKit/NSPreferencesModule.h>

#import "MailTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "SoundPopUpButtonDelegate-Protocol.h"

@class AppleScriptPopUpButton, CriteriaUIHelper, MFMessageRule, MUIAddressField, MailTableView, MailboxesChooser, NSButton, NSMenu, NSMutableArray, NSPanel, NSPopUpButton, NSScrollView, NSString, NSTextField, NSTextView, NSView, SoundPopUpButton;

@interface RulesPreferences : NSPreferencesModule <NSTableViewDataSource, MailTableViewDelegate, NSWindowDelegate, SoundPopUpButtonDelegate>
{
    NSMutableArray *_actionViews;	// 48 = 0x30
    BOOL _colorPanelShouldBeHidden;	// 56 = 0x38
    BOOL _isDuplicatingRule;	// 57 = 0x39
    BOOL _hasPendingChanges;	// 58 = 0x3a
    MUIAddressField *_forwardRecipientsField;	// 64 = 0x40
    MUIAddressField *_redirectRecipientsField;	// 72 = 0x48
    MailTableView *_rulesTable;	// 80 = 0x50
    NSButton *_editButton;	// 88 = 0x58
    NSButton *_duplicateButton;	// 96 = 0x60
    NSButton *_removeButton;	// 104 = 0x68
    NSPanel *_ruleDetailPanel;	// 112 = 0x70
    NSTextField *_ruleNameField;	// 120 = 0x78
    NSButton *_ruleHelpButton;	// 128 = 0x80
    NSMenu *_actionMenu;	// 136 = 0x88
    NSScrollView *_actionContainer;	// 144 = 0x90
    NSView *_soundActionView;	// 152 = 0x98
    NSView *_colorActionView;	// 160 = 0xa0
    NSView *_transferActionView;	// 168 = 0xa8
    NSView *_makeCopyActionView;	// 176 = 0xb0
    NSView *_autoReplyActionView;	// 184 = 0xb8
    NSView *_autoForwardActionView;	// 192 = 0xc0
    NSView *_autoRedirectActionView;	// 200 = 0xc8
    NSView *_markDeletedActionView;	// 208 = 0xd0
    NSView *_markAsReadActionView;	// 216 = 0xd8
    NSView *_markAsFlaggedActionView;	// 224 = 0xe0
    NSView *_stopEvaluatingRulesActionView;	// 232 = 0xe8
    NSView *_runAppleScriptActionView;	// 240 = 0xf0
    NSView *_notifyUserActionView;	// 248 = 0xf8
    NSView *_sendNotificationActionView;	// 256 = 0x100
    NSPopUpButton *_colorPopup;	// 264 = 0x108
    NSPopUpButton *_colorStylePopup;	// 272 = 0x110
    NSPopUpButton *_flagColorPopup;	// 280 = 0x118
    SoundPopUpButton *_soundPopup;	// 288 = 0x120
    AppleScriptPopUpButton *_appleScriptPopup;	// 296 = 0x128
    NSPanel *_responseMessageTextPanel;	// 304 = 0x130
    NSTextView *_responseMessageTextView;	// 312 = 0x138
    CriteriaUIHelper *_criteriaUIHelper;	// 320 = 0x140
    MailboxesChooser *_destinationChooser;	// 328 = 0x148
    MailboxesChooser *_makeCopyDestinationChooser;	// 336 = 0x150
    long long _currentlySelectedRow;	// 344 = 0x158
    MFMessageRule *_ruleBeingValidated;	// 352 = 0x160
    MFMessageRule *_ruleBeingEdited;	// 360 = 0x168
}

@property(nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) BOOL isDuplicatingRule; // @synthesize isDuplicatingRule=_isDuplicatingRule;
@property(retain, nonatomic) MFMessageRule *ruleBeingEdited; // @synthesize ruleBeingEdited=_ruleBeingEdited;
@property(retain, nonatomic) MFMessageRule *ruleBeingValidated; // @synthesize ruleBeingValidated=_ruleBeingValidated;
@property(nonatomic) long long currentlySelectedRow; // @synthesize currentlySelectedRow=_currentlySelectedRow;
@property(nonatomic) BOOL colorPanelShouldBeHidden; // @synthesize colorPanelShouldBeHidden=_colorPanelShouldBeHidden;
@property(retain, nonatomic) MailboxesChooser *makeCopyDestinationChooser; // @synthesize makeCopyDestinationChooser=_makeCopyDestinationChooser;
@property(retain, nonatomic) MailboxesChooser *destinationChooser; // @synthesize destinationChooser=_destinationChooser;
@property(retain, nonatomic) CriteriaUIHelper *criteriaUIHelper; // @synthesize criteriaUIHelper=_criteriaUIHelper;
@property(nonatomic) NSTextView *responseMessageTextView; // @synthesize responseMessageTextView=_responseMessageTextView;
@property(retain, nonatomic) NSPanel *responseMessageTextPanel; // @synthesize responseMessageTextPanel=_responseMessageTextPanel;
@property(nonatomic) __weak AppleScriptPopUpButton *appleScriptPopup; // @synthesize appleScriptPopup=_appleScriptPopup;
@property(nonatomic) __weak SoundPopUpButton *soundPopup; // @synthesize soundPopup=_soundPopup;
@property(nonatomic) __weak NSPopUpButton *flagColorPopup; // @synthesize flagColorPopup=_flagColorPopup;
@property(nonatomic) __weak NSPopUpButton *colorStylePopup; // @synthesize colorStylePopup=_colorStylePopup;
@property(nonatomic) __weak NSPopUpButton *colorPopup; // @synthesize colorPopup=_colorPopup;
@property(retain, nonatomic) NSView *sendNotificationActionView; // @synthesize sendNotificationActionView=_sendNotificationActionView;
@property(retain, nonatomic) NSView *notifyUserActionView; // @synthesize notifyUserActionView=_notifyUserActionView;
@property(retain, nonatomic) NSView *runAppleScriptActionView; // @synthesize runAppleScriptActionView=_runAppleScriptActionView;
@property(retain, nonatomic) NSView *stopEvaluatingRulesActionView; // @synthesize stopEvaluatingRulesActionView=_stopEvaluatingRulesActionView;
@property(retain, nonatomic) NSView *markAsFlaggedActionView; // @synthesize markAsFlaggedActionView=_markAsFlaggedActionView;
@property(retain, nonatomic) NSView *markAsReadActionView; // @synthesize markAsReadActionView=_markAsReadActionView;
@property(retain, nonatomic) NSView *markDeletedActionView; // @synthesize markDeletedActionView=_markDeletedActionView;
@property(retain, nonatomic) NSView *autoRedirectActionView; // @synthesize autoRedirectActionView=_autoRedirectActionView;
@property(retain, nonatomic) NSView *autoForwardActionView; // @synthesize autoForwardActionView=_autoForwardActionView;
@property(retain, nonatomic) NSView *autoReplyActionView; // @synthesize autoReplyActionView=_autoReplyActionView;
@property(retain, nonatomic) NSView *makeCopyActionView; // @synthesize makeCopyActionView=_makeCopyActionView;
@property(retain, nonatomic) NSView *transferActionView; // @synthesize transferActionView=_transferActionView;
@property(retain, nonatomic) NSView *colorActionView; // @synthesize colorActionView=_colorActionView;
@property(retain, nonatomic) NSView *soundActionView; // @synthesize soundActionView=_soundActionView;
@property(nonatomic) __weak NSScrollView *actionContainer; // @synthesize actionContainer=_actionContainer;
@property(retain, nonatomic) NSMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(nonatomic) __weak NSButton *ruleHelpButton; // @synthesize ruleHelpButton=_ruleHelpButton;
@property(nonatomic) __weak NSTextField *ruleNameField; // @synthesize ruleNameField=_ruleNameField;
@property(retain, nonatomic) NSPanel *ruleDetailPanel; // @synthesize ruleDetailPanel=_ruleDetailPanel;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSButton *duplicateButton; // @synthesize duplicateButton=_duplicateButton;
@property(nonatomic) __weak NSButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak MailTableView *rulesTable; // @synthesize rulesTable=_rulesTable;
@property(nonatomic) __weak MUIAddressField *redirectRecipientsField; // @synthesize redirectRecipientsField=_redirectRecipientsField;
@property(nonatomic) __weak MUIAddressField *forwardRecipientsField; // @synthesize forwardRecipientsField=_forwardRecipientsField;
- (void).cxx_destruct;
- (void)_openAppleScriptDirectoryInFinder;
- (id)titleForSoundFile:(id)arg1;
- (void)_accountMailboxListingDidChange:(id)arg1;
- (void)actionPopupChanged:(id)arg1;
- (void)_actionPopupWillPopup:(id)arg1;
- (void)mailboxSelected:(id)arg1;
- (void)flagsToApplyChanged:(id)arg1;
- (void)responseMessageCancelClicked:(id)arg1;
- (void)responseMessageOKClicked:(id)arg1;
- (void)setResponseMessageClicked:(id)arg1;
- (void)colorStyleChanged:(id)arg1;
- (void)colorPicked:(id)arg1;
- (void)colorChanged:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)runRuleDetailPanelForRule:(id)arg1 inWindow:(id)arg2 withHelpButtonTag:(long long)arg3;
- (void)_validateActionMenuItem:(id)arg1 currentTag:(long long)arg2;
- (void)addAction:(id)arg1;
- (void)_configureActionsForRule:(id)arg1;
- (void)_configureFlagColorPopup;
- (void)_configureColorPopupForColorStyle:(long long)arg1;
- (void)_addActionForTag:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)_actionViewForTag:(long long)arg1;
- (void)removeAction:(id)arg1;
- (void)_setOtherColor:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)_validateDrag:(id)arg1 proposedRow:(long long)arg2 dragOperation:(unsigned long long)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (int)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)editRule:(id)arg1;
- (void)duplicateRule:(id)arg1;
- (void)createRule:(id)arg1;
- (void)saveChanges;
- (void)initializeFromDefaults;
- (void)_validateButtonState;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)preferencesNibName;
- (id)viewForPreferenceNamed:(id)arg1;
- (void)awakeFromNib;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

