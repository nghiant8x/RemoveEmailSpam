#import "RichMessageCellBase.h"

@class MUISenderPhotoView, NSAttributedString, NSButton, NSColor, NSImageView, NSLayoutConstraint, NSMutableArray, NSStackView, NSTextField, ThreadDisclosureTextField, _ToCCIndicator;

@interface RichMessageCellView : RichMessageCellBase
{
    NSColor *_textColor;	// 200 = 0xc8
    BOOL _showToCc;	// 208 = 0xd0
    BOOL _showMailbox;	// 209 = 0xd1
    BOOL _showSize;	// 210 = 0xd2
    NSTextField *_senderView;	// 216 = 0xd8
    NSTextField *_subjectView;	// 224 = 0xe0
    NSTextField *_snippetView;	// 232 = 0xe8
    NSTextField *_dateView;	// 240 = 0xf0
    unsigned long long _numberOfSnippetLines;	// 248 = 0xf8
    NSMutableArray *_flagViews;	// 256 = 0x100
    MUISenderPhotoView *_photoView;	// 264 = 0x108
    NSLayoutConstraint *_photoMargin;	// 272 = 0x110
    NSLayoutConstraint *_photoPadding;	// 280 = 0x118
    NSLayoutConstraint *_photoVerticalPosition;	// 288 = 0x120
    _ToCCIndicator *_toCcIndicator;	// 296 = 0x128
    NSLayoutConstraint *_toCcSenderAlignment;	// 304 = 0x130
    NSLayoutConstraint *_toCcSubjectAlignment;	// 312 = 0x138
    NSLayoutConstraint *_toCcSubjectSpacing;	// 320 = 0x140
    ThreadDisclosureTextField *_threadDisclosureControl;	// 328 = 0x148
    NSLayoutConstraint *_threadMargin;	// 336 = 0x150
    NSLayoutConstraint *_threadDatePadding;	// 344 = 0x158
    NSLayoutConstraint *_threadSubjectPadding;	// 352 = 0x160
    NSLayoutConstraint *_threadSizeVerticalPadding;	// 360 = 0x168
    NSLayoutConstraint *_threadSizeHorizontalPadding;	// 368 = 0x170
    NSImageView *_unreadView;	// 376 = 0x178
    NSImageView *_flagStatusView;	// 384 = 0x180
    NSImageView *_attachmentView;	// 392 = 0x188
    NSButton *_replyButton;	// 400 = 0x190
    NSStackView *_statusStack;	// 408 = 0x198
    NSImageView *_statusView;	// 416 = 0x1a0
    NSLayoutConstraint *_statusAlignment;	// 424 = 0x1a8
    NSLayoutConstraint *_statusSenderPadding;	// 432 = 0x1b0
    NSLayoutConstraint *_statusDatePadding;	// 440 = 0x1b8
    NSTextField *_mailboxView;	// 448 = 0x1c0
    NSTextField *_sizeView;	// 456 = 0x1c8
    NSLayoutConstraint *_sizeDateAlignment;	// 464 = 0x1d0
    NSLayoutConstraint *_subjectSizeAlignment;	// 472 = 0x1d8
    NSLayoutConstraint *_subjectSizeHorizontalPadding;	// 480 = 0x1e0
    NSLayoutConstraint *_subjectMailboxAlignment;	// 488 = 0x1e8
    NSLayoutConstraint *_subjectMailboxPadding;	// 496 = 0x1f0
    NSLayoutConstraint *_mailboxThreadPadding;	// 504 = 0x1f8
    NSLayoutConstraint *_mailboxSizePadding;	// 512 = 0x200
    NSLayoutConstraint *_mailboxDateAlignment;	// 520 = 0x208
    NSLayoutConstraint *_threadSnippetPadding;	// 528 = 0x210
}

