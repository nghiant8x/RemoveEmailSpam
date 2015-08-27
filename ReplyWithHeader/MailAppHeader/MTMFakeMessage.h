#import "MTMMessage.h"

@class NSDictionary;

@interface MTMFakeMessage : MTMMessage
{
    NSDictionary *_messageDescription;	// 16 = 0x10
}

- (void).cxx_destruct;
- (unsigned long long)readFlags;
- (unsigned long long)messageFlags;
- (id)valueForKey:(id)arg1;
- (id)initWithDescription:(id)arg1;

@end

