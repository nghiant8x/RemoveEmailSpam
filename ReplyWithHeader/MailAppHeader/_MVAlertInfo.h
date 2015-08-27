#import <objc/NSObject.h>

@class MCError, NSString;

@interface _MVAlertInfo : NSObject
{
    MCError *_error;	// 8 = 0x8
    NSString *_firstButtonTitle;	// 16 = 0x10
    NSString *_secondButtonTitle;	// 24 = 0x18
    NSString *_thirdButtonTitle;	// 32 = 0x20
    long long _returnCode;	// 40 = 0x28
}

@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(nonatomic) __weak NSString *thirdButtonTitle; // @synthesize thirdButtonTitle=_thirdButtonTitle;
@property(nonatomic) __weak NSString *secondButtonTitle; // @synthesize secondButtonTitle=_secondButtonTitle;
@property(nonatomic) __weak NSString *firstButtonTitle; // @synthesize firstButtonTitle=_firstButtonTitle;
@property(nonatomic) __weak MCError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

