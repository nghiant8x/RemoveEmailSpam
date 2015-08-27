#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class MessageMall, NSCache, NSString, NSTableView, NSTimer;

@interface ConversationPrefetcher : NSObject <NSCacheDelegate>
{
    NSCache *_prefetchedConversations;	// 8 = 0x8
    MessageMall *_messageMall;	// 16 = 0x10
    NSTableView *_messagesTableView;	// 24 = 0x18
    NSTimer *_prefetchTimer;	// 32 = 0x20
}

@property(retain, nonatomic) NSTimer *prefetchTimer; // @synthesize prefetchTimer=_prefetchTimer;
@property(retain, nonatomic) NSTableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(retain, nonatomic) MessageMall *messageMall; // @synthesize messageMall=_messageMall;
@property(retain, nonatomic) NSCache *prefetchedConversations; // @synthesize prefetchedConversations=_prefetchedConversations;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)_prefetchVisibleConversations:(id)arg1;
- (id)cachedConversationForID:(long long)arg1;
- (void)_armTimerWithDelay:(double)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (void)_mallStructureChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMessageMall:(id)arg1 messagesTableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

