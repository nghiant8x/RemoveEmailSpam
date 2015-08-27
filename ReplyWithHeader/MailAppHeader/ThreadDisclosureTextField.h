#import <AppKit/NSTextField.h>

@class NSTrackingArea;

@interface ThreadDisclosureTextField : NSTextField
{
    BOOL _hovering;	// 200 = 0xc8
    NSTrackingArea *_trackingArea;	// 208 = 0xd0
}

@property(nonatomic) BOOL hovering; // @synthesize hovering=_hovering;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void).cxx_destruct;
@property(nonatomic) BOOL isOpen;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)_threadDisclosureTextFieldCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

