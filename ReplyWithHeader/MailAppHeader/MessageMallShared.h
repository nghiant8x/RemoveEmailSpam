#import <objc/NSObject.h>

@interface MessageMallShared : NSObject
{
}

+ (BOOL)shouldDisplayMessage:(id)arg1 includeDeleted:(BOOL)arg2;
+ (unsigned long long)sizeForMessage:(id)arg1 originalMessageByMessageID:(id)arg2 messageCopiesByMessageID:(id)arg3 includeDeleted:(BOOL)arg4;
+ (unsigned int)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3 originalMessageByMessageID:(id)arg4 messageCopiesByMessageID:(id)arg5 includeDeleted:(BOOL)arg6;
+ (id)messagesIncludingHiddenCopies:(id)arg1 originalMessageByMessageID:(id)arg2 messageCopiesByMessageID:(id)arg3;

@end

