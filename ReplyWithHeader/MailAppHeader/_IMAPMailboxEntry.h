#import <objc/NSObject.h>

@class IMAPMailboxes, MFMailbox, NSArray, NSString;

@interface _IMAPMailboxEntry : NSObject
{
    NSArray *_filteredChildren;	// 8 = 0x8
    BOOL _subscribed;	// 16 = 0x10
    BOOL _isNoSelect;	// 17 = 0x11
    BOOL _hasEnabledDescendants;	// 18 = 0x12
    NSString *_name;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSArray *_children;	// 40 = 0x28
    MFMailbox *_mailbox;	// 48 = 0x30
    _IMAPMailboxEntry *_parent;	// 56 = 0x38
    IMAPMailboxes *_controller;	// 64 = 0x40
}

@property(nonatomic) __weak IMAPMailboxes *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) _IMAPMailboxEntry *parent; // @synthesize parent=_parent;
@property(nonatomic) BOOL hasEnabledDescendants; // @synthesize hasEnabledDescendants=_hasEnabledDescendants;
@property(nonatomic) BOOL isNoSelect; // @synthesize isNoSelect=_isNoSelect;
@property(retain, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) BOOL subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isValidForCurrentFilter;
- (BOOL)isPathValidForCurrentFilter;
@property(copy, nonatomic) NSArray *filteredChildren;
- (long long)compare:(id)arg1;

@end

