#import "PrintingManager.h"

@class NSMutableArray;

@interface PrintingManagerForPrinting : PrintingManager
{
    NSMutableArray *_arraysOfConversationMembersToGenerateHTMLFor;	// 8 = 0x8
    unsigned long long _numberOfConversationsNotYetLoaded;	// 16 = 0x10
}

@property(nonatomic) unsigned long long numberOfConversationsNotYetLoaded; // @synthesize numberOfConversationsNotYetLoaded=_numberOfConversationsNotYetLoaded;
@property(retain, nonatomic) NSMutableArray *arraysOfConversationMembersToGenerateHTMLFor; // @synthesize arraysOfConversationMembersToGenerateHTMLFor=_arraysOfConversationMembersToGenerateHTMLFor;
- (void).cxx_destruct;
- (void)_printIfAllNecessaryConversationMembersHaveBeenLoaded;
- (void)dispatch;
- (id)progressMessage;
- (void)dealloc;

@end

