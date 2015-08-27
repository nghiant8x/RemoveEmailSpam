#import <objc/NSObject.h>

@class MCAuthScheme;

@interface AuthSchemeBindingProxy : NSObject
{
    BOOL _isSeparator;	// 8 = 0x8
    MCAuthScheme *_authScheme;	// 16 = 0x10
}

+ (id)separatorProxy;
+ (id)noneProxy;
@property(nonatomic) BOOL isSeparator; // @synthesize isSeparator=_isSeparator;
@property(retain, nonatomic) MCAuthScheme *authScheme; // @synthesize authScheme=_authScheme;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)humanReadableName;
- (id)initWithAuthScheme:(id)arg1;
- (id)init;

@end

