#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;
@protocol OS_dispatch_source;

@interface PowerManager : NSObject
{
    struct __CFRunLoopSource *_powerSourceRunLoopSource;	// 8 = 0x8
    NSBackgroundActivityScheduler *_applicationRefreshActivity;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_fetchCheckPointTimer;	// 24 = 0x18
    CDUnknownBlockType _applicationRefreshCompletionHandler;	// 32 = 0x20
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy) CDUnknownBlockType applicationRefreshCompletionHandler; // @synthesize applicationRefreshCompletionHandler=_applicationRefreshCompletionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *fetchCheckPointTimer; // @synthesize fetchCheckPointTimer=_fetchCheckPointTimer;
@property(readonly, nonatomic) NSBackgroundActivityScheduler *applicationRefreshActivity; // @synthesize applicationRefreshActivity=_applicationRefreshActivity;
- (void).cxx_destruct;
- (void)_applicationRefreshDidEnd;
- (CDUnknownBlockType)_applicationRefreshShouldBegin;
- (void)_systemDidWake:(id)arg1;
- (void)_systemWillSleep:(id)arg1;
- (void)registerForPowerEvents;
- (void)dealloc;
- (id)init;

@end

