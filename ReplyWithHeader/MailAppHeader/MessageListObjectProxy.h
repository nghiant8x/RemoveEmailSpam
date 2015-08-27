#import <objc/NSObject.h>

#import "MUIActionContactDataProvider-Protocol.h"

@class MCMessage, MFCriterion, NSDictionary, NSImage, NSIndexSet, NSOrderedSet, NSString;

@interface MessageListObjectProxy : NSObject <MUIActionContactDataProvider>
{
    BOOL _showContactPhotos;	// 8 = 0x8
    BOOL _isOpen;	// 9 = 0x9
    BOOL _isVIP;	// 10 = 0xa
    BOOL _selected;	// 11 = 0xb
    BOOL _showRecipient;	// 12 = 0xc
    BOOL _isDeleted;	// 13 = 0xd
    unsigned int _flags;	// 16 = 0x10
    MCMessage *_message;	// 24 = 0x18
    NSString *_addressee;	// 32 = 0x20
    NSString *_dateString;	// 40 = 0x28
    NSString *_subject;	// 48 = 0x30
    NSDictionary *_unreadImages;	// 56 = 0x38
    NSDictionary *_replyImages;	// 64 = 0x40
    NSDictionary *_attachmentImages;	// 72 = 0x48
    NSImage *_statusImage;	// 80 = 0x50
    NSImage *_selectedPhoto;	// 88 = 0x58
    NSImage *_unselectedPhoto;	// 96 = 0x60
    unsigned long long _photoSize;	// 104 = 0x68
    NSString *_mailbox;	// 112 = 0x70
    NSString *_size;	// 120 = 0x78
    NSOrderedSet *_flagImages;	// 128 = 0x80
    NSString *_snippetString;	// 136 = 0x88
    unsigned long long _threadCount;	// 144 = 0x90
    MFCriterion *_mailboxCriterion;	// 152 = 0x98
    long long _backgroundStyle;	// 160 = 0xa0
    NSIndexSet *_flagColors;	// 168 = 0xa8
    unsigned long long _messageSize;	// 176 = 0xb0
    NSString *_snippet;	// 184 = 0xb8
    NSString *_toCcString;	// 192 = 0xc0
}

+ (id)keyPathsForValuesAffectingFirstFlag;
+ (id)keyPathsForValuesAffectingAttachmentImage;
+ (id)keyPathsForValuesAffectingReplyAlternateImage;
+ (id)keyPathsForValuesAffectingReplyImage;
+ (id)keyPathsForValuesAffectingUnreadImage;
+ (id)keyPathsForValuesAffectingPhoto;
+ (void)_resetDateFormats:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *toCcString; // @synthesize toCcString=_toCcString;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long threadCount; // @synthesize threadCount=_threadCount;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *snippetString; // @synthesize snippetString=_snippetString;
@property(copy, nonatomic) NSOrderedSet *flagImages; // @synthesize flagImages=_flagImages;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSImage *unselectedPhoto; // @synthesize unselectedPhoto=_unselectedPhoto;
@property(retain, nonatomic) NSImage *selectedPhoto; // @synthesize selectedPhoto=_selectedPhoto;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) NSDictionary *attachmentImages; // @synthesize attachmentImages=_attachmentImages;
@property(retain, nonatomic) NSDictionary *replyImages; // @synthesize replyImages=_replyImages;
@property(retain, nonatomic) NSDictionary *unreadImages; // @synthesize unreadImages=_unreadImages;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *addressee; // @synthesize addressee=_addressee;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)emailAddressForPhotoView:(id)arg1;
- (id)fullNameForPhotoView:(id)arg1;
- (id)actionContactForPhotoView:(id)arg1;
@property(readonly, nonatomic) NSImage *firstFlag;
- (id)_iconsForFlags:(id)arg1;
@property(readonly, nonatomic) NSImage *attachmentImage;
@property(readonly, nonatomic) NSImage *replyAlternateImage;
@property(readonly, nonatomic) NSImage *replyImage;
@property(readonly, nonatomic) NSImage *unreadImage;
- (void)_updateFlagImages;
- (void)_updateSize;
- (void)_updateMailbox;
- (id)_displayNameForPhoto;
- (id)_addressForPhotoProvideFullAddress:(BOOL)arg1;
- (id)_messageForPhoto;
- (id)_relevantAddressesForMessage:(id)arg1 fullAddresses:(BOOL)arg2;
- (id)_relevantAddressesProvideFullAddress:(BOOL)arg1;
- (id)_unknownSenderImageSelected:(BOOL)arg1;
- (void)_updatePhoto;
- (void)_updateToCcString;
- (void)_updateThreadData;
- (void)_updateSnippet;
- (void)_updateStatusImage;
- (BOOL)_messageHasAttachments:(id)arg1;
- (void)_updateAttachmentImages;
- (void)_updateReplyImages;
- (id)_initializeUnreadImages;
- (void)_updateUnreadImages;
- (void)_updateIsVIP;
- (void)_displayNameChanged:(id)arg1;
- (void)_photoAvailable:(id)arg1;
- (void)_updateContactPhotoVisibilityFromDefaults;
- (void)_vipSendersChanged:(id)arg1;
- (void)_updateSubject;
- (void)_updateDate;
- (void)_updateAddressee;
@property(nonatomic) BOOL showContactPhotos;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(nonatomic) unsigned long long photoSize; // @synthesize photoSize=_photoSize;
@property(nonatomic) BOOL showRecipient; // @synthesize showRecipient=_showRecipient;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSIndexSet *flagColors; // @synthesize flagColors=_flagColors;
@property(readonly, nonatomic) NSImage *photo;
@property(nonatomic) BOOL isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) __weak MFCriterion *mailboxCriterion; // @synthesize mailboxCriterion=_mailboxCriterion;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
- (void)update;
- (id)_todayDateFormatter;
- (id)_defaultDateFormatter;
- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;

@end

