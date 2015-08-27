#import <objc/NSObject.h>

#import "NSSplitViewDelegate-Protocol.h"

@class MailSplitView, MailTableView, MessageViewer, NSString, NSView;

@interface ContentSplitViewController : NSObject <NSSplitViewDelegate>
{
    BOOL _previewPaneIsVisible;	// 8 = 0x8
    BOOL _keepCurrentRowVisible;	// 9 = 0x9
    MessageViewer *_messageViewer;	// 16 = 0x10
    MailTableView *_messageList;	// 24 = 0x18
    MailSplitView *_contentSplitView;	// 32 = 0x20
    NSView *_messageListPane;	// 40 = 0x28
    NSView *_previewPane;	// 48 = 0x30
}

@property(nonatomic) BOOL keepCurrentRowVisible; // @synthesize keepCurrentRowVisible=_keepCurrentRowVisible;
@property(nonatomic) __weak NSView *previewPane; // @synthesize previewPane=_previewPane;
@property(nonatomic) __weak NSView *messageListPane; // @synthesize messageListPane=_messageListPane;
@property(nonatomic) __weak MailSplitView *contentSplitView; // @synthesize contentSplitView=_contentSplitView;
@property(nonatomic) __weak MailTableView *messageList; // @synthesize messageList=_messageList;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
- (void).cxx_destruct;
- (void)updateDividerStyle;
@property(readonly, nonatomic) struct CGSize minimumPreviewPaneSize;
@property(readonly, nonatomic) struct CGSize minimumMessageListSize;
- (void)_splitView:(id)arg1 verticallyResizeSubviewsWithNewSize:(struct CGSize)arg2 messageListRect:(struct CGRect *)arg3 previewPaneRect:(struct CGRect *)arg4;
- (void)_splitView:(id)arg1 horizontallyResizeSubviewsWithNewSize:(struct CGSize)arg2 messageListRect:(struct CGRect *)arg3 previewPaneRect:(struct CGRect *)arg4;
- (void)frameRectsWithNewSize:(struct CGSize)arg1 messageListRect:(struct CGRect *)arg2 previewPaneRect:(struct CGRect *)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
@property(nonatomic) BOOL previewPaneIsVisible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

