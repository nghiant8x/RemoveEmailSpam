#import "FilesystemEmailImporter.h"

@interface ThunderbirdEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;
+ (id)name;
- (char *)fromString;
- (id)pathExtensions;

@end

