#import <objc/NSObject.h>

#import "NSTextFinderClient-Protocol.h"
#import "NSUserInterfaceValidations-Protocol.h"

@class ConversationViewController, NSArray, NSMutableArray, NSProgress, NSString, NSTextFinder;

@interface ConversationViewFindController : NSObject <NSUserInterfaceValidations, NSTextFinderClient>
{
    NSTextFinder *_textFinder;	// 8 = 0x8
    ConversationViewController *_viewController;	// 16 = 0x10
    NSString *_targetString;	// 24 = 0x18
    unsigned long long _findOptions;	// 32 = 0x20
    NSProgress *_currentProgress;	// 40 = 0x28
    NSProgress *_updateProgress;	// 48 = 0x30
    NSMutableArray *_findStore;	// 56 = 0x38
}

@property(retain, nonatomic) NSMutableArray *findStore; // @synthesize findStore=_findStore;
@property(retain, nonatomic) NSProgress *updateProgress; // @synthesize updateProgress=_updateProgress;
@property(retain, nonatomic) NSProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) unsigned long long findOptions; // @synthesize findOptions=_findOptions;
@property(retain, nonatomic) NSString *targetString; // @synthesize targetString=_targetString;
@property(readonly, nonatomic) __weak ConversationViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_updateVisibleRectsForCell:(unsigned long long)arg1;
- (void)_conversationViewDidResize:(id)arg1;
- (void)_cellBoundsDidChange:(id)arg1;
- (void)_revalidateVisibleCells:(id)arg1;
- (void)_updateConversationMatches:(id *)arg1 forWebMatches:(id)arg2 atCellIndex:(unsigned long long)arg3 visibleRect:(struct CGRect)arg4;
- (id)_conversationMatchesForWebMatches:(id)arg1 atCellIndex:(unsigned long long)arg2 cache:(BOOL)arg3;
- (void)_asyncFindMatchesAtCellIndex:(unsigned long long)arg1 maxResults:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_findNextMatchAtCurrentIndex:(unsigned long long)arg1 startIndex:(unsigned long long)arg2 conversationDidWrap:(BOOL)arg3 progress:(id)arg4 resultCollector:(CDUnknownBlockType)arg5;
- (void)_findNextMatchForString:(id)arg1 findOptions:(unsigned long long)arg2 resultCollector:(CDUnknownBlockType)arg3;
- (void)_findAllMatchesWithProgress:(id)arg1 currentIndex:(unsigned long long)arg2 stopIndex:(unsigned long long)arg3 resultCollector:(CDUnknownBlockType)arg4;
- (void)_findAllMatchesForString:(id)arg1 findOptions:(unsigned long long)arg2 resultCollector:(CDUnknownBlockType)arg3;
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollFindMatchToVisible:(id)arg1;
- (void)getSelectedText:(CDUnknownBlockType)arg1;
- (void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(CDUnknownBlockType)arg5;
- (void)performTextFinderAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@property(readonly, nonatomic) NSTextFinder *textFinder;
- (void)reset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tearDown;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end

