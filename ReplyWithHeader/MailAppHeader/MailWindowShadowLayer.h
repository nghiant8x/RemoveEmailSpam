#import <QuartzCore/CALayer.h>

@interface MailWindowShadowLayer : CALayer
{
    CALayer *_topShadow;	// 24 = 0x18
    CALayer *_bottomShadow;	// 32 = 0x20
    CALayer *_leftShadow;	// 40 = 0x28
    CALayer *_rightShadow;	// 48 = 0x30
    CALayer *_topRightShadow;	// 56 = 0x38
    CALayer *_topLeftShadow;	// 64 = 0x40
    CALayer *_bottomRightShadow;	// 72 = 0x48
    CALayer *_bottomLeftShadow;	// 80 = 0x50
    unsigned long long _shadowType;	// 88 = 0x58
    struct CGSize _animationStartSize;	// 96 = 0x60
    struct CGSize _animationEndSize;	// 112 = 0x70
}

@property(readonly, nonatomic) struct CGSize animationEndSize; // @synthesize animationEndSize=_animationEndSize;
@property(readonly, nonatomic) struct CGSize animationStartSize; // @synthesize animationStartSize=_animationStartSize;
@property(readonly, nonatomic) unsigned long long shadowType; // @synthesize shadowType=_shadowType;
@property(readonly, nonatomic) CALayer *bottomLeftShadow; // @synthesize bottomLeftShadow=_bottomLeftShadow;
@property(readonly, nonatomic) CALayer *bottomRightShadow; // @synthesize bottomRightShadow=_bottomRightShadow;
@property(readonly, nonatomic) CALayer *topLeftShadow; // @synthesize topLeftShadow=_topLeftShadow;
@property(readonly, nonatomic) CALayer *topRightShadow; // @synthesize topRightShadow=_topRightShadow;
@property(readonly, nonatomic) CALayer *rightShadow; // @synthesize rightShadow=_rightShadow;
@property(readonly, nonatomic) CALayer *leftShadow; // @synthesize leftShadow=_leftShadow;
@property(readonly, nonatomic) CALayer *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(readonly, nonatomic) CALayer *topShadow; // @synthesize topShadow=_topShadow;
- (void).cxx_destruct;
- (id)_shadowImageForShadowPart:(unsigned long long)arg1;
- (double)_rightMargin;
- (double)_leftMargin;
- (double)_bottomMargin;
- (double)_topMargin;
- (void)animateShadowByGrowing:(BOOL)arg1;
- (id)initWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2 shadowType:(unsigned long long)arg3;
- (id)init;

@end

