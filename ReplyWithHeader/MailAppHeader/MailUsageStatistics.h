#import <objc/NSObject.h>

@interface MailUsageStatistics : NSObject
{
}

+ (void)_messageTracePreferences;
+ (void)_messageTraceUILayout;
+ (void)_messageTraceUsage;
+ (void)_messageTraceAccounts;
+ (void)_messageTraceFullScreen:(id)arg1;
+ (void)_startFullScreenMessageTracerTimer;
+ (void)_messageTrace:(id)arg1;
+ (void)startMessageTracing;

@end

