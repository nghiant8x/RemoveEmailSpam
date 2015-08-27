#import <AppKit/NSViewController.h>

#import "HeaderLayoutManagerDelegate-Protocol.h"
#import "MUIActionContactDataProvider-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"
#import "NSTokenAttachmentDelegate-Protocol.h"

@class ConversationMember, HeaderTextContainer, HeaderTruncationAttachmentCell, MUISenderPhotoView, NSButton, NSLayoutConstraint, NSMutableDictionary, NSString, NSTextAttachment, NSTextField, NSTextView, NSView;

@interface HeaderViewController : NSViewController <HeaderLayoutManagerDelegate, NSTextViewDelegate, NSTokenAttachmentDelegate, MUIActionContactDataProvider, NSDraggingSource, NSMenuDelegate>
{
    NSMutableDictionary *_displayStringsByHeaderKey;	// 104 = 0x68
    NSTextField *_dateView;	// 112 = 0x70
    NSTextField *_mailboxView;	// 120 = 0x78
    NSButton *_detailsLink;	// 128 = 0x80
    BOOL _expandRecipients;	// 136 = 0x88
    BOOL _showVIPButton;	// 137 = 0x89
    BOOL _alwaysShowMailboxName;	// 138 = 0x8a
    BOOL _showingAllHeaders;	// 139 = 0x8b
    NSView *_dividerView;	// 144 = 0x90
    NSButton *_unreadVIPButton;	// 152 = 0x98
    MUISenderPhotoView *_senderImageView;	// 160 = 0xa0
    HeaderTextContainer *_textContainer;	// 168 = 0xa8
    NSTextView *_textView;	// 176 = 0xb0
    HeaderTruncationAttachmentCell *_truncationCell;	// 184 = 0xb8
    NSTextAttachment *_flagTextAttachment;	// 192 = 0xc0
    NSTextAttachment *_attachmentTextAttachment;	// 200 = 0xc8
    NSLayoutConstraint *_dateViewTopOffset;	// 208 = 0xd0
}

+ (id)_mailboxIconString;
+ (BOOL)automaticallyNotifiesObserversOfShowingAllHeaders;
@property(retain, nonatomic) NSLayoutConstraint *dateViewTopOffset; // @synthesize dateViewTopOffset=_dateViewTopOffset;
@property(readonly, nonatomic) NSTextAttachment *attachmentTextAttachment; // @synthesize attachmentTextAttachment=_attachmentTextAttachment;
@property(readonly, nonatomic) NSTextAttachment *flagTextAttachment; // @synthesize flagTextAttachment=_flagTextAttachment;
@property(retain, nonatomic) HeaderTruncationAttachmentCell *truncationCell; // @synthesize truncationCell=_truncationCell;
@property(nonatomic) __weak NSView *dividerView; // @synthesize dividerView=_dividerView;
- (void).cxx_destruct;
- (id)_displayStringForTruncationCell;
- (void)viewerPreferencesChanged:(id)arg1;
- (void)toggleVIP:(id)arg1;
- (void)showSignerCertificate:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)menuForTokenAttachment:(id)arg1;
- (BOOL)hasMenuForTokenAttachment:(id)arg1;
- (BOOL)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
- (id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (id)layoutManager:(id)arg1 shouldUseSelectedTextAttributes:(id)arg2 atCharacterIndex:(unsigned long long)arg3 effectiveRange:(struct _NSRange *)arg4;
- (void)layoutManager:(id)arg1 textContainerChangedGeometry:(id)arg2;
- (void)_insertAddressesInRange:(struct _NSRange)arg1 toLines:(unsigned long long)arg2 startingWithTruncatedItems:(id)arg3;
- (void)_truncateAddressesInRange:(struct _NSRange)arg1 toLines:(unsigned long long)arg2 startingWithTruncatedItems:(id)arg3;
- (void)_layoutTextStorageIfNeeded;
- (void)_updateUnreadVIPButton;
- (void)_updateTextStorageWithHardInvalidation:(BOOL)arg1;
- (BOOL)_shouldShowMailboxName;
- (void)_updateMailboxView;
- (id)emailAddressForPhotoView:(id)arg1;
- (id)fullNameForPhotoView:(id)arg1;
- (id)actionContactForPhotoView:(id)arg1;
- (void)_updateSenderImageView;
- (void)_updateDateView;
- (void)_dateInvalidated:(id)arg1;
- (id)_fullDateFormatter;
- (void)_updateFlagTextAttachment;
- (void)_updateAttachmentTextAttachment;
- (void)_setImage:(id)arg1 forTextAttachmentCell:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterKVOForRepresentedObject:(id)arg1;
- (void)_registerKVOForRepresentedObject:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)_messageViewer;
- (void)_installConstraints;
- (void)viewDidLoad;
@property(retain) ConversationMember *representedObject;
- (void)_setShowingAllHeaders:(BOOL)arg1 andUpdateTextStorage:(BOOL)arg2;
@property(nonatomic) BOOL showingAllHeaders; // @synthesize showingAllHeaders=_showingAllHeaders;
@property(nonatomic) BOOL alwaysShowMailboxName; // @synthesize alwaysShowMailboxName=_alwaysShowMailboxName;
@property(nonatomic) BOOL showVIPButton; // @synthesize showVIPButton=_showVIPButton;
@property(nonatomic) BOOL expandRecipients; // @synthesize expandRecipients=_expandRecipients;
- (void)_hideDetailsClicked:(id)arg1;
@property(readonly, nonatomic) NSButton *detailsLink;
@property(readonly, nonatomic) NSTextField *mailboxView;
@property(readonly, nonatomic) NSTextField *dateView;
@property(readonly, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) HeaderTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly, nonatomic) NSButton *unreadVIPButton; // @synthesize unreadVIPButton=_unreadVIPButton;
@property(readonly, nonatomic) MUISenderPhotoView *senderImageView; // @synthesize senderImageView=_senderImageView;
- (void)dealloc;
- (void)_headerViewControllerCommonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

