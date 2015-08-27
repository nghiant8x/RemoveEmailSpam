#import "RemoteStoreQuota.h"

@interface EWSQuota : RemoteStoreQuota
{
}

- (void)_updateUsageField;
- (void)engineUpdated:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (Class)engineClass;
- (id)initWithAccount:(id)arg1;

@end

