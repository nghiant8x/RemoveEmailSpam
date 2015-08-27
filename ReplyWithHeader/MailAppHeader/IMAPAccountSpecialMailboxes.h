#import "RemoteStoreAccountSpecialMailboxes.h"

@class NSButton;

@interface IMAPAccountSpecialMailboxes : RemoteStoreAccountSpecialMailboxes
{
    BOOL _moveDeletedMessagesToTrash;	// 8 = 0x8
    NSButton *_trashCheckbox;	// 16 = 0x10
}

@property(nonatomic) __weak NSButton *trashCheckbox; // @synthesize trashCheckbox=_trashCheckbox;
@property(nonatomic) BOOL moveDeletedMessagesToTrash; // @synthesize moveDeletedMessagesToTrash=_moveDeletedMessagesToTrash;
- (void).cxx_destruct;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (id)init;

@end

