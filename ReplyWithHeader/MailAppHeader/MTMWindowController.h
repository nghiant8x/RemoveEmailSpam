#import <AppKit/NSWindowController.h>

#import "MTMMailboxControllerProtocol-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"

@class MTMMailbox, MailToolbar, NSArray, NSAttributedString, NSDictionary, NSMutableDictionary, NSString, NSURL, NSView, StarFieldController;

@interface MTMWindowController : NSWindowController <MTMMailboxControllerProtocol, NSToolbarDelegate>
{
    NSURL *_mailLibraryURL;	// 80 = 0x50
    NSURL *_focusURL;	// 88 = 0x58
    NSMutableDictionary *_accounts;	// 96 = 0x60
    BOOL _activated;	// 104 = 0x68
    BOOL _bindingsAreSet;	// 105 = 0x69
    MailToolbar *_toolbar;	// 112 = 0x70
    NSView *_pinView;	// 120 = 0x78
    StarFieldController *_controller;	// 128 = 0x80
    MTMMailbox *_rootMailbox;	// 136 = 0x88
    NSDictionary *_preferences;	// 144 = 0x90
    NSDictionary *_toolbarItems;	// 152 = 0x98
    NSDictionary *_tableOfContents;	// 160 = 0xa0
}

+ (void)loadPreferences:(id *)arg1 accounts:(id *)arg2 tableOfContents:(id *)arg3 rootMailbox:(id *)arg4 forLibraryURL:(id)arg5;
+ (BOOL)_loadTableOfContents:(id *)arg1 forLibraryURL:(id)arg2;
+ (id)focusURLInCurrentSnapshotForFocusURL:(id)arg1;
+ (id)baseLibraryURLFromMailLibraryURL:(id)arg1;
+ (id)mailLibraryURLFromFocusURL:(id)arg1;
+ (Class)specialMailboxClass;
@property(copy, nonatomic) NSDictionary *tableOfContents; // @synthesize tableOfContents=_tableOfContents;
@property(copy, nonatomic) NSDictionary *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(readonly, copy, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(nonatomic) BOOL bindingsAreSet; // @synthesize bindingsAreSet=_bindingsAreSet;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) MTMMailbox *rootMailbox; // @synthesize rootMailbox=_rootMailbox;
@property(nonatomic) __weak StarFieldController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak NSView *pinView; // @synthesize pinView=_pinView;
@property(nonatomic) __weak MailToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (void)updateMessageListBindingsWithDisplayedMailbox:(id)arg1 scrollerDelta:(double)arg2;
- (long long)compare:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)restore:(id)arg1;
@property(readonly, nonatomic) double fadeDuration;
@property(nonatomic) BOOL showChangedItemsOnly;
@property(readonly, copy, nonatomic) NSArray *restoreMessagePaths;
@property(readonly, copy, nonatomic) NSArray *restoreMailboxPaths;
@property(readonly, nonatomic) BOOL shouldRestoreMailboxPaths;
@property(readonly, copy, nonatomic) NSArray *selectedMessagePaths;
@property(readonly, copy, nonatomic) NSArray *selectedMailboxPaths;
@property(readonly, nonatomic) MTMMailbox *selectedMailbox;
@property(readonly, nonatomic) BOOL mailboxTargeted;
- (void)mailboxListWasUpdated:(id)arg1;
- (void)mailboxListWillBeUpdated:(id)arg1;
- (void)updateThumbnailAndGenericThumbnailIfNecessary;
@property(readonly, copy, nonatomic) NSAttributedString *placeholderString;
- (void)updateThumbnailAsGenericWindow;
- (void)updateThumbnail;
- (id)revisionIDForURL:(id)arg1;
- (void)adjustDisplayStateAfterTimeMachineStarted;
@property(copy, nonatomic) NSDictionary *displayState;
- (id)accountForAccountID:(id)arg1;
- (void)_setupToolbarWithConfigurationDictionary:(id)arg1;
- (id)messageWithID:(id)arg1;
- (BOOL)_loadTableOfContentsIfNeeded;
@property(readonly, copy, nonatomic) NSArray *mailboxes;
@property(readonly, nonatomic) NSURL *mailLibraryURL;
@property(readonly, nonatomic) NSURL *tocURL;
@property(retain, nonatomic) NSURL *focusURL;
- (void)_updateTimeMachineTargetIfNecessary;
- (void)deactivate;
- (void)activate;
- (BOOL)setupUIWithDisplayState:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)removeBindings;
- (void)setupBindings;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithFocusURL:(id)arg1 bufferedController:(id)arg2 controller:(id)arg3;
- (id)initWithFocusURL:(id)arg1 controller:(id)arg2;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
