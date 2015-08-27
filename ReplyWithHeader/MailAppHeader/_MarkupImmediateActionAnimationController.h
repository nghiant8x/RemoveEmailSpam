#import <objc/NSObject.h>

#import "NSImmediateActionAnimationController-Protocol.h"

@class MFAttachmentViewController, NSString;

@interface _MarkupImmediateActionAnimationController : NSObject <NSImmediateActionAnimationController>
{
    MFAttachmentViewController *_attachment;	// 8 = 0x8
}

@property(retain, nonatomic) MFAttachmentViewController *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

