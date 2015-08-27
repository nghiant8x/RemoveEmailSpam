#import "FilesystemEmailImporter.h"

@interface MboxEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;
+ (id)name;
- (char *)fromString;
- (id)prepareForImport;

@end

