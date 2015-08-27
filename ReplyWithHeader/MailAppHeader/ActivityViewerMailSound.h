#import <objc/NSObject.h>

@interface ActivityViewerMailSound : NSObject
{
    BOOL _fetchWasRequested;	// 8 = 0x8
    BOOL _waitingForServerResponse;	// 9 = 0x9
    BOOL _shouldPlayNoMailSound;	// 10 = 0xa
    unsigned long long _backgroundFetchesInProgress;	// 16 = 0x10
}

@property(nonatomic) unsigned long long backgroundFetchesInProgress; // @synthesize backgroundFetchesInProgress=_backgroundFetchesInProgress;
@property(nonatomic) BOOL shouldPlayNoMailSound; // @synthesize shouldPlayNoMailSound=_shouldPlayNoMailSound;
@property(nonatomic) BOOL waitingForServerResponse; // @synthesize waitingForServerResponse=_waitingForServerResponse;
@property(nonatomic) BOOL fetchWasRequested; // @synthesize fetchWasRequested=_fetchWasRequested;
- (void)_mailFetchComplete;
- (BOOL)_isActivityInteresting:(id)arg1 isStarting:(BOOL)arg2;
- (void)_monitoredActivityEnded:(id)arg1;
- (void)_monitoredActivityStarted:(id)arg1;
- (void)beginFetch:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

