#import <AppKit/NSTextAttachmentCell.h>

@interface LoweredTextAttachmentCell : NSTextAttachmentCell
{
}

- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;

@end

