#import "NSObject-Protocol.h"

@class NSDatePickerCell;

@protocol NSDatePickerCellDelegate <NSObject>

@optional
- (void)datePickerCell:(NSDatePickerCell *)arg1 validateProposedDateValue:(id *)arg2 timeInterval:(double *)arg3;
@end

