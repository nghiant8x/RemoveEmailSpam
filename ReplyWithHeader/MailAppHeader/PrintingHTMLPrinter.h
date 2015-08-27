#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class MUIWebDocumentView, NSMutableArray, NSPrintInfo, NSString;

@interface PrintingHTMLPrinter : NSObject <NSWindowDelegate>
{
    BOOL _hasPrinted;	// 8 = 0x8
    NSString *_printingHTML;	// 16 = 0x10
    NSMutableArray *_attachments;	// 24 = 0x18
    NSPrintInfo *_printInfo;	// 32 = 0x20
    NSString *_jobTitle;	// 40 = 0x28
    MUIWebDocumentView *_printView;	// 48 = 0x30
    PrintingHTMLPrinter *_activePrinter;	// 56 = 0x38
    CDUnknownBlockType _finishedPrintingCompletionBlock;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType finishedPrintingCompletionBlock; // @synthesize finishedPrintingCompletionBlock=_finishedPrintingCompletionBlock;
@property(retain, nonatomic) PrintingHTMLPrinter *activePrinter; // @synthesize activePrinter=_activePrinter;
@property(nonatomic) BOOL hasPrinted; // @synthesize hasPrinted=_hasPrinted;
@property(retain, nonatomic) MUIWebDocumentView *printView; // @synthesize printView=_printView;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *printingHTML; // @synthesize printingHTML=_printingHTML;
- (void).cxx_destruct;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)_runPrintOperation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)run:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPrintingHTML:(id)arg1 attachments:(id)arg2 printInfo:(id)arg3 jobTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

