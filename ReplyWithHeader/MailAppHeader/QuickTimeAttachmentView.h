#import <QTKit/QTMovieView.h>

@class MFAttachmentViewController;

@interface QuickTimeAttachmentView : QTMovieView
{
    MFAttachmentViewController *_attachmentViewController;	// 240 = 0xf0
}

+ (id)viewForAttachmentViewController:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak MFAttachmentViewController *attachmentViewController; // @synthesize attachmentViewController=_attachmentViewController;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)shouldDisplayInline;
- (id)menuForEvent:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (struct CGSize)desiredSizeWithMaximumWidth:(double)arg1;
- (struct CGSize)_naturalSize;
- (BOOL)performKeyEquivalent:(id)arg1;

@end

