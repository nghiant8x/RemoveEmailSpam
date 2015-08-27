#import <objc/NSObject.h>

@class MessageSelection, MessageWebDocumentView, NSString, PrintingProgressPanelWindowController;

@interface PrintingManager : NSObject
{
    BOOL _wasCancelled;	// 8 = 0x8
    MessageSelection *_selection;	// 16 = 0x10
    MessageWebDocumentView *_webDocumentView;	// 24 = 0x18
    PrintingManager *_activeDispatcher;	// 32 = 0x20
    PrintingProgressPanelWindowController *_progressPanelController;	// 40 = 0x28
    double _progressMaxValue;	// 48 = 0x30
    double _progressValue;	// 56 = 0x38
    double _progressIncrement;	// 64 = 0x40
}

+ (void)exportSelectionAsPDF:(id)arg1;
+ (void)printSelection:(id)arg1;
@property(nonatomic) double progressIncrement; // @synthesize progressIncrement=_progressIncrement;
@property double progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic) double progressMaxValue; // @synthesize progressMaxValue=_progressMaxValue;
@property(retain, nonatomic) PrintingProgressPanelWindowController *progressPanelController; // @synthesize progressPanelController=_progressPanelController;
@property(retain, nonatomic) PrintingManager *activeDispatcher; // @synthesize activeDispatcher=_activeDispatcher;
@property(nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) MessageSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (void)_showProgressPanel;
@property(readonly, copy, nonatomic) NSString *progressMessage;
- (void)_generatePrintingHTMLForEnumeratedConversationMembers:(id)arg1 HTMLStorage:(id)arg2 attachmentStorage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dispatch;
- (id)init;
- (id)initWithSelection:(id)arg1;

@end

