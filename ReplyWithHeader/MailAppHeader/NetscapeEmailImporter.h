#import "FilesystemEmailImporter.h"

@interface NetscapeEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;
+ (id)name;
- (char *)fromString;
- (id)pathExtensions;

@end

