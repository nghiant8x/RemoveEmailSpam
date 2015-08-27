#import "NSObject-Protocol.h"

@class NSUserNotification, NSUserNotificationCenter;

@protocol NSUserNotificationCenterDelegate <NSObject>

@optional
- (BOOL)userNotificationCenter:(NSUserNotificationCenter *)arg1 shouldPresentNotification:(NSUserNotification *)arg2;
- (void)userNotificationCenter:(NSUserNotificationCenter *)arg1 didActivateNotification:(NSUserNotification *)arg2;
- (void)userNotificationCenter:(NSUserNotificationCenter *)arg1 didDeliverNotification:(NSUserNotification *)arg2;
@end

