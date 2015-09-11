//
//  SPMessageViewer.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 9/7/15.
//
//


@interface SPMessageViewer : NSResponder

+ (id)SP_messageViewersByUniqueID;
+ (unsigned long long)SPdeleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2;
+ (id)SPmailboxesBeingViewed;
+ (void)SPshowAllViewers;
+ (id)SPallSingleMessageViewers;
+ (id)SPallMessageViewers;
+ (void)SPinitialize;
+ (id)SPmessageViewerForUniqueID:(id)arg1;
- (id)SP_selectedLabels;
- (BOOL)SPtransferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5 isArchiveOperation:(BOOL)arg6;
- (void)SP_synchronouslyMarkAsNotJunkMail:(id)arg1;
- (void)SP_markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2;
- (void)SPmarkAsNotJunkMail:(id)arg1;
- (void)SP_undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2;
- (void)SP_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3;
- (void)SPmarkAsJunkMail:(id)arg1;
- (void)SPreapplySortingRules:(id)arg1;
- (void)SPfilterMessagesToMoveOrDelete:(id)arg1;
- (BOOL)SPdeleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)SPmessagesWereSelected:(id)arg1 fromTableViewManager:(id)arg2;
- (void)SPcopyMessagesToMailbox:(id)arg1;
- (void)SPmoveMessagesToMailbox:(id)arg1;
- (void)SP_moveOrCopyMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (id)SP_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)SPforwardWithParentAsAttachment:(id)arg1;
- (void)SPforwardAsAttachment:(id)arg1;
- (void)SPforwardMessage:(id)arg1;
- (void)SPredirectMessage:(id)arg1;
- (void)SPselectAllMessages;
- (void)SP_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2;
- (void)SPopenMessages:(id)arg1;
- (void)SParchiveMessages:(id)arg1;
- (void)SPdeleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2;
- (void)SPdeleteMessages:(id)arg1;
- (void)SPundeleteMessages:(id)arg1;
- (void)SPreplyToOriginalSender:(id)arg1;
- (void)SPreplyAllMessage:(id)arg1;
- (void)SPreplyMessage:(id)arg1;
- (void)SPmarkAsUnreadFromToolbar:(id)arg1;
- (void)SPmarkAsReadFromToolbar:(id)arg1;
- (void)SPmarkAsUnread:(id)arg1;

- (void)SPkeyUp:(id)arg1;
- (void)SPkeyDown:(id)arg1;
- (void)SPselectMailbox:(id)arg1;
- (id)SPmessageSelection;
- (id)SPselectedMessages;
- (id)SPjunkMailbox;
- (id)SPtrashMailbox;
- (id)SPsentMailbox;
- (id)SPdraftsMailbox;
- (id)SPoutbox;
- (id)SPinbox;
- (void)SPsubmenuAction:(id)arg1;

- (void)SPsetSelectedMessages:(id)arg1;


@end
