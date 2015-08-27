#import <objc/NSObject.h>

@class NSString;

@interface FavoriteButtonMailboxProperties : NSObject
{
    BOOL _isContainer;	// 8 = 0x8
    BOOL _isPreferredSelection;	// 9 = 0x9
    int _type;	// 12 = 0xc
    NSString *_persistentIdentifier;	// 16 = 0x10
    NSString *_selectedSubMailboxPersistentIdentifier;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_accountURLString;	// 40 = 0x28
}

@property(nonatomic) BOOL isPreferredSelection; // @synthesize isPreferredSelection=_isPreferredSelection;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *selectedSubMailboxPersistentIdentifier; // @synthesize selectedSubMailboxPersistentIdentifier=_selectedSubMailboxPersistentIdentifier;
@property(retain, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPersistentIdentifier:(id)arg1 selectedSubMailboxPersistentIdentifier:(id)arg2 displayName:(id)arg3 accountURLString:(id)arg4 type:(int)arg5 isContainer:(BOOL)arg6 isPreferredSelection:(BOOL)arg7;

@end

