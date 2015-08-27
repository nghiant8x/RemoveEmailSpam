#import <objc/NSObject.h>

#import "NSDraggingSource-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSView;

@interface AttachmentDragSession : NSObject <NSDraggingSource, NSPasteboardItemDataProvider>
{
    NSMutableArray *_attachments;	// 8 = 0x8
    NSView *_sourceView;	// 16 = 0x10
    NSArray *_temporaryAttachmentURLs;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *temporaryAttachmentURLs; // @synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs;
@property(retain, nonatomic) NSView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (BOOL)startDragFromPoint:(struct CGPoint)arg1 event:(id)arg2 image:(id)arg3;
- (id)attachments;
- (id)initWithSourceView:(id)arg1 attachments:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

