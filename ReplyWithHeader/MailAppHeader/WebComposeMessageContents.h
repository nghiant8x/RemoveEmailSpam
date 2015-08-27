#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSMutableArray, NSString, NSURL;

@interface WebComposeMessageContents : NSObject
{
    BOOL _isMailDropPlaceholderMessage;	// 8 = 0x8
    long long _composeMode;	// 16 = 0x10
    NSAttributedString *_plainText;	// 24 = 0x18
    NSString *_topLevelHtmlString;	// 32 = 0x20
    NSMutableArray *_attachmentsAndHtmlStrings;	// 40 = 0x28
    NSMutableArray *_urlsForAttachmentsAndHtmlStrings;	// 48 = 0x30
    NSDictionary *_remoteAttachments;	// 56 = 0x38
    NSURL *_imageArchiveURL;	// 64 = 0x40
}

@property(nonatomic) BOOL isMailDropPlaceholderMessage; // @synthesize isMailDropPlaceholderMessage=_isMailDropPlaceholderMessage;
@property(retain, nonatomic) NSURL *imageArchiveURL; // @synthesize imageArchiveURL=_imageArchiveURL;
@property(copy, nonatomic) NSDictionary *remoteAttachments; // @synthesize remoteAttachments=_remoteAttachments;
@property(retain, nonatomic) NSMutableArray *urlsForAttachmentsAndHtmlStrings; // @synthesize urlsForAttachmentsAndHtmlStrings=_urlsForAttachmentsAndHtmlStrings;
@property(retain, nonatomic) NSMutableArray *attachmentsAndHtmlStrings; // @synthesize attachmentsAndHtmlStrings=_attachmentsAndHtmlStrings;
@property(retain, nonatomic) NSString *topLevelHtmlString; // @synthesize topLevelHtmlString=_topLevelHtmlString;
@property(retain, nonatomic) NSAttributedString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) long long composeMode; // @synthesize composeMode=_composeMode;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addAttachmentOrHtmlString:(id)arg1 withURL:(id)arg2;

@end

