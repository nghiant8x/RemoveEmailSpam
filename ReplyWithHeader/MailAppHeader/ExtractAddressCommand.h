#import <Foundation/NSScriptCommand.h>

@interface ExtractAddressCommand : NSScriptCommand
{
}

- (id)performDefaultImplementation;
- (id)executeCommand;
- (id)_getRawAddressForObject:(id)arg1;

@end

