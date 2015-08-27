#import <objc/NSObject.h>

@class CriteriaUIHelper, MFMailbox, NSTextField, NSTextView, NSView, NSWindow;

@interface SmartMailboxEditor : NSObject
{
    BOOL _editedMailboxIsNew;	// 8 = 0x8
    CriteriaUIHelper *_criteriaUIHelper;	// 16 = 0x10
    NSWindow *_makeNewMailboxWindow;	// 24 = 0x18
    NSTextField *_nameField;	// 32 = 0x20
    NSWindow *_makeNewFolderWindow;	// 40 = 0x28
    NSTextField *_groupNameField;	// 48 = 0x30
    NSWindow *_notEditableWindow;	// 56 = 0x38
    NSTextField *_searchStringField;	// 64 = 0x40
    NSTextView *_mailboxesTextView;	// 72 = 0x48
    NSView *_criteriaView;	// 80 = 0x50
    SmartMailboxEditor *_me;	// 88 = 0x58
    MFMailbox *_mailboxBeingEdited;	// 96 = 0x60
    MFMailbox *_mailboxBeingValidated;	// 104 = 0x68
}

+ (BOOL)mailboxIsEditable:(id)arg1;
+ (BOOL)isEditingInProgress;
@property(nonatomic) BOOL editedMailboxIsNew; // @synthesize editedMailboxIsNew=_editedMailboxIsNew;
@property(retain, nonatomic) MFMailbox *mailboxBeingValidated; // @synthesize mailboxBeingValidated=_mailboxBeingValidated;
@property(retain, nonatomic) MFMailbox *mailboxBeingEdited; // @synthesize mailboxBeingEdited=_mailboxBeingEdited;
@property(retain, nonatomic) SmartMailboxEditor *me; // @synthesize me=_me;
@property(nonatomic) __weak NSView *criteriaView; // @synthesize criteriaView=_criteriaView;
@property(nonatomic) NSTextView *mailboxesTextView; // @synthesize mailboxesTextView=_mailboxesTextView;
@property(nonatomic) __weak NSTextField *searchStringField; // @synthesize searchStringField=_searchStringField;
@property(retain, nonatomic) NSWindow *notEditableWindow; // @synthesize notEditableWindow=_notEditableWindow;
@property(nonatomic) __weak NSTextField *groupNameField; // @synthesize groupNameField=_groupNameField;
@property(retain, nonatomic) NSWindow *makeNewFolderWindow; // @synthesize makeNewFolderWindow=_makeNewFolderWindow;
@property(nonatomic) __weak NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) NSWindow *makeNewMailboxWindow; // @synthesize makeNewMailboxWindow=_makeNewMailboxWindow;
@property(retain, nonatomic) CriteriaUIHelper *criteriaUIHelper; // @synthesize criteriaUIHelper=_criteriaUIHelper;
- (void).cxx_destruct;
- (void)_saveEditedMailbox;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)createNewMailboxGroup;
- (void)editSmartMailbox:(id)arg1 suggestedName:(id)arg2 isNew:(BOOL)arg3;

@end

