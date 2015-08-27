#import "NSObject-Protocol.h"

@class MFMailAccount, MTMFakeMailbox, MTMMailbox, MTMMessage, NSDictionary, NSURL, NSWindow;

@protocol MTMMailboxControllerProtocol <NSObject>
@property(readonly, nonatomic) MTMMailbox *rootMailbox;
@property(copy, nonatomic) NSDictionary *displayState;
@property(retain, nonatomic) NSURL *focusURL;
@property(readonly, nonatomic) BOOL activated;
@property(readonly, nonatomic) MTMMailbox *selectedMailbox;
@property(readonly, nonatomic) double fadeDuration;
@property(readonly, nonatomic) NSURL *tocURL;
@property(readonly, nonatomic) NSURL *mailLibraryURL;
- (void)updateThumbnailAsGenericWindow;
- (void)updateThumbnail;
- (void)adjustDisplayStateAfterTimeMachineStarted;
- (void)updateMessageListBindingsWithDisplayedMailbox:(MTMFakeMailbox *)arg1 scrollerDelta:(double)arg2;
- (void)restore:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)close;
- (void)showWindow:(id)arg1;
- (NSWindow *)window;
- (id)revisionIDForURL:(NSURL *)arg1;
- (MFMailAccount *)accountForAccountID:(id)arg1;
- (MTMMessage *)messageWithID:(id)arg1;
- (void)mailboxListWasUpdated:(MTMMailbox *)arg1;
- (void)mailboxListWillBeUpdated:(MTMMailbox *)arg1;
@end

