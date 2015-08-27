#import "MTMMailbox.h"

@class NSString;

@interface MTMSpecialMailbox : MTMMailbox
{
    BOOL _isObserving;	// 8 = 0x8
}

+ (Class)specialMailboxClassForMailboxType:(long long)arg1;
+ (Class)rootMailboxClass;
@property(nonatomic) BOOL isObserving; // @synthesize isObserving=_isObserving;
- (id)identifier;
@property(readonly, copy, nonatomic) NSString *recoverDisplayName;

@end

