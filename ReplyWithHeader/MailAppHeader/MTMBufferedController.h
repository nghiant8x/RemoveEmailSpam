#import <objc/NSObject.h>

#import "MTMMailboxControllerProtocol-Protocol.h"

@class MTMMailbox, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MTMBufferedController : NSObject <MTMMailboxControllerProtocol>
{
    NSMutableDictionary *_accounts;	// 8 = 0x8
    NSURL *_mailLibraryURL;	// 16 = 0x10
    NSDictionary *_tableOfContents;	// 24 = 0x18
    NSDictionary *_preferences;	// 32 = 0x20
    MTMMailbox *_rootMailbox;	// 40 = 0x28
}

@property(retain, nonatomic) MTMMailbox *rootMailbox; // @synthesize rootMailbox=_rootMailbox;
@property(readonly, copy, nonatomic) NSDictionary *preferences; // @synthesize preferences=_preferences;
@property(copy, nonatomic) NSDictionary *tableOfContents; // @synthesize tableOfContents=_tableOfContents;
@property(readonly, nonatomic) NSURL *mailLibraryURL; // @synthesize mailLibraryURL=_mailLibraryURL;
- (void).cxx_destruct;
- (void)updateThumbnailAsGenericWindow;
- (void)updateThumbnail;
- (void)adjustDisplayStateAfterTimeMachineStarted;
- (void)updateMessageListBindingsWithDisplayedMailbox:(id)arg1 scrollerDelta:(double)arg2;
- (void)restore:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)close;
- (void)showWindow:(id)arg1;
- (id)window;
@property(copy, nonatomic) NSDictionary *displayState;
@property(retain, nonatomic) NSURL *focusURL;
@property(readonly, nonatomic) BOOL activated;
@property(readonly, nonatomic) MTMMailbox *selectedMailbox;
@property(readonly, nonatomic) double fadeDuration;
- (void)tearDown;
- (id)revisionIDForURL:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)messageWithID:(id)arg1;
- (BOOL)_loadTableOfContentsIfNeeded;
- (void)mailboxListWasUpdated:(id)arg1;
- (void)mailboxListWillBeUpdated:(id)arg1;
@property(readonly, nonatomic) NSURL *tocURL;
- (void)loadPreferences:(id *)arg1 accounts:(id *)arg2 tableOfContents:(id *)arg3 rootMailbox:(id *)arg4 forLibraryURL:(id)arg5;
- (id)initWithMailLibraryURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

