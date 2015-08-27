#import <AppKit/NSTableView.h>

@class NSArrayController;

@interface MTMTableView : NSTableView
{
    NSArrayController *_messagesController;	// 448 = 0x1c0
}

@property(retain, nonatomic) NSArrayController *messagesController; // @synthesize messagesController=_messagesController;
- (void).cxx_destruct;

@end

