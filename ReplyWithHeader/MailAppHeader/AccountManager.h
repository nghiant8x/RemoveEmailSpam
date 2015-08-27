#import <objc/NSObject.h>

@class ActivityViewerMailSound, NSDate, NSOperationQueue, NSTimer, NSUserDefaults;

@interface AccountManager : NSObject
{
    BOOL _automaticFetchingShouldBeDisabled;	// 8 = 0x8
    BOOL _dailyCleanupDisabled;	// 9 = 0x9
    BOOL _missedDailyCleanup;	// 10 = 0xa
    NSOperationQueue *_automaticFetchQueue;	// 16 = 0x10
    NSTimer *_fetchTimer;	// 24 = 0x18
    NSDate *_lastAutomaticFetchDate;	// 32 = 0x20
    ActivityViewerMailSound *_activityViewerMailSound;	// 40 = 0x28
}

+ (id)keyPathsForValuesAffectingFetchFrequency;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL missedDailyCleanup; // @synthesize missedDailyCleanup=_missedDailyCleanup;
@property(nonatomic) BOOL dailyCleanupDisabled; // @synthesize dailyCleanupDisabled=_dailyCleanupDisabled;
@property(readonly, nonatomic) ActivityViewerMailSound *activityViewerMailSound; // @synthesize activityViewerMailSound=_activityViewerMailSound;
@property(retain, nonatomic) NSDate *lastAutomaticFetchDate; // @synthesize lastAutomaticFetchDate=_lastAutomaticFetchDate;
@property(retain, nonatomic) NSTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSOperationQueue *automaticFetchQueue; // @synthesize automaticFetchQueue=_automaticFetchQueue;
@property(nonatomic) BOOL automaticFetchingShouldBeDisabled; // @synthesize automaticFetchingShouldBeDisabled=_automaticFetchingShouldBeDisabled;
- (void).cxx_destruct;
- (void)_webAuthenticationCompleted:(id)arg1;
- (void)_aosAccountMigratedExternally:(id)arg1;
- (void)_mailAccountsChangedExternally:(id)arg1;
- (void)_deliveryAccountsChangedExternally:(id)arg1;
- (void)_performDailyCleanup:(id)arg1;
- (void)enableDailyCleanupAndCleanupIfNecessary;
- (void)disableDailyCleanup;
- (void)_backgroundFetchCompleted:(id)arg1;
- (void)_mailAccountNeedsChecking:(id)arg1;
- (void)_fetchForAllAccountsIsAutomatic:(BOOL)arg1;
- (void)fetchForAccount:(id)arg1 isAutomatic:(BOOL)arg2;
- (void)_automaticFetchDateDidArrive;
- (void)_startSynchronizationForNewAccount:(id)arg1;
- (void)performInitialAccountSynchronization;
- (void)initializeAutomaticFetchingAndPerformInitialFetch;
- (void)_fetchTimerFired:(id)arg1;
- (void)_adjustFetchActivityAndReset:(BOOL)arg1;
- (void)disableAutomaticFetching;
- (void)enableAutomaticFetchingAndFetchIfNecessary;
@property(nonatomic) long long fetchFrequency;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
- (void)dealloc;
- (id)init;

@end

