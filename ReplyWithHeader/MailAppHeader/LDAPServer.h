#import <objc/NSObject.h>

@interface LDAPServer : NSObject
{
}

- (void)setScope:(unsigned int)arg1;
- (unsigned int)scope;
- (void)setPort:(id)arg1;
- (id)port;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEntryName:(id)arg1;
- (id)entryName;
- (void)setSearchBase:(id)arg1;
- (id)searchBase;
- (void)setServerAddress:(id)arg1;
- (id)serverAddress;
- (id)objectSpecifier;

@end

