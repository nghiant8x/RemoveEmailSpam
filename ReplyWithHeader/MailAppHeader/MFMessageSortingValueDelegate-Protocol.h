@class MCMessage, MFMessageThread;

@protocol MFMessageSortingValueDelegate
- (long long)sortingUniqueIdentifierForMessageThread:(MFMessageThread *)arg1;
- (unsigned int)sortingMessageFlagsForMessage:(MCMessage *)arg1;
- (unsigned long long)sortingSizeForMessage:(MCMessage *)arg1;
@end

