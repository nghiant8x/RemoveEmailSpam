#import <AppKit/NSButton.h>

#import "NSAnimationDelegate-Protocol.h"

@class NSImageView, NSString, NSViewAnimation;

@interface MailAnimatingButton : NSButton <NSAnimationDelegate>
{
    NSViewAnimation *_animation;	// 176 = 0xb0
    NSImageView *_backImageView;	// 184 = 0xb8
    NSImageView *_frontImageView;	// 192 = 0xc0
}

@property(readonly, nonatomic) NSImageView *frontImageView; // @synthesize frontImageView=_frontImageView;
@property(readonly, nonatomic) NSImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSViewAnimation *animation; // @synthesize animation=_animation;
- (void).cxx_destruct;
- (void)_animationDidEnd;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)setImage:(id)arg1 animates:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

