#import "MTMMessage.h"

@class NSDate, NSString;

@interface MTMDiskMessage : MTMMessage
{
    BOOL _hasCachedChange;	// 16 = 0x10
    BOOL _cachedChange;	// 17 = 0x11
    id _identifier;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_subject;	// 40 = 0x28
    NSDate *_sentDate;	// 48 = 0x30
    NSDate *_receivedDate;	// 56 = 0x38
    NSDate *_lastViewedDate;	// 64 = 0x40
    NSString *_author;	// 72 = 0x48
    NSString *_to;	// 80 = 0x50
    unsigned long long _messageSize;	// 88 = 0x58
    unsigned long long _messageFlags;	// 96 = 0x60
    unsigned long long _readFlags;	// 104 = 0x68
}

@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
- (unsigned long long)readFlags;
- (unsigned long long)messageFlags;
- (unsigned long long)messageSize;
- (id)to;
- (id)author;
- (id)lastViewedDate;
- (id)receivedDate;
- (id)sentDate;
- (id)subject;
- (id)path;
- (id)identifier;
- (void).cxx_destruct;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)URL;
- (id)identifierForURL;
- (id)initWithPath:(id)arg1;

@end

