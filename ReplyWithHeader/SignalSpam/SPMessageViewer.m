//
//  SPMessageViewer.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 9/7/15.
//
//

#import "SPMessageViewer.h"

@implementation SPMessageViewer

+ (id)SP_messageViewersByUniqueID{
    MLogString(@"");

    id result = [self SP_messageViewersByUniqueID];
    return result;
}

+ (unsigned long long)SPdeleteOperationForEvent:(id)arg1 isKeyPressed:(BOOL)arg2{
    MLogString(@"%@",arg1);

    long result = [self SPdeleteOperationForEvent:arg1 isKeyPressed:arg2];
    return result;
}

+ (id)SPmailboxesBeingViewed{
    MLogString(@"");

    id result = [self SPmailboxesBeingViewed];
    return result;
}

+ (void)SPshowAllViewers{
    MLogString(@"");

    [self SPshowAllViewers];
}

+ (id)SPallSingleMessageViewers{
    MLogString(@"");

    id result = [self SPallSingleMessageViewers];
    return result;
}

+ (id)SPallMessageViewers{
    MLogString(@"");

    id result = [self SPallMessageViewers];
    return result;
}

+ (void)SPinitialize{
    MLogString(@"");

    [self SPinitialize];
}

+ (id)SPmessageViewerForUniqueID:(id)arg1{
    MLogString(@"%@",arg1);

    id result = [self SPmessageViewerForUniqueID:arg1];
    return result;
}

- (id)SP_selectedLabels{
    MLogString(@"");

    id result = [self SP_selectedLabels];
    return result;
}

- (BOOL)SPtransferMessages:(id)arg1 toMailbox:(id)arg2 deleteOriginals:(BOOL)arg3 allowUndo:(BOOL)arg4 isDeleteOperation:(BOOL)arg5 isArchiveOperation:(BOOL)arg6{
    MLogString(@"%@",arg1);

    BOOL result = [self SPtransferMessages:arg1 toMailbox:arg2 deleteOriginals:arg3 allowUndo:arg4 isDeleteOperation:arg5 isArchiveOperation:arg6];
    return result;
}

- (void)SP_synchronouslyMarkAsNotJunkMail:(id)arg1{
    MLogString(@"%@",arg1);

    [self SP_synchronouslyMarkAsNotJunkMail:arg1];
}

- (void)SP_markMessagesAsNotJunkMail:(id)arg1 stores:(id)arg2{
    MLogString(@"%@",arg1);

    [self SP_markMessagesAsNotJunkMail:arg1 stores:arg2];
}

- (void)SPmarkAsNotJunkMail:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPmarkAsNotJunkMail:arg1];
}

- (void)SP_undoMarkMessagesAsJunkMail:(id)arg1 stores:(id)arg2{
    MLogString(@"%@",arg1);

    [self SP_undoMarkMessagesAsJunkMail:arg1 stores:arg2];
}

- (void)SP_deleteJunkedMessages:(id)arg1 inStores:(id)arg2 moveToTrash:(BOOL)arg3{
    MLogString(@"%@",arg1);

    [self SP_deleteJunkedMessages:arg1 inStores:arg2 moveToTrash:arg3];
}

- (void)SPmarkAsJunkMail:(id)arg1{
    //Tommy: Mark As Junk Mail
    MLogString(@"%@",arg1);

    [self SPmarkAsJunkMail:arg1];
}

- (void)SPmarkAsUnreadFromToolbar:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPmarkAsUnreadFromToolbar:arg1];

}
- (void)SPmarkAsReadFromToolbar:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPmarkAsReadFromToolbar:arg1];

}
- (void)SPmarkAsUnread:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPmarkAsUnread:arg1];

}

- (void)SPreapplySortingRules:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPreapplySortingRules:arg1];
}

- (void)SPfilterMessagesToMoveOrDelete:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPfilterMessagesToMoveOrDelete:arg1];
}

- (BOOL)SPdeleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3{
    MLogString(@"%@",arg1);

    BOOL result = [self SPdeleteMessages:arg1 allowMoveToTrash:arg2 allowUndo:arg3];
    return result;
}

