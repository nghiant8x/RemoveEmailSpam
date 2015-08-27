#import <AppKit/NSViewController.h>

#import "NSMenuDelegate-Protocol.h"

@class BannerContainerViewController, ConversationMember, HeaderViewController, MessageView, MessageWebDocumentView, NSLayoutConstraint, NSPopUpButton, NSScrollView, NSString, NSTrackingArea, NSView;

@interface MessageViewController : NSViewController <NSMenuDelegate>
{
    BannerContainerViewController *_bannerViewController;	// 104 = 0x68
    HeaderViewController *_headerViewController;	// 112 = 0x70
    NSView *_actionButtons;	// 120 = 0x78
    NSView *_headerView;	// 128 = 0x80
    NSScrollView *_bodyScrollView;	// 136 = 0x88
    MessageWebDocumentView *_webDocumentView;	// 144 = 0x90
    NSTrackingArea *_rolloverTrackingArea;	// 152 = 0x98
    NSLayoutConstraint *_forwardButtonOffset;	// 160 = 0xa0
    NSPopUpButton *_attachmentsButton;	// 168 = 0xa8
    NSView *_attachmentsDivider;	// 176 = 0xb0
}

+ (id)keyPathsForValuesAffectingAlwaysShowMailboxName;
+ (id)keyPathsForValuesAffectingLoaded;
+ (id)keyPathsForValuesAffectingPageZoom;
@property(nonatomic) __weak NSView *attachmentsDivider; // @synthesize attachmentsDivider=_attachmentsDivider;
@property(nonatomic) __weak NSPopUpButton *attachmentsButton; // @synthesize attachmentsButton=_attachmentsButton;
@property(retain, nonatomic) NSLayoutConstraint *forwardButtonOffset; // @synthesize forwardButtonOffset=_forwardButtonOffset;
@property(retain, nonatomic) NSTrackingArea *rolloverTrackingArea; // @synthesize rolloverTrackingArea=_rolloverTrackingArea;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) NSScrollView *bodyScrollView; // @synthesize bodyScrollView=_bodyScrollView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSView *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) HeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) BannerContainerViewController *bannerViewController; // @synthesize bannerViewController=_bannerViewController;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (void)exportAttachments:(id)arg1;
- (void)quickLookAllAttachments:(id)arg1;
- (void)saveAllAttachmentsWithoutPrompting:(id)arg1;
- (void)saveAllAttachments:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)viewSource:(id)arg1;
- (void)showMessageInMailbox:(id)arg1;
- (void)toggleAllHeaders:(id)arg1;
- (void)forward:(id)arg1;
- (void)replyAll:(id)arg1;
- (void)reply:(id)arg1;
- (void)delete:(id)arg1;
- (id)_messageViewer;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateHeaderMouseOver;
- (void)_updateAttachmentRollover;
- (void)_updateRolloverTrackingArea:(id)arg1;
- (void)_showLoadingProgress;
- (void)_updateWebDocumentView;
- (void)cursorUpdate:(id)arg1;
@property(retain) ConversationMember *representedObject;
@property(retain) MessageView *view;
@property(nonatomic) BOOL alwaysShowMailboxName;
@property(readonly, nonatomic) BOOL loaded;
@property(nonatomic) double pageZoom;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

