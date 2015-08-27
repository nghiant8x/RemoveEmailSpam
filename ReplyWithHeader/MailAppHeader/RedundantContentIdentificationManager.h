#import <objc/NSObject.h>

@class NSOperationQueue;

@interface RedundantContentIdentificationManager : NSObject
{
    NSOperationQueue *_workQueue;	// 8 = 0x8
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (id)_messageWithMessageIDHeaderString:(id)arg1 inConversation:(id)arg2;
- (id)mostRecentAncestorForRedundantTextComparisonForMessage:(id)arg1 inConversation:(id)arg2;
- (id)redundantContentMarkupForMessage:(id)arg1 inConversation:(id)arg2;
- (void)dealloc;
- (id)init;

@end

