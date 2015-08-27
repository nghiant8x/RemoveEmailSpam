#import <objc/NSObject.h>

#import "MUITokenAddressDelegate-Protocol.h"

@class NSString;

@interface MailAddressDelegate : NSObject <MUITokenAddressDelegate>
{
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)_searchForToken:(id)arg1;
- (void)_removeFromVIPs:(id)arg1;
- (void)_addToVIPs:(id)arg1;
- (void)_openNewMessageForTokenAddress:(id)arg1;
- (BOOL)tokenAddressIsVIP:(id)arg1;
- (void)tokenAddress:(id)arg1 didSelectAction:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

