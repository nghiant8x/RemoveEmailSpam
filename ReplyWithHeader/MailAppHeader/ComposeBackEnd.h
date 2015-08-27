#import <objc/NSObject.h>

#import "ImageResizerDelegate-Protocol.h"
#import "MCActivityTarget-Protocol.h"
#import "NSStreamDelegate-Protocol.h"
#import "NSUserActivityDelegate-Protocol.h"

@class DOMNode, DocumentEditor, EditableWebMessageDocument, MCInvocationQueue, MCParsedMessage, MFMailAccount, MFMailbox, NSArray, NSInputStream, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableSet, NSNumber, NSOutputStream, NSPort, NSString, NSURL, NSUUID, NSUndoManager, NSUserActivity, StationeryController;

@interface ComposeBackEnd : NSObject <ImageResizerDelegate, MCActivityTarget, NSStreamDelegate, NSUserActivityDelegate>
{
    id _delegate;	// 8 = 0x8
    StationeryController *_stationeryController;	// 16 = 0x10
    NSArray *_originalMessages;	// 24 = 0x18
    NSMutableDictionary *_originalMessageHeaders;	// 32 = 0x20
    NSMutableDictionary *_originalMessageBodies;	// 40 = 0x28
    NSMutableDictionary *_cleanHeaders;	// 48 = 0x30
    NSMutableDictionary *_extraRecipients;	// 56 = 0x38
    NSMutableDictionary *_directoriesByAttachment;	// 64 = 0x40
    NSMutableSet *_knownMessageIds;	// 72 = 0x48
    unsigned long long _type;	// 80 = 0x50
    BOOL _hasChanges;	// 88 = 0x58
    BOOL _shouldDownloadRemoteAttachments;	// 89 = 0x59
    BOOL _overrideRemoteAttachmentsPreference;	// 90 = 0x5a
    NSMutableDictionary *_contentsByMessage;	// 96 = 0x60
    NSMutableDictionary *_attachmentMimeBodiesByURL;	// 104 = 0x68
    NSMutableArray *_resizers;	// 112 = 0x70
    NSMutableArray *_composeDataToStream;	// 120 = 0x78
    BOOL _includeHeaders;	// 128 = 0x80
    BOOL _signIfPossible;	// 129 = 0x81
    BOOL _encryptIfPossible;	// 130 = 0x82
    BOOL _isUndeliverable;	// 131 = 0x83
    BOOL _isDeliveringMessage;	// 132 = 0x84
    BOOL _willCloseEditor;	// 133 = 0x85
    BOOL _saveThreadCancelFlag;	// 134 = 0x86
    BOOL _editorHasInitialized;	// 135 = 0x87
    BOOL _hadChangesBeforeSave;	// 136 = 0x88
    BOOL _contentsWasEditedByUser;	// 137 = 0x89
    BOOL _isSettingSenderFromGetter;	// 138 = 0x8a
    BOOL _delegateRespondsToDidChange;	// 139 = 0x8b
    BOOL _delegateRespondsToSenderDidChange;	// 140 = 0x8c
    BOOL _delegateRespondsToDidAppendMessage;	// 141 = 0x8d
    BOOL _delegateRespondsToDidSaveMessage;	// 142 = 0x8e
    BOOL _delegateRespondsToDidBeginLoad;	// 143 = 0x8f
    BOOL _delegateRespondsToDidEndLoad;	// 144 = 0x90
    BOOL _delegateRespondsToWillCreateMessageWithHeaders;	// 145 = 0x91
    BOOL _delegateRespondsToShouldSaveMessage;	// 146 = 0x92
    BOOL _delegateRespondsToShouldDeliverMessage;	// 147 = 0x93
    BOOL _delegateRespondsToDidCancelMessageDeliveryForMissingCertificatesForRecipients;	// 148 = 0x94
    BOOL _delegateRespondsToDidCancelMessageDeliveryForEncryptionError;	// 149 = 0x95
    BOOL _delegateRespondsToDidCancelMessageDeliveryForError;	// 150 = 0x96
    BOOL _delegateRespondsToDidCancelMessageDeliveryForAttachmentError;	// 151 = 0x97
    BOOL _knowsCanSign;	// 152 = 0x98
    BOOL _canSign;	// 153 = 0x99
    BOOL _isEditing;	// 154 = 0x9a
    BOOL _isSendFormatInitialized;	// 155 = 0x9b
    BOOL _isAppleScriptMessage;	// 156 = 0x9c
    BOOL _sendAttachmentsViaMailDrop;	// 157 = 0x9d
    BOOL _attachmentUploadFailed;	// 158 = 0x9e
    NSString *_contentForContactsUpdate;	// 160 = 0xa0
    NSNumber *_uniqueID;	// 168 = 0xa8
    NSURL *_vcardFileForContactsUpdate;	// 176 = 0xb0
    NSString *_saveThreadMessageId;	// 184 = 0xb8
    MFMailbox *_saveThreadMailbox;	// 192 = 0xc0
    NSURL *_originalMessageBaseURL;	// 200 = 0xc8
    MCParsedMessage *_originalMessageParsedMessage;	// 208 = 0xd0
    EditableWebMessageDocument *_document;	// 216 = 0xd8
    NSUUID *_documentID;	// 224 = 0xe0
    NSUndoManager *_undoManager;	// 232 = 0xe8
    long long _composeMode;	// 240 = 0xf0
    MCParsedMessage *_initialParsedMessage;	// 248 = 0xf8
    NSArray *_generatedParsedMessages;	// 256 = 0x100
    DOMNode *_stationerySignatureNode;	// 264 = 0x108
    NSPort *_initializationPort;	// 272 = 0x110
    MCInvocationQueue *_saveQueue;	// 280 = 0x118
    MCParsedMessage *_restoredParsedMessage;	// 288 = 0x120
    long long _windowsFriendliness;	// 296 = 0x128
    unsigned long long _encodingHint;	// 304 = 0x130
    NSUserActivity *_activity;	// 312 = 0x138
    unsigned long long _composeDataOffset;	// 320 = 0x140
    unsigned long long _imagesToResize;	// 328 = 0x148
    NSPort *_resizePort;	// 336 = 0x150
    unsigned long long _imageArchiveSize;	// 344 = 0x158
    NSOutputStream *_outputStream;	// 352 = 0x160
    NSInputStream *_inputStream;	// 360 = 0x168
    unsigned long long _replyBytesRead;	// 368 = 0x170
    NSMutableData *_replyData;	// 376 = 0x178
    NSUUID *_placeholderMessageID;	// 384 = 0x180
    DocumentEditor *_documentEditor;	// 392 = 0x188
}

