#import <Foundation/NSScriptCommand.h>

@interface ExtractNameCommand : NSScriptCommand
{
}

- (id)performDefaultImplementation;
- (id)executeCommand;
- (id)_getAddressDisplayNameForObject:(id)arg1;

@end

