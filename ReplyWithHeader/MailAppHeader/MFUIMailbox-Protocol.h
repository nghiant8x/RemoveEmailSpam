#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class MFMailAccount, NSArray, NSString;

@protocol MFUIMailbox <NSCopying, NSObject>
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property int type;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (BOOL)isPlaceholder;
- (NSString *)accountURLString;
- (MFMailAccount *)account;
- (BOOL)isSmartMailbox;
- (BOOL)isStore;
- (NSArray *)children;
- (BOOL)hasChildren;
- (unsigned long long)numberOfChildren;
- (unsigned long long)displayCount;
- (BOOL)isContainer;
- (NSString *)extendedDisplayName;
- (NSString *)displayName;
- (NSString *)persistentIdentifier;
@end

