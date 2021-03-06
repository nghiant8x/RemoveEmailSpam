#import "MCActivityTarget-Protocol.h"
#import "NSCopying-Protocol.h"

@class MCMessage, MCMessageBody, MCMessageHeaders, MCMimePart, MCResultTaskOperation, NSArray, NSColor, NSData, NSDictionary, NSMutableSet, NSOperation, NSString;
@protocol MCMailAccount, MCMailbox, MCMessageDataSource;

@protocol MCMessageDataSource <MCActivityTarget, NSCopying>
@property(readonly) BOOL isReadOnly;
- (NSString *)uniquedString:(NSString *)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(MCMessage *)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(MCMessage *)arg2;
- (NSArray *)routeMessages:(NSArray *)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(NSMutableSet *)arg3;
- (void)doCompact;
- (BOOL)canCompact;
- (NSArray *)undeleteMessages:(NSArray *)arg1 movedToStore:(id <MCMessageDataSource>)arg2 newMessageIDs:(NSArray *)arg3;
- (void)undeleteMessages:(NSArray *)arg1;
- (void)deleteMessages:(NSArray *)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(NSDictionary *)arg1;
- (NSDictionary *)snippetsForMessages:(NSArray *)arg1;
- (BOOL)supportsSnippets;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(MCMessage *)arg4;
- (NSString *)attachmentsDirectoryForMessage:(MCMessage *)arg1;
- (void)setColor:(NSColor *)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(NSArray *)arg3;
- (MCResultTaskOperation *)async_setJunkMailLevel:(long long)arg1 forMessages:(NSArray *)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (void)messageFlagsDidChange:(NSArray *)arg1 flags:(NSDictionary *)arg2;
- (MCResultTaskOperation *)async_setFlagWithKey:(NSString *)arg1 state:(BOOL)arg2 forMessages:(NSArray *)arg3;
- (MCResultTaskOperation *)async_setFlagsFromDictionary:(NSDictionary *)arg1 forMessages:(NSArray *)arg2;
- (NSData *)dataForMimePart:(MCMimePart *)arg1;
- (BOOL)hasCachedDataForMimePart:(MCMimePart *)arg1;
- (NSData *)fullBodyDataForMessage:(MCMessage *)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (NSData *)fullBodyDataForMessage:(MCMessage *)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (NSData *)fullBodyDataForMessage:(MCMessage *)arg1;
- (NSData *)bodyDataForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (MCMessageBody *)bodyForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (MCMessageBody *)bodyForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (MCMessageBody *)bodyForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (NSData *)headerDataForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (NSData *)headerDataForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (NSData *)headerDataForMessage:(MCMessage *)arg1;
- (MCMessageHeaders *)headersForMessage:(MCMessage *)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (MCMessageHeaders *)headersForMessage:(MCMessage *)arg1;
- (MCMessage *)messageForMessageID:(NSString *)arg1;
- (id <MCMailbox>)mailbox;
- (id <MCMailAccount>)account;

@optional
- (MCResultTaskOperation *)async_setGmailLabelsFromDictionary:(NSDictionary *)arg1 forMessages:(NSArray *)arg2;
- (NSOperation *)async_deleteMessages:(NSArray *)arg1 moveToTrash:(BOOL)arg2;
@end

