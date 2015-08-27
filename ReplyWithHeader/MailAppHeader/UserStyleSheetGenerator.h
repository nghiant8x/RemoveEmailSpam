#import <objc/NSObject.h>

@class NSString;

@interface UserStyleSheetGenerator : NSObject
{
    NSString *_styleSheetString;	// 8 = 0x8
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)_generateStyleSheetString;
@property(retain, nonatomic) NSString *userStyleSheetString;
- (void)dealloc;
- (id)init;

@end

