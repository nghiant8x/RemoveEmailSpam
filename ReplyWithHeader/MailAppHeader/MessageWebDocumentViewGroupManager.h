#import <objc/NSObject.h>

@class MUIWebDocumentViewGroup;

@interface MessageWebDocumentViewGroupManager : NSObject
{
    MUIWebDocumentViewGroup *_viewGroup;	// 8 = 0x8
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) MUIWebDocumentViewGroup *viewGroup; // @synthesize viewGroup=_viewGroup;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

