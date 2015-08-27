#import <objc/NSObject.h>

#import "DynamicErrorWindowDelegate-Protocol.h"

@class NSString;

@interface IOErrorWindowDelegate : NSObject <DynamicErrorWindowDelegate>
{
}

- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (long long)helpTopicForDiagnosis:(long long)arg1;
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

