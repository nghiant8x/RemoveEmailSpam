#import <Foundation/NSProxy.h>

@class ComposeDraft;

@interface _ComposeDraftProxy : NSProxy
{
    ComposeDraft *_draft;	// 8 = 0x8
}

@property(readonly, nonatomic) __weak ComposeDraft *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDraft:(id)arg1;

@end

