#import <objc/NSObject.h>

@class MCAttachment, MCMimeBody, MFAttachmentViewController, NSString, NSURL, NSWindow;

@interface _AttachmentQueueEntry : NSObject
{
    MFAttachmentViewController *_attachmentController;	// 8 = 0x8
    MCAttachment *_attachment;	// 16 = 0x10
    int _reason;	// 24 = 0x18
    NSWindow *_window;	// 32 = 0x20
    MCMimeBody *_body;	// 40 = 0x28
    NSString *_attachDir;	// 48 = 0x30
    NSURL *_applicationURL;	// 56 = 0x38
    NSString *_savePath;	// 64 = 0x40
}

+ (id)newWithWindow:(id)arg1 attachment:(id)arg2 reason:(int)arg3 opSpecific:(id)arg4 attachmentDirectory:(id)arg5;
+ (id)newWithWindow:(id)arg1 attachmentController:(id)arg2 reason:(int)arg3 opSpecific:(id)arg4 attachmentDirectory:(id)arg5;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSURL *applicationURL; // @synthesize applicationURL=_applicationURL;
@property(retain, nonatomic) NSString *attachDir; // @synthesize attachDir=_attachDir;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) MCMimeBody *body; // @synthesize body=_body;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) MFAttachmentViewController *attachmentController;
@property(retain, nonatomic) MCAttachment *attachment;

@end

