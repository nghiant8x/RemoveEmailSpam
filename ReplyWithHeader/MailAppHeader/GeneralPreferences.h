#import <AppKit/NSPreferencesModule.h>

#import "SoundPopUpButtonDelegate-Protocol.h"

@class DefaultApplicationPopUpButton, MailboxesChooser, NSButton, NSPopUpButton, NSString, SoundPopUpButton;

@interface GeneralPreferences : NSPreferencesModule <SoundPopUpButtonDelegate>
{
    NSPopUpButton *_fetchFrequencyPopup;	// 48 = 0x30
    SoundPopUpButton *_theNewMailSoundPopup;	// 56 = 0x38
    NSButton *_playMailSoundsCheckbox;	// 64 = 0x40
    MailboxesChooser *_dockBadgeMailboxesChooser;	// 72 = 0x48
    MailboxesChooser *_userNotificationMailboxesChooser;	// 80 = 0x50
    DefaultApplicationPopUpButton *_defaultMailClientPopUp;	// 88 = 0x58
    NSButton *_indexDecryptedMessagesButton;	// 96 = 0x60
    NSButton *_indexTrashButton;	// 104 = 0x68
    NSButton *_indexJunkButton;	// 112 = 0x70
    NSPopUpButton *_downloadFolderPopup;	// 120 = 0x78
    NSPopUpButton *_addInvitationsPopup;	// 128 = 0x80
    NSPopUpButton *_attachmentDeletionPopup;	// 136 = 0x88
}

@property(nonatomic) __weak NSPopUpButton *attachmentDeletionPopup; // @synthesize attachmentDeletionPopup=_attachmentDeletionPopup;
@property(nonatomic) __weak NSPopUpButton *addInvitationsPopup; // @synthesize addInvitationsPopup=_addInvitationsPopup;
@property(nonatomic) __weak NSPopUpButton *downloadFolderPopup; // @synthesize downloadFolderPopup=_downloadFolderPopup;
@property(nonatomic) __weak NSButton *indexJunkButton; // @synthesize indexJunkButton=_indexJunkButton;
@property(nonatomic) __weak NSButton *indexTrashButton; // @synthesize indexTrashButton=_indexTrashButton;
@property(nonatomic) __weak NSButton *indexDecryptedMessagesButton; // @synthesize indexDecryptedMessagesButton=_indexDecryptedMessagesButton;
@property(nonatomic) __weak DefaultApplicationPopUpButton *defaultMailClientPopUp; // @synthesize defaultMailClientPopUp=_defaultMailClientPopUp;
@property(retain, nonatomic) MailboxesChooser *userNotificationMailboxesChooser; // @synthesize userNotificationMailboxesChooser=_userNotificationMailboxesChooser;
@property(retain, nonatomic) MailboxesChooser *dockBadgeMailboxesChooser; // @synthesize dockBadgeMailboxesChooser=_dockBadgeMailboxesChooser;
@property(nonatomic) __weak NSButton *playMailSoundsCheckbox; // @synthesize playMailSoundsCheckbox=_playMailSoundsCheckbox;
@property(nonatomic) __weak SoundPopUpButton *theNewMailSoundPopup; // @synthesize theNewMailSoundPopup=_theNewMailSoundPopup;
@property(nonatomic) __weak NSPopUpButton *fetchFrequencyPopup; // @synthesize fetchFrequencyPopup=_fetchFrequencyPopup;
- (void).cxx_destruct;
- (void)attachmentDeletionPopupChanged:(id)arg1;
- (void)addInvitationsPopupChanged:(id)arg1;
- (void)chooseNewDownloadFolder:(id)arg1;
- (void)userNotificationPopupChanged:(id)arg1;
- (void)dockBadgePopupChanged:(id)arg1;
- (void)playSoundsClicked:(id)arg1;
- (id)titleForSoundFile:(id)arg1;
- (void)newMailSoundDidChange:(id)arg1;
- (void)indexJunkButtonClicked:(id)arg1;
- (void)indexTrashButtonClicked:(id)arg1;
- (void)indexDecryptedMessagesButtonClicked:(id)arg1;
- (void)fetchFrequencyChanged:(id)arg1;
- (void)initializeFromDefaults;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_setupUserNotificationPopup;
- (void)_setupDockCountPopup;
- (void)_addInvitationsBehaviorChanged:(id)arg1;
- (void)_updateAddInvitationsPopup;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

