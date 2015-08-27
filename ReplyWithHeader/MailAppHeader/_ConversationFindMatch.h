#import <objc/NSObject.h>

#import "NSTextFinderAsynchronousDocumentFindMatch-Protocol.h"

@class ConversationViewFindController, MUICollectionView, NSArray, NSString;
@protocol NSTextFinderAsynchronousDocumentFindMatch;

@interface _ConversationFindMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch>
{
    MUICollectionView *_containingView;	// 8 = 0x8
    id <NSTextFinderAsynchronousDocumentFindMatch> _backingFindMatch;	// 16 = 0x10
    unsigned long long _cellIndex;	// 24 = 0x18
    NSArray *_textRectsInDocument;	// 32 = 0x20
    ConversationViewFindController *_findController;	// 40 = 0x28
}

@property(retain, nonatomic) ConversationViewFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) NSArray *textRectsInDocument; // @synthesize textRectsInDocument=_textRectsInDocument;
@property(nonatomic) unsigned long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(retain, nonatomic) id <NSTextFinderAsynchronousDocumentFindMatch> backingFindMatch; // @synthesize backingFindMatch=_backingFindMatch;
@property(retain, nonatomic) MUICollectionView *containingView; // @synthesize containingView=_containingView;
- (void).cxx_destruct;
- (void)generateTextImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *textRects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

