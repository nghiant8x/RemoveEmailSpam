#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"
#import "RichMessageListSortViewProtocol-Protocol.h"

@class MailTableView, MessageViewer, NSString, RichMessageListSortView;

@interface MessageListContainerView : NSView <NSAccessibilityGroup, RichMessageListSortViewProtocol>
{
    BOOL _isRichMessageList;	// 152 = 0x98
    MessageViewer *_messageViewer;	// 160 = 0xa0
    MailTableView *_messageListTableView;	// 168 = 0xa8
    RichMessageListSortView *_sortView;	// 176 = 0xb0
}

@property(retain, nonatomic) RichMessageListSortView *sortView; // @synthesize sortView=_sortView;
@property(retain, nonatomic) MailTableView *messageListTableView; // @synthesize messageListTableView=_messageListTableView;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)sortViewDidMouseDown:(id)arg1;
@property(nonatomic) BOOL isRichMessageList; // @synthesize isRichMessageList=_isRichMessageList;
- (void)_updateSortViewVisibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

