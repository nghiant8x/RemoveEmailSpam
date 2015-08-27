#import <AppKit/NSView.h>

@class NSLevelIndicator;

@interface QuotaBar : NSView
{
    NSLevelIndicator *_levelIndicator;	// 152 = 0x98
}

@property(readonly, nonatomic) NSLevelIndicator *levelIndicator; // @synthesize levelIndicator=_levelIndicator;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setQuotaUsed:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_labelFont;

@end

