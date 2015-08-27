#import <objc/NSObject.h>

@class ConversationMember, MessageWebDocumentView, NSImage, NSMutableString, NSString;

@interface PrintingHTMLGenerator : NSObject
{
    NSMutableString *_headerTableHTML;	// 8 = 0x8
    NSString *_senderImageHTML;	// 16 = 0x10
    BOOL _shouldCollapseRedundantText;	// 24 = 0x18
    ConversationMember *_conversationMember;	// 32 = 0x20
    MessageWebDocumentView *_webDocumentView;	// 40 = 0x28
    NSImage *_senderImage;	// 48 = 0x30
    PrintingHTMLGenerator *_activeGenerator;	// 56 = 0x38
}

@property(retain, nonatomic) PrintingHTMLGenerator *activeGenerator; // @synthesize activeGenerator=_activeGenerator;
@property(retain, nonatomic) NSImage *senderImage; // @synthesize senderImage=_senderImage;
@property(nonatomic) BOOL shouldCollapseRedundantText; // @synthesize shouldCollapseRedundantText=_shouldCollapseRedundantText;
@property(nonatomic) __weak MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(nonatomic) __weak ConversationMember *conversationMember; // @synthesize conversationMember=_conversationMember;
- (void).cxx_destruct;
- (id)_newHTMLAddressStringsFromAddressList:(id)arg1;
@property(readonly, copy, nonatomic) NSString *senderImageHTML;
@property(readonly, copy, nonatomic) NSString *headerTableHTML;
- (id)_newPrintHTMLUsingPrintingData:(id)arg1 base64EncodedDisplayHTML:(id)arg2;
- (id)_javaScriptForPrintingData;
- (void)asyncLoadPrintingHTML:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConversationMember:(id)arg1 webDocumentView:(id)arg2 shouldCollapseRedundantText:(BOOL)arg3;

@end