+ (id)keyPathsForValuesAffectingAccount;
+ (id)supportedMailboxTypes;
+ (void)initialize;
+ (id)composeBackEndsByUniqueID;
+ (id)_messageEditorForComposeBackEnd:(id)arg1 window:(id *)arg2;
+ (void)unregisterComposeBackEnd:(id)arg1;
+ (void)registerComposeBackEnd:(id)arg1;
+ (id)composeBackEndForUniqueID:(id)arg1;
@property(retain, nonatomic) DocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(retain, nonatomic) NSUUID *placeholderMessageID; // @synthesize placeholderMessageID=_placeholderMessageID;
@property(retain, nonatomic) NSMutableData *replyData; // @synthesize replyData=_replyData;
@property(nonatomic) unsigned long long replyBytesRead; // @synthesize replyBytesRead=_replyBytesRead;
@property __weak NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property __weak NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) BOOL attachmentUploadFailed; // @synthesize attachmentUploadFailed=_attachmentUploadFailed;
@property(nonatomic) unsigned long long imageArchiveSize; // @synthesize imageArchiveSize=_imageArchiveSize;
@property(readonly, nonatomic) NSPort *resizePort; // @synthesize resizePort=_resizePort;
@property unsigned long long imagesToResize; // @synthesize imagesToResize=_imagesToResize;
@property(nonatomic) unsigned long long composeDataOffset; // @synthesize composeDataOffset=_composeDataOffset;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) BOOL sendAttachmentsViaMailDrop; // @synthesize sendAttachmentsViaMailDrop=_sendAttachmentsViaMailDrop;
@property(nonatomic) unsigned long long encodingHint; // @synthesize encodingHint=_encodingHint;
@property(nonatomic) BOOL isAppleScriptMessage; // @synthesize isAppleScriptMessage=_isAppleScriptMessage;
@property(nonatomic) BOOL isSendFormatInitialized; // @synthesize isSendFormatInitialized=_isSendFormatInitialized;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) BOOL canSign; // @synthesize canSign=_canSign;
@property(nonatomic) BOOL knowsCanSign; // @synthesize knowsCanSign=_knowsCanSign;
@property(nonatomic) BOOL delegateRespondsToDidCancelMessageDeliveryForAttachmentError; // @synthesize delegateRespondsToDidCancelMessageDeliveryForAttachmentError=_delegateRespondsToDidCancelMessageDeliveryForAttachmentError;
@property(nonatomic) BOOL delegateRespondsToDidCancelMessageDeliveryForError; // @synthesize delegateRespondsToDidCancelMessageDeliveryForError=_delegateRespondsToDidCancelMessageDeliveryForError;
@property(nonatomic) BOOL delegateRespondsToDidCancelMessageDeliveryForEncryptionError; // @synthesize delegateRespondsToDidCancelMessageDeliveryForEncryptionError=_delegateRespondsToDidCancelMessageDeliveryForEncryptionError;
@property(nonatomic) BOOL delegateRespondsToDidCancelMessageDeliveryForMissingCertificatesForRecipients; // @synthesize delegateRespondsToDidCancelMessageDeliveryForMissingCertificatesForRecipients=_delegateRespondsToDidCancelMessageDeliveryForMissingCertificatesForRecipients;
@property(nonatomic) BOOL delegateRespondsToShouldDeliverMessage; // @synthesize delegateRespondsToShouldDeliverMessage=_delegateRespondsToShouldDeliverMessage;
@property(nonatomic) BOOL delegateRespondsToShouldSaveMessage; // @synthesize delegateRespondsToShouldSaveMessage=_delegateRespondsToShouldSaveMessage;
@property(nonatomic) BOOL delegateRespondsToWillCreateMessageWithHeaders; // @synthesize delegateRespondsToWillCreateMessageWithHeaders=_delegateRespondsToWillCreateMessageWithHeaders;
@property(nonatomic) BOOL delegateRespondsToDidEndLoad; // @synthesize delegateRespondsToDidEndLoad=_delegateRespondsToDidEndLoad;
@property(nonatomic) BOOL delegateRespondsToDidBeginLoad; // @synthesize delegateRespondsToDidBeginLoad=_delegateRespondsToDidBeginLoad;
@property(nonatomic) BOOL delegateRespondsToDidSaveMessage; // @synthesize delegateRespondsToDidSaveMessage=_delegateRespondsToDidSaveMessage;
@property(nonatomic) BOOL delegateRespondsToDidAppendMessage; // @synthesize delegateRespondsToDidAppendMessage=_delegateRespondsToDidAppendMessage;
@property(nonatomic) BOOL delegateRespondsToSenderDidChange; // @synthesize delegateRespondsToSenderDidChange=_delegateRespondsToSenderDidChange;
@property(nonatomic) BOOL delegateRespondsToDidChange; // @synthesize delegateRespondsToDidChange=_delegateRespondsToDidChange;
@property(nonatomic) long long windowsFriendliness; // @synthesize windowsFriendliness=_windowsFriendliness;
@property(nonatomic) BOOL isSettingSenderFromGetter; // @synthesize isSettingSenderFromGetter=_isSettingSenderFromGetter;
@property(retain, nonatomic) MCParsedMessage *restoredParsedMessage; // @synthesize restoredParsedMessage=_restoredParsedMessage;
@property(nonatomic) BOOL contentsWasEditedByUser; // @synthesize contentsWasEditedByUser=_contentsWasEditedByUser;
@property(nonatomic) BOOL hadChangesBeforeSave; // @synthesize hadChangesBeforeSave=_hadChangesBeforeSave;
@property(readonly, nonatomic) MCInvocationQueue *saveQueue; // @synthesize saveQueue=_saveQueue;
@property(nonatomic) BOOL editorHasInitialized; // @synthesize editorHasInitialized=_editorHasInitialized;
@property(readonly, nonatomic) NSPort *initializationPort; // @synthesize initializationPort=_initializationPort;
@property(retain, nonatomic) DOMNode *stationerySignatureNode; // @synthesize stationerySignatureNode=_stationerySignatureNode;
@property(copy, nonatomic) NSArray *generatedParsedMessages; // @synthesize generatedParsedMessages=_generatedParsedMessages;
@property(retain, nonatomic) MCParsedMessage *initialParsedMessage; // @synthesize initialParsedMessage=_initialParsedMessage;
@property(nonatomic) long long composeMode; // @synthesize composeMode=_composeMode;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property(retain, nonatomic) EditableWebMessageDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) MCParsedMessage *originalMessageParsedMessage; // @synthesize originalMessageParsedMessage=_originalMessageParsedMessage;
@property(retain, nonatomic) NSURL *originalMessageBaseURL; // @synthesize originalMessageBaseURL=_originalMessageBaseURL;
@property(retain) MFMailbox *saveThreadMailbox; // @synthesize saveThreadMailbox=_saveThreadMailbox;
@property(copy) NSString *saveThreadMessageId; // @synthesize saveThreadMessageId=_saveThreadMessageId;
@property BOOL saveThreadCancelFlag; // @synthesize saveThreadCancelFlag=_saveThreadCancelFlag;
@property(nonatomic) BOOL willCloseEditor; // @synthesize willCloseEditor=_willCloseEditor;
@property(nonatomic) BOOL isDeliveringMessage; // @synthesize isDeliveringMessage=_isDeliveringMessage;
@property(nonatomic) BOOL isUndeliverable; // @synthesize isUndeliverable=_isUndeliverable;
@property(nonatomic) BOOL encryptIfPossible; // @synthesize encryptIfPossible=_encryptIfPossible;
@property(nonatomic) BOOL signIfPossible; // @synthesize signIfPossible=_signIfPossible;
@property(nonatomic) BOOL includeHeaders; // @synthesize includeHeaders=_includeHeaders;
@property(retain, nonatomic) NSURL *vcardFileForContactsUpdate; // @synthesize vcardFileForContactsUpdate=_vcardFileForContactsUpdate;
@property(retain, nonatomic) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *contentForContactsUpdate; // @synthesize contentForContactsUpdate=_contentForContactsUpdate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)userActivity:(id)arg1 didReceiveInputStream:(id)arg2 outputStream:(id)arg3;
- (void)_markForOverwrite:(id)arg1;
- (void)_saveThreadSaveContents;
- (void)_saveThreadRemoveLastSave;
- (void)_saveThreadSetMessageId:(id)arg1 mailbox:(id)arg2 overwrite:(id)arg3;
- (void)_saveThreadUpdateAccount:(id)arg1 mailbox:(id)arg2;
- (BOOL)_saveThreadShouldCancel;
- (BOOL)isContentSignificant;
@property(readonly, nonatomic) BOOL isSavingMessage;
- (unsigned int)_convertSaveOrSendResultFromResultCodeT:(long long)arg1;
- (id)mailboxCreateIfNeeded:(BOOL)arg1;
- (id)_formattedAddressMatchingRawAddress:(id)arg1 inAccount:(id)arg2;
- (id)replyAddressForMessage:(id)arg1;
- (void)_saveRecipients;
- (void)_setupDefaultRecipientsFirstTime:(BOOL)arg1;
- (void)_ccOrBccMyselfGivenOriginalMessage:(id)arg1 uniquedRecipientsTable:(id)arg2;
- (BOOL)containsAttachmentsThatCouldConfuseWindowsClients;
- (BOOL)containsAttachments;
- (BOOL)attachmentCanBeSentInline:(id)arg1;
- (id)copyOfContentsForDraft:(BOOL)arg1 shouldBePlainText:(BOOL)arg2 isOkayToForceRichText:(BOOL)arg3 isMailDropPlaceholderMessage:(BOOL)arg4;
- (id)htmlDocumentForSave;
- (void)getContentsForMessage:(id)arg1 body:(id)arg2;
- (void)_recursivelyURLifyNode:(id)arg1;
- (void)addBaseURLTagToNode:(id)arg1;
- (id)_newPlainTextRepresentationIncludeAttachments:(BOOL)arg1;
- (id)htmlStringFromRange:(id)arg1 htmlDocument:(id)arg2 removeCustomAttributes:(BOOL)arg3 convertObjectsToImages:(BOOL)arg4 convertEditableElements:(BOOL)arg5;
- (id)newOutgoingMessageUsingWriter:(id)arg1 contents:(id)arg2 headers:(id)arg3 isDraft:(BOOL)arg4 shouldBePlainText:(BOOL)arg5;
- (id)userDefaultMessageFont;
- (BOOL)containsRichText;
- (BOOL)hasContents;
- (void)generateMessageParsedMessages;
- (void)fetchAndCacheMessages;
- (void)_notifyDelegateMonitor:(id)arg1 alreadyDone:(char *)arg2;
- (void)finishPreparingContentWithEditorSettings:(id)arg1;
- (void)updateSaveDestinationAccount:(id)arg1 mailbox:(id)arg2;
- (void)updateDocumentReference:(id)arg1;
- (void)_configureLastDraftInformationFromHeaders:(id)arg1 overwrite:(BOOL)arg2;
- (BOOL)_isValidSaveDestination:(id)arg1;
- (BOOL)canEncryptForRecipients:(id)arg1 sender:(id)arg2;
- (BOOL)canSignFromAddress:(id)arg1;
- (id)recipientsThatHaveNoKeyForEncryption;
- (id)allRecipients;
- (BOOL)isEditingMessage:(id)arg1;
- (void)removeLastDraft;
- (id)defaultMessageStore;
- (BOOL)saveMessage;
- (id)saveTaskName;
- (void)_backgroundSaveDidChangeMessageId:(id)arg1;
- (void)backgroundSaveEnded:(id)arg1;
- (void)_backgroundAppendEnded:(id)arg1;
- (void)_synchronouslyAppendMessageToOutboxWithContents:(id)arg1;
- (BOOL)deliverMessage;
- (void)imageResizer:(id)arg1 didFinishResizingWithResultCode:(long long)arg2;
- (void)_beginResizeOfImageAttachment:(id)arg1;
- (id)_createImageAttachmentRecordWithZoneID:(id)arg1 images:(id)arg2 error:(id *)arg3;
- (id)_newAttachmentRecordWithZoneID:(id)arg1 URL:(id)arg2 filesize:(id)arg3 filename:(id)arg4 mimeType:(id)arg5;
- (id)_createAttachmentRecordWithZoneID:(id)arg1 data:(id)arg2 filename:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_revertAttachments:(id)arg1 andExecuteBlock:(CDUnknownBlockType)arg2 withError:(id)arg3;
- (void)_uploadAttachments:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)isAddressHeaderKey:(id)arg1;
- (void)removeAddressForHeader:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertAddress:(id)arg1 forHeader:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setAddressList:(id)arg1 forHeader:(id)arg2;
- (id)addressListForHeader:(id)arg1;
- (void)_setStructuredList:(id)arg1 forHeader:(id)arg2;
- (id)_structuredListForHeader:(id)arg1;
- (void)addHeaders:(id)arg1;
- (long long)displayableMessagePriority;
- (void)setMessagePriority:(long long)arg1;
- (id)htmlStringForSignature:(id)arg1;
- (void)getSignatureElement:(id *)arg1 parent:(id *)arg2 nextSibling:(id *)arg3;
- (void)setSignature:(id)arg1;
- (id)signature;
- (id)signatureId;
- (BOOL)okToLetUserAddSignature;
- (BOOL)okToAddSignatureAutomatically;
- (id)messageID;
@property(retain, nonatomic) NSString *subject;
- (void)_setCleanHeaders:(id)arg1;
- (id)cleanHeaders;
@property(retain, nonatomic) NSString *sender;
- (void)setDeliveryAccount:(id)arg1;
- (id)deliveryAccount;
@property(retain, nonatomic) MFMailAccount *account;
- (id)message;
- (id)plainTextMessage;
- (id)_makeMessageWithContents:(id)arg1 isDraft:(BOOL)arg2 shouldSign:(BOOL)arg3 shouldEncrypt:(BOOL)arg4 shouldSkipSignature:(BOOL)arg5 shouldBePlainText:(BOOL)arg6;
- (unsigned long long)_encodingHint;
- (id)mimeBodyForAttachmentWithURL:(id)arg1;
- (id)_parsedMessageForMessage:(id)arg1;
- (void)_continueToSetupContentsForView:(id)arg1 withParsedMessages:(id)arg2;
@property(readonly, nonatomic) BOOL defaultFormatIsRich;
- (void)setupContentsForView:(id)arg1;
- (void)setTypeAndConfigureLoadingOfRemoteAttachments:(unsigned long long)arg1;
- (void)_configureLoadingOfRemoteAttachments;
- (void)_generateParsedMessageFromOriginalMessages;
- (BOOL)preserveAddedArchiveBody;
- (id)directoryForAttachment:(id)arg1;
- (id)attachments;
- (void)setOriginalMessages:(id)arg1;
- (id)_knownMessageIds;
- (id)originalMessageBody;
- (id)originalMessageHeaders;
- (void)setOriginalMessage:(id)arg1;
- (id)originalMessage;
- (void)setSendWindowsFriendlyAttachments:(BOOL)arg1;
- (BOOL)sendWindowsFriendlyAttachments;
- (void)setShouldDownloadRemoteAttachments:(BOOL)arg1;
- (BOOL)isRedirecting;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setHasChanges:(BOOL)arg1;
- (BOOL)hasChanges;
- (id)stationeryController;
- (BOOL)hasStationery;
@property(nonatomic) __weak id delegate;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)_editorHasInitialized:(id)arg1;
- (void)setStateFromBackEnd:(id)arg1;
- (void)_createUniqueID;
- (id)init;
- (id)initCreatingDocumentEditor:(BOOL)arg1;
- (void)dealloc;
- (void)setVcardFile:(id)arg1;
- (void)setHtmlContent:(id)arg1;
- (id)objectSpecifier;
- (id)handleCloseScriptCommand:(id)arg1;
- (id)handleSendMessageCommand:(id)arg1;
- (id)handleSaveMessageCommand:(id)arg1;
- (void)replaceFormattedAddress:(id)arg1 withAddress:(id)arg2 forKey:(id)arg3;
- (void)removeFromBccRecipientsAtIndex:(unsigned long long)arg1;
- (void)removeFromCcRecipientsAtIndex:(unsigned long long)arg1;
- (void)removeFromToRecipientsAtIndex:(unsigned long long)arg1;
- (void)insertInBccRecipients:(id)arg1;
- (void)insertInBccRecipients:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInCcRecipients:(id)arg1;
- (void)insertInCcRecipients:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInToRecipients:(id)arg1;
- (void)insertInToRecipients:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertRecipient:(id)arg1 atIndex:(unsigned long long)arg2 inHeaderWithKey:(id)arg3;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (id)recipients;
- (void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2;
- (void)setMessageSignature:(id)arg1;
- (id)messageSignature;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setAppleScriptSubject:(id)arg1;
- (id)appleScriptSubject;
- (void)setAppleScriptSender:(id)arg1;
- (id)appleScriptSender;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isVisible;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

