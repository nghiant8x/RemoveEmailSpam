#import <objc/NSObject.h>

@class ComposeDraft, NSArray, NSMutableOrderedSet;

@interface ComposeDraftController : NSObject
{
    NSMutableOrderedSet *_drafts;	// 8 = 0x8
}

+ (id)sharedDraftController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (void)openDraftWithDocumentID:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUntitledDraftAndDisplay:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDraft:(id)arg1;
- (void)addDraft:(id)arg1;
- (id)draftForWindow:(id)arg1;
- (id)draftForDocumentID:(id)arg1;
@property(readonly, nonatomic) ComposeDraft *currentDraft;
@property(readonly, copy, nonatomic) NSArray *drafts;
- (void)dealloc;
- (id)init;

@end

