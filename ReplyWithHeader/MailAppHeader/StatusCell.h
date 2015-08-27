#import <AppKit/NSImageTextFieldCell.h>

@interface StatusCell : NSImageTextFieldCell
{
    long long _statusType;	// 104 = 0x68
}

@property(nonatomic) long long statusType; // @synthesize statusType=_statusType;
- (id)accessibilityRoleDescription;
- (id)accessibilityValue;

@end

