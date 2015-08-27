#import <objc/NSObject.h>

#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSMapTable, NSString;

@interface MessageDragHelper : NSObject <NSPasteboardItemDataProvider>
{
    NSMapTable *_messagesByPasteboardItem;	// 8 = 0x8
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)messagesTargetedByItems:(id)arg1;
- (id)pasteboardWriterForMessages:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

