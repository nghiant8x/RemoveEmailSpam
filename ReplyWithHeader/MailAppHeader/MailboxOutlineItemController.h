#import <objc/NSObject.h>

#import "MailboxOutlineItemViewDelegate-Protocol.h"
#import "MailboxTextFieldDelegate-Protocol.h"

@class MailboxOutlineItemView, NSString;
@protocol MailboxOutlineItemControllerDelegate;

@interface MailboxOutlineItemController : NSObject <MailboxTextFieldDelegate, MailboxOutlineItemViewDelegate>
{
    MailboxOutlineItemView *_view;	// 8 = 0x8
    id _item;	// 16 = 0x10
    NSObject<MailboxOutlineItemControllerDelegate> *_delegate;	// 24 = 0x18
}

@property __weak NSObject<MailboxOutlineItemControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mailboxOutlineItemViewShouldDisplayImage:(id)arg1;
- (void)mailboxTextFieldEndedEditingSession;
- (void)mailboxTextFieldBeganEditingSession;
- (long long)_alertState;
- (void)updateAlertState;
- (BOOL)_shouldShowBadge;
- (BOOL)_isEditing;
- (void)_updateBadgeAnimated:(BOOL)arg1;
- (void)_updateImage;
- (unsigned long long)_iconStyle;
- (unsigned long long)_iconSize;
- (void)_updateValuesForBasicSection;
- (void)_updateValuesForAccount;
- (void)_updateValuesForMailbox;
- (void)updateBadgeCountAnimated:(BOOL)arg1;
- (void)updateAllValues;
- (id)_sectionDisplayName;
- (id)_account;
- (id)_mailbox;
@property __weak id item;
- (void)_connectView:(id)arg1;
- (void)_disconnectView:(id)arg1;
@property __weak MailboxOutlineItemView *view;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

