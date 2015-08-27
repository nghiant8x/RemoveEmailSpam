#import <Mail/MFWebMessageDocument.h>

@class DOMHTMLDocument, DOMHTMLElement, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSURL;

@interface EditableWebMessageDocument : MFWebMessageDocument
{
    DOMHTMLElement *_contentElement;	// 8 = 0x8
    NSMutableDictionary *_savedUserContent;	// 16 = 0x10
    NSMutableDictionary *_savedUserAttachments;	// 24 = 0x18
    NSMutableArray *_orderedUserAttachmentsURLs;	// 32 = 0x20
    NSMutableArray *_savedUserImages;	// 40 = 0x28
    NSMutableDictionary *_backgroundImageAttachments;	// 48 = 0x30
    DOMHTMLDocument *_htmlDocument;	// 56 = 0x38
    NSDictionary *_remoteAttachments;	// 64 = 0x40
    NSURL *_imageArchiveURL;	// 72 = 0x48
    NSURL *_imageArchiveDownloadURL;	// 80 = 0x50
    NSDate *_expirationDate;	// 88 = 0x58
}

@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSURL *imageArchiveDownloadURL; // @synthesize imageArchiveDownloadURL=_imageArchiveDownloadURL;
@property(retain, nonatomic) NSURL *imageArchiveURL; // @synthesize imageArchiveURL=_imageArchiveURL;
@property(copy, nonatomic) NSDictionary *remoteAttachments; // @synthesize remoteAttachments=_remoteAttachments;
@property(retain, nonatomic) DOMHTMLDocument *htmlDocument; // @synthesize htmlDocument=_htmlDocument;
- (void).cxx_destruct;
- (void)addAttachmentsFromArchive:(id)arg1 attachmentDelegate:(id)arg2;
- (void)_addAttachmentsFromResource:(id)arg1 attachmentDelegate:(id)arg2;
- (id)attachmentElementEnumeratorForRange:(id)arg1 withOptions:(int)arg2;
- (id)attachmentElementEnumeratorWithOptions:(int)arg1;
- (void)copyBackgroundImageFromURL:(id)arg1 toURL:(id)arg2;
- (id)prepareToAddArchive:(id)arg1;
- (id)prepareToAddArchive:(id)arg1 attachmentDelegate:(id)arg2;
- (id)attachmentForURLString:(id)arg1;
- (void)removeAllBackgroundAttachments;
- (void)removeAllCompositeImageAttachments;
- (id)attachmentsIncludingBackgrounds;
- (void)saveAttachmentsWithURLsAsBackgroundAttachments:(id)arg1;
- (id)backgroundImageAttachments;
- (id)attachments;
- (id)attachmentsInRange:(id)arg1;
- (void)addMailDropBannerWithSize:(unsigned long long)arg1;
- (void)convertAOSBoundAttachmentsToLinks;
- (id)userImageDictionaryFromAttachment:(id)arg1 withURL:(id)arg2;
- (void)forgetAllSavedContentAttachmentsAndImages;
- (void)insertSavedUserImagesIntoCompositeImages;
- (id)savedUserImagesFromCompositeImages;
- (void)saveUserImagesFromCompositeImages;
- (id)orderedCompositeImagesAndTheirURLs:(id *)arg1;
- (void)removeSavedUserAttachmentWithURL:(id)arg1;
- (id)savedUserAttachmentForURL:(id)arg1;
- (id)savedUserAttachmentsOrdering;
- (void)saveUserAttachments:(id)arg1 withOrdering:(id)arg2;
- (void)forgetSavedContentWithKeys:(id)arg1;
- (id)savedUserContent;
- (void)saveUserContent:(id)arg1;
- (void)setContentElement:(id)arg1;
- (id)contentElement;

@end

