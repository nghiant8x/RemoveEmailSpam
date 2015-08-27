#import <objc/NSObject.h>

@class MailSplitView, MessageViewer, NSView;

@interface MailboxesSplitViewController : NSObject
{
    BOOL _isAnimating;	// 8 = 0x8
    double _lastUserSelectedPosition;	// 16 = 0x10
    NSView *_mailboxesContainer;	// 24 = 0x18
    MailSplitView *_mailboxesSplitView;	// 32 = 0x20
    MessageViewer *_messageViewer;	// 40 = 0x28
}

@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(nonatomic) __weak MailSplitView *mailboxesSplitView; // @synthesize mailboxesSplitView=_mailboxesSplitView;
@property(nonatomic) __weak NSView *mailboxesContainer; // @synthesize mailboxesContainer=_mailboxesContainer;
@property(nonatomic) double lastUserSelectedPosition; // @synthesize lastUserSelectedPosition=_lastUserSelectedPosition;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)openMailboxesPaneToWidth:(double)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)_maxSplitPosition:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;

@end

