#import <AppKit/NSTextView.h>

@protocol NSTextAttachmentCell;

@interface HeaderTextView : NSTextView
{
    id <NSTextAttachmentCell> _attachmentCell;	// 160 = 0xa0
    struct CGSize _contentSize;	// 168 = 0xa8
    struct CGRect _attachmentCellRect;	// 184 = 0xb8
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect attachmentCellRect; // @synthesize attachmentCellRect=_attachmentCellRect;
@property(retain, nonatomic) id <NSTextAttachmentCell> attachmentCell; // @synthesize attachmentCell=_attachmentCell;
- (void).cxx_destruct;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)_selectedAttributedString;
- (id)writablePasteboardTypes;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)_attachmentCellForCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)_glyphIndexForPoint:(struct CGPoint)arg1 glyphRect:(struct CGRect *)arg2;
- (void)resetCursorRects;
- (struct CGSize)intrinsicContentSize;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)autoscroll:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeKeyView;

@end

