#import "MTMMessage.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MTMIndexedMessage : MTMMessage
{
    NSString *_realPath;	// 16 = 0x10
    BOOL _realPathComputed;	// 24 = 0x18
    NSString *_to;	// 32 = 0x20
    NSMutableDictionary *_computedAdditionalProperties;	// 40 = 0x28
    BOOL _hasCachedChange;	// 48 = 0x30
    BOOL _cachedChange;	// 49 = 0x31
    NSString *_identifier;	// 56 = 0x38
    NSDictionary *_attributes;	// 64 = 0x40
    unsigned long long _messageSize;	// 72 = 0x48
    unsigned long long _messageFlags;	// 80 = 0x50
    unsigned long long _readFlags;	// 88 = 0x58
}

- (unsigned long long)readFlags;
- (unsigned long long)messageFlags;
- (unsigned long long)messageSize;
@property(nonatomic) BOOL cachedChange; // @synthesize cachedChange=_cachedChange;
@property(nonatomic) BOOL hasCachedChange; // @synthesize hasCachedChange=_hasCachedChange;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateAdditionalPropertiesFromComputedProperties;
- (void)computeAdditionalProperties;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)to;
- (id)savedDate;
- (id)subject;
- (id)URL;
- (id)path;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2;

@end

