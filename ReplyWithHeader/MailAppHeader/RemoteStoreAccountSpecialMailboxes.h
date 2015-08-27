#import "SpecialMailboxes.h"

@class NSButton;

@interface RemoteStoreAccountSpecialMailboxes : SpecialMailboxes
{
    NSButton *_keepDraftsOnServer;	// 8 = 0x8
    NSButton *_keepSentMessagesOnServer;	// 16 = 0x10
    NSButton *_keepTrashOnServer;	// 24 = 0x18
    NSButton *_keepJunkOnServer;	// 32 = 0x20
}

@property(nonatomic) __weak NSButton *keepJunkOnServer; // @synthesize keepJunkOnServer=_keepJunkOnServer;
@property(nonatomic) __weak NSButton *keepTrashOnServer; // @synthesize keepTrashOnServer=_keepTrashOnServer;
@property(nonatomic) __weak NSButton *keepSentMessagesOnServer; // @synthesize keepSentMessagesOnServer=_keepSentMessagesOnServer;
@property(nonatomic) __weak NSButton *keepDraftsOnServer; // @synthesize keepDraftsOnServer=_keepDraftsOnServer;
- (void).cxx_destruct;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;

@end

