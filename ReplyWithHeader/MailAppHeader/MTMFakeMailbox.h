#import "MTMMailbox.h"

@class NSMutableArray, NSMutableIndexSet;

@interface MTMFakeMailbox : MTMMailbox
{
    NSMutableArray *_fakeMessages;	// 80 = 0x50
    NSMutableIndexSet *_fakeSelectionIndexes;	// 88 = 0x58
}

- (void).cxx_destruct;
- (id)selectedMessageIndexes;
- (id)messages;
- (id)initWithMessageDescriptions:(id)arg1;

@end