+ (id)keyPathsForValuesAffectingThreadCount;
+ (id)keyPathsForValuesAffectingIsOpen;
+ (id)keyPathsForValuesAffectingSnippetString;
+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1;
@property(retain, nonatomic) NSLayoutConstraint *threadSnippetPadding; // @synthesize threadSnippetPadding=_threadSnippetPadding;
@property(retain, nonatomic) NSLayoutConstraint *mailboxDateAlignment; // @synthesize mailboxDateAlignment=_mailboxDateAlignment;
@property(retain, nonatomic) NSLayoutConstraint *mailboxSizePadding; // @synthesize mailboxSizePadding=_mailboxSizePadding;
@property(retain, nonatomic) NSLayoutConstraint *mailboxThreadPadding; // @synthesize mailboxThreadPadding=_mailboxThreadPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxPadding; // @synthesize subjectMailboxPadding=_subjectMailboxPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxAlignment; // @synthesize subjectMailboxAlignment=_subjectMailboxAlignment;
@property(retain, nonatomic) NSLayoutConstraint *subjectSizeHorizontalPadding; // @synthesize subjectSizeHorizontalPadding=_subjectSizeHorizontalPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectSizeAlignment; // @synthesize subjectSizeAlignment=_subjectSizeAlignment;
@property(retain, nonatomic) NSLayoutConstraint *sizeDateAlignment; // @synthesize sizeDateAlignment=_sizeDateAlignment;
@property(retain, nonatomic) NSTextField *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSTextField *mailboxView; // @synthesize mailboxView=_mailboxView;
@property(retain, nonatomic) NSLayoutConstraint *statusDatePadding; // @synthesize statusDatePadding=_statusDatePadding;
@property(retain, nonatomic) NSLayoutConstraint *statusSenderPadding; // @synthesize statusSenderPadding=_statusSenderPadding;
@property(retain, nonatomic) NSLayoutConstraint *statusAlignment; // @synthesize statusAlignment=_statusAlignment;
@property(retain, nonatomic) NSImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSStackView *statusStack; // @synthesize statusStack=_statusStack;
@property(retain, nonatomic) NSButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) NSImageView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) NSImageView *flagStatusView; // @synthesize flagStatusView=_flagStatusView;
@property(retain, nonatomic) NSImageView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) NSLayoutConstraint *threadSizeHorizontalPadding; // @synthesize threadSizeHorizontalPadding=_threadSizeHorizontalPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSizeVerticalPadding; // @synthesize threadSizeVerticalPadding=_threadSizeVerticalPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSubjectPadding; // @synthesize threadSubjectPadding=_threadSubjectPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadDatePadding; // @synthesize threadDatePadding=_threadDatePadding;
@property(retain, nonatomic) NSLayoutConstraint *threadMargin; // @synthesize threadMargin=_threadMargin;
@property(retain, nonatomic) ThreadDisclosureTextField *threadDisclosureControl; // @synthesize threadDisclosureControl=_threadDisclosureControl;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectSpacing; // @synthesize toCcSubjectSpacing=_toCcSubjectSpacing;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectAlignment; // @synthesize toCcSubjectAlignment=_toCcSubjectAlignment;
@property(retain, nonatomic) NSLayoutConstraint *toCcSenderAlignment; // @synthesize toCcSenderAlignment=_toCcSenderAlignment;
@property(retain, nonatomic) _ToCCIndicator *toCcIndicator; // @synthesize toCcIndicator=_toCcIndicator;
@property(retain, nonatomic) NSLayoutConstraint *photoVerticalPosition; // @synthesize photoVerticalPosition=_photoVerticalPosition;
@property(retain, nonatomic) NSLayoutConstraint *photoPadding; // @synthesize photoPadding=_photoPadding;
@property(retain, nonatomic) NSLayoutConstraint *photoMargin; // @synthesize photoMargin=_photoMargin;
@property(retain, nonatomic) MUISenderPhotoView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) NSMutableArray *flagViews; // @synthesize flagViews=_flagViews;
@property(nonatomic) __weak NSTextField *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak NSTextField *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak NSTextField *subjectView; // @synthesize subjectView=_subjectView;
@property(nonatomic) __weak NSTextField *senderView; // @synthesize senderView=_senderView;
- (void).cxx_destruct;
- (void)setThreadDisclosureTarget:(id)arg1;
- (void)setThreadDisclosureAction:(SEL)arg1;
- (void)setReplyTarget:(id)arg1;
- (void)setReplyAction:(SEL)arg1;
- (void)_updateFlags;
- (id)_anchorViewForNewFlag:(double *)arg1;
- (void)_updatePhotoView;
- (void)_updateToCCIndicator;
- (void)_updateThreadControl;
- (void)_updateSizeLabel;
- (void)_updateMailboxLabel;
- (void)_updateReplyButton;
- (void)_updateAttachmentView;
- (void)_updateUnreadIndicator;
- (void)_updateStatusView;
- (void)prepareForReuse;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) unsigned long long threadCount;
@property(readonly, nonatomic) BOOL isOpen;
@property(readonly, nonatomic) NSAttributedString *snippetString;
@property(nonatomic) BOOL showSize; // @synthesize showSize=_showSize;
@property(nonatomic) BOOL showMailbox; // @synthesize showMailbox=_showMailbox;
@property(nonatomic) BOOL showToCc; // @synthesize showToCc=_showToCc;
- (BOOL)isHighlighted;
- (BOOL)isValidMessageDoubleClick:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_richTableCellViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

