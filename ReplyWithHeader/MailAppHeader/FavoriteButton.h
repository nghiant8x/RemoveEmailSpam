#import "MailBarContainerButton.h"

#import "FavoritesMenuDelegateProtocol-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class FavoriteButtonMailboxProperties, FavoritesMenuController, MFMailbox, NSString, NSTimer;
@protocol MFUIMailbox;

@interface FavoriteButton : MailBarContainerButton <FavoritesMenuDelegateProtocol, NSCopying, NSDraggingSource, NSPasteboardItemDataProvider>
{
    BOOL _menuIsOpen;	// 172 = 0xac
    id <MFUIMailbox> _mailbox;	// 176 = 0xb0
    MFMailbox *_selectedSubMailbox;	// 184 = 0xb8
    FavoriteButtonMailboxProperties *_mailboxProperties;	// 192 = 0xc0
    FavoritesMenuController *_menuController;	// 200 = 0xc8
    NSTimer *_showMenuTimer;	// 208 = 0xd0
    NSTimer *_flashButtonTimer;	// 216 = 0xd8
    long long _flashCount;	// 224 = 0xe0
}

+ (BOOL)enabledStateforMailbox:(id)arg1;
+ (Class)cellClass;
+ (id)titleForMailbox:(id)arg1 selectedSubMailbox:(id)arg2 shouldUseExtendedName:(BOOL)arg3 countsChildren:(BOOL)arg4;
+ (unsigned long long)_unreadCountForMailbox:(id)arg1 countsChildren:(BOOL)arg2;
+ (void)setDraggedButton:(id)arg1;
+ (id)draggedButton;
@property(nonatomic) BOOL menuIsOpen; // @synthesize menuIsOpen=_menuIsOpen;
@property(nonatomic) long long flashCount; // @synthesize flashCount=_flashCount;
@property(retain, nonatomic) NSTimer *flashButtonTimer; // @synthesize flashButtonTimer=_flashButtonTimer;
@property(retain, nonatomic) NSTimer *showMenuTimer; // @synthesize showMenuTimer=_showMenuTimer;
@property(retain, nonatomic) FavoritesMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) FavoriteButtonMailboxProperties *mailboxProperties; // @synthesize mailboxProperties=_mailboxProperties;
@property(retain, nonatomic) MFMailbox *selectedSubMailbox; // @synthesize selectedSubMailbox=_selectedSubMailbox;
@property(readonly, nonatomic) id <MFUIMailbox> mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;
- (id)selectedMailbox;
- (void)menuDidSelectMailbox:(id)arg1;
- (void)menuDidClose;
- (void)menuDidPresent;
- (void)showMenu;
- (void)_showMenuTimerFired;
- (void)_toggleFlashState;
- (void)_stopShowMenuTimer;
- (void)_startShowMenuTimer;
@property(readonly, copy) NSString *description;
- (BOOL)_canAcceptMailboxAtPoint:(struct CGPoint)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)_dragOperationForCurrentEvent;
- (BOOL)_canDragMessageIntoSubMailboxesOrMailbox:(id)arg1;
- (BOOL)_canDragMessageIntoMailbox:(id)arg1;
- (void)flash;
- (void)_finishFlash:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_presentContextualPopupForEvent:(id)arg1;
- (BOOL)_shouldDispayMenuForEvent:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)_performDragFromMouseDown:(id)arg1 withViewFrameOrigin:(struct CGPoint)arg2;
- (struct CGSize)_currentEventOffsetFromEvent:(id)arg1;
- (BOOL)_canDragHorizontally:(BOOL)arg1 fromMouseDown:(id)arg2;
- (id)_draggingImage;
- (void)dealloc;
- (BOOL)_hasIndicator;
- (void)_setIndicator:(BOOL)arg1;
- (id)activeMailbox;
- (void)_fullScreenStateChanged:(id)arg1;
- (void)_mailboxSectionListingDidChange:(id)arg1;
- (void)_flagMailboxVisibilityChanged:(id)arg1;
- (void)_unreadCountDidChange:(id)arg1;
- (void)_mailboxInfoDidChange:(id)arg1;
- (void)_mailboxWillBecomeInvalid:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_favoriteButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1 selectedSubMailbox:(id)arg2;
- (void)_registerChildrenForUnreadCountChangesForMailbox:(id)arg1;
- (void)registerForDraggedTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