- (void)SPmessagesWereSelected:(id)arg1 fromTableViewManager:(id)arg2{
    //Tommy: Get ID and Subject when select a mail
    MLogString(@"%@",arg1);

    [self SPmessagesWereSelected:arg1 fromTableViewManager:arg2];
}

- (void)SPcopyMessagesToMailbox:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPcopyMessagesToMailbox:arg1];
}

- (void)SPmoveMessagesToMailbox:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPmoveMessagesToMailbox:arg1];
}

- (void)SP_moveOrCopyMessagesToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2{
    MLogString(@"%@",arg1);

    [self SP_moveOrCopyMessagesToMailbox:arg1 deleteOriginals:arg2];
}

- (id)SP_displaySelectedMessageInSeparateWindow:(id)arg1 withModifiers:(unsigned long long)arg2{
    MLogString(@"%@",arg1);

    id result = [self SP_displaySelectedMessageInSeparateWindow:arg1 withModifiers:arg2];
    return result;
}

- (void)SPforwardWithParentAsAttachment:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPforwardWithParentAsAttachment:arg1];
}

- (void)SPforwardAsAttachment:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPforwardAsAttachment:arg1];
}

- (void)SPforwardMessage:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPforwardMessage:arg1];
}

- (void)SPredirectMessage:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPredirectMessage:arg1];
}

- (void)SPselectAllMessages{
    MLogString(@"");

    [self SPselectAllMessages];
}

- (void)SP_openMessages:(id)arg1 withModifiers:(unsigned long long)arg2{
    MLogString(@"%@",arg1);

    [self SP_openMessages:arg1 withModifiers:arg2];
}

- (void)SPopenMessages:(id)arg1{
    //Tommy: Open messages
    MLogString(@"%@",arg1);

    [self SPopenMessages:arg1];
}

- (void)SParchiveMessages:(id)arg1{
    MLogString(@"%@",arg1);

    [self SParchiveMessages:arg1];
}

- (void)SPdeleteMessages:(id)arg1 allowingMoveToTrash:(BOOL)arg2{
    MLogString(@"%@",arg1);

    [self SPdeleteMessages:arg1 allowingMoveToTrash:arg2];
}

- (void)SPdeleteMessages:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPdeleteMessages:arg1];
}

- (void)SPundeleteMessages:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPundeleteMessages:arg1];
}

- (void)SPreplyToOriginalSender:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPreplyToOriginalSender:arg1];
}

- (void)SPreplyAllMessage:(id)arg1{
    //Tommy: Reply all Messages
    MLogString(@"%@",arg1);

    [self SPreplyAllMessage:arg1];
}

- (void)SPreplyMessage:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPreplyMessage:arg1];
}

- (void)SPkeyUp:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPkeyUp:arg1];
}

- (void)SPkeyDown:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPkeyDown:arg1];
}

- (void)SPselectMailbox:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPselectMailbox:arg1];
}

- (id)SPmessageSelection{
    MLogString(@"");

    id result = [self SPmessageSelection];
    return result;
}

- (id)SPselectedMessages{
    MLogString(@"");

    id result = [self SPselectedMessages];
    return result;
}

- (id)SPjunkMailbox{
    MLogString(@"");

    id result = [self SPjunkMailbox];
    return result;
}

- (id)SPtrashMailbox{
    MLogString(@"");

    id result = [self SPtrashMailbox];
    return result;
}

- (id)SPsentMailbox{
    MLogString(@"");

    id result = [self SPsentMailbox];
    return result;
}

- (id)SPdraftsMailbox{
    MLogString(@"");

    id result = [self SPdraftsMailbox];
    return result;
}

- (id)SPoutbox{
    MLogString(@"");

    id result = [self SPoutbox];
    return result;
}

- (id)SPinbox{
    MLogString(@"");

    id result = [self SPinbox];
    return result;
}

- (void)SPsubmenuAction:(id)arg1{
    MLogString(@"%@",arg1);

    [self SPsubmenuAction:arg1];
}

- (void)SPsetSelectedMessages:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsetSelectedMessages:arg1];

}


@end
