#import "MessageListCell.h"

@interface RolloverButtonCell : MessageListCell
{
    id _target;	// 64 = 0x40
    SEL _action;	// 72 = 0x48
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_mf_shouldSendAction;
- (BOOL)_sendActionFrom:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;

@end

