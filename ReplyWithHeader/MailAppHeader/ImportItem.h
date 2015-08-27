#import <objc/NSObject.h>

@class NSString;

@interface ImportItem : NSObject
{
    BOOL _isEnabled;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    double _progressValue;	// 24 = 0x18
    double _progressStart;	// 32 = 0x20
    NSString *_fullPath;	// 40 = 0x28
    NSString *_relativePath;	// 48 = 0x30
    long long _itemCount;	// 56 = 0x38
    id _identifier;	// 64 = 0x40
    long long _subfolderCount;	// 72 = 0x48
    id _importFields;	// 80 = 0x50
}

@property(retain, nonatomic) id importFields; // @synthesize importFields=_importFields;
@property(nonatomic) long long subfolderCount; // @synthesize subfolderCount=_subfolderCount;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(copy, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(nonatomic) double progressStart; // @synthesize progressStart=_progressStart;
@property(nonatomic) double progressValue; // @synthesize progressValue=_progressValue;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;

@end

