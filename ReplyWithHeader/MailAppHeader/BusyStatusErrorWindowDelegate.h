#import <objc/NSObject.h>

#import "DynamicErrorWindowDelegate-Protocol.h"

@class MFDatabaseRecoverer, NSString;

@interface BusyStatusErrorWindowDelegate : NSObject <DynamicErrorWindowDelegate>
{
    MFDatabaseRecoverer *_recoverer;	// 8 = 0x8
}

@property(nonatomic) __weak MFDatabaseRecoverer *recoverer; // @synthesize recoverer=_recoverer;
- (void).cxx_destruct;
- (id)_capitalizedStringForDatabase;
- (id)_stringForDatabase;
- (long long)helpTopicForDiagnosis:(long long)arg1;
- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (id)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (id)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (id)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (id)errorMessageForErrorDiagnosis:(long long)arg1;
- (BOOL)displayIndeterminateProgress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

