#import "NSObject-Protocol.h"

@class MCMessage, NSArray;

@protocol IMAPUserAgent <NSObject>
- (BOOL)doParentalControlProcessingForMessage:(MCMessage *)arg1;
- (BOOL)addInvitationsToCalendarAutomatically;
- (void)addInvitationsToCalendarFromMessages:(NSArray *)arg1;
- (NSArray *)headersRequiredForParentalControl;
- (NSArray *)headersRequiredForRouting;
@end

