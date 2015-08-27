#import <objc/NSObject.h>

#import "MFUIMailbox-Protocol.h"

@class NSString;

@interface _MailboxPlaceholder : NSObject <MFUIMailbox>
{
    BOOL _isContainer;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSString *_persistentIdentifier;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_accountURLString;	// 32 = 0x20
}

@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (void).cxx_destruct;
- (id)extendedDisplayName;
- (unsigned long long)displayCount;
@property(readonly, copy) NSString *description;
- (BOOL)isPlaceholder;
@property(readonly) BOOL isVisibleFlaggedMailbox;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
- (id)children;
- (unsigned long long)numberOfChildren;
- (BOOL)hasChildren;
- (BOOL)isStore;
- (BOOL)isSmartMailbox;
- (id)account;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentIdentifier:(id)arg1 name:(id)arg2 accountURLString:(id)arg3 type:(int)arg4 isContainer:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

