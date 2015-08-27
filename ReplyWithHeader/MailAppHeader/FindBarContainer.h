#import <AppKit/NSView.h>

#import "NSTextFinderBarContainer-Protocol.h"

@class NSString;

@interface FindBarContainer : NSView <NSTextFinderBarContainer>
{
    NSView *_findBarView;	// 152 = 0x98
    BOOL _findBarVisible;	// 160 = 0xa0
    NSView *_containerView;	// 168 = 0xa8
}

@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)_layoutSubviews;
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (id)contentView;
- (void)findBarViewDidChangeHeight;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

