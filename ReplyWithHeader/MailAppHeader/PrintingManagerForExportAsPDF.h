#import "PrintingManager.h"

@class NSMutableArray, NSPDFInfo;

@interface PrintingManagerForExportAsPDF : PrintingManager
{
    NSMutableArray *_exportJobs;	// 8 = 0x8
    NSPDFInfo *_pdfInfo;	// 16 = 0x10
    unsigned long long _numberOfConversationsNotYetLoaded;	// 24 = 0x18
}

@property(nonatomic) unsigned long long numberOfConversationsNotYetLoaded; // @synthesize numberOfConversationsNotYetLoaded=_numberOfConversationsNotYetLoaded;
@property(retain, nonatomic) NSPDFInfo *pdfInfo; // @synthesize pdfInfo=_pdfInfo;
@property(retain, nonatomic) NSMutableArray *exportJobs; // @synthesize exportJobs=_exportJobs;
- (void).cxx_destruct;
- (void)_generateJobTitleAndPrintInfoForExportJob:(id)arg1;
- (void)_getSaveURLFromUser:(CDUnknownBlockType)arg1;
- (void)_runEnumeratedExportJobs:(id)arg1;
- (void)_generatePrintingHTMLForEnumeratedExportJobs:(id)arg1;
- (void)_generatePrintingHTMLIfAllConversationMembersAreLoaded;
- (void)dispatch;
- (id)progressMessage;
- (void)dealloc;

@end

