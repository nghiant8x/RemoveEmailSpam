#import <AppKit/NSTextAttachmentCell.h>

@interface HeaderTruncationAttachmentCell : NSTextAttachmentCell
{
    BOOL _truncatesAllRecipients;	// 40 = 0x28
    unsigned long long _truncatedRecipients;	// 48 = 0x30
    double _fontSize;	// 56 = 0x38
}

@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void)_updateTitle;
@property(nonatomic) BOOL truncatesAllRecipients;
@property(nonatomic) unsigned long long truncatedRecipients;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)_textAttributes;
- (id)init;

@end

