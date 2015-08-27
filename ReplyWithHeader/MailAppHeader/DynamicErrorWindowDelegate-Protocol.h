#import "NSObject-Protocol.h"

@class NSString;

@protocol DynamicErrorWindowDelegate <NSObject>
- (long long)helpTopicForDiagnosis:(long long)arg1;
- (void)rightActionSelectedWithDiagnosis:(long long)arg1;
- (void)leftActionSelectedWithDiagnosis:(long long)arg1;
- (NSString *)rightButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)leftButtonTextForErrorDiagnosis:(long long)arg1;
- (NSString *)errorDescriptionForErrorDiagnosis:(long long)arg1;
- (NSString *)errorMessageForErrorDiagnosis:(long long)arg1;
- (BOOL)displayIndeterminateProgress;
@end

