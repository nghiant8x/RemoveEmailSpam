#import <MailUI/MUICollectionCellView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class CALayer, MessageWebDocumentView, NSScrollView, NSString;

@interface MessageView : MUICollectionCellView <NSAccessibilityGroup>
{
    NSScrollView *_bodyScrollView;	// 152 = 0x98
    MessageWebDocumentView *_webDocumentView;	// 160 = 0xa0
    CALayer *_borderLayer;	// 168 = 0xa8
    CALayer *_shadowLayer;	// 176 = 0xb0
}

@property(nonatomic) __weak CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) __weak CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSScrollView *bodyScrollView; // @synthesize bodyScrollView=_bodyScrollView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didScrollInScrollView:(id)arg2;
- (BOOL)_isSelected;
- (id)_borderColor;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)updateLayer;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)_createShadowLayer;
- (id)_createBorderLayer;
- (id)makeBackingLayer;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)setFocused:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (void)setCellIndex:(unsigned long long)arg1;
- (BOOL)wantsUpdateLayer;
- (BOOL)isFlipped;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

