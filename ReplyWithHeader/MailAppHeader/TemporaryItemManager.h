#import <objc/NSObject.h>

#import "NSFileManagerDelegate-Protocol.h"

@class NSString, NSTimer;

@interface TemporaryItemManager : NSObject <NSFileManagerDelegate>
{
    NSString *_path;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
}

+ (id)temporaryItemManagerWithRelativePath:(id)arg1 cleanupInterval:(double)arg2;
+ (void)cleanupAllItems;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)cleanUpDirectory;
- (void)setExpirationDate:(id)arg1;
- (void)_setUpTimer:(id)arg1;
- (id)expirationDate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

