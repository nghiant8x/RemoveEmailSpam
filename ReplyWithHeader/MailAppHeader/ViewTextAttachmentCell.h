#import <AppKit/NSViewTextAttachmentCell.h>

@class NSView;

@interface ViewTextAttachmentCell : NSViewTextAttachmentCell
{
    NSView *_view;	// 40 = 0x28
    NSView *_containingView;	// 48 = 0x30
    struct CGSize _viewSize;	// 56 = 0x38
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) __weak NSView *containingView; // @synthesize containingView=_containingView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseView:(id)arg1;
- (struct CGSize)cellSize;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)view;
- (void)setControlView:(id)arg1;
- (id)controlView;
- (id)initWithView:(id)arg1;
- (void)_viewFrameChanged:(id)arg1;
- (void)_viewFrameChanged;

@end

