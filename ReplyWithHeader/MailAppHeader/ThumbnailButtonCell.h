#import <AppKit/NSButtonCell.h>

@class NSButton;

@interface ThumbnailButtonCell : NSButtonCell
{
    NSButton *_deleteButton;	// 120 = 0x78
    long long _trackingRectTag;	// 128 = 0x80
}

@property(nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (unsigned long long)focusRingType;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)_textColor;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)dealloc;

@end

