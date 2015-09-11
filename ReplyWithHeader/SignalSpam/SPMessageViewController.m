//
//  SPMessageViewController.m
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 9/9/15.
//
//

#import "SPMessageViewController.h"


@implementation SPMessageViewController

+ (id)SPkeyPathsForValuesAffectingAlwaysShowMailboxName{
    MLogString(@"")
    id result = [self SPkeyPathsForValuesAffectingAlwaysShowMailboxName];
    return result;
}

+ (id)SPkeyPathsForValuesAffectingLoaded{
    MLogString(@"");
    id result = [self SPkeyPathsForValuesAffectingLoaded];
    return result;
}

+ (id)SPkeyPathsForValuesAffectingPageZoom{
    MLogString(@"");
    id result = [self SPkeyPathsForValuesAffectingPageZoom];
    return result;
}

- (BOOL)SPvalidateMenuItem:(id)arg1{
    MLogString(@"%@",arg1);
    BOOL result = [self SPvalidateMenuItem:arg1];
    return result;
}

- (BOOL)SPvalidateToolbarItem:(id)arg1{
    MLogString(@"%@",arg1);
    BOOL result = [self SPvalidateToolbarItem:arg1];
    return result;
}

- (void)SPobserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4{
    MLogString(@"%@",arg1);
    [self SPobserveValueForKeyPath:arg1 ofObject:arg2 change:arg3 context:arg4];

}

- (void)SPmenuNeedsUpdate:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmenuNeedsUpdate:arg1];

}

- (void)SPexportAttachments:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPexportAttachments:arg1];

}

- (void)SPquickLookAllAttachments:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPquickLookAllAttachments:arg1];

}

- (void)SPsaveAllAttachmentsWithoutPrompting:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsaveAllAttachmentsWithoutPrompting:arg1];

}

- (void)SPsaveAllAttachments:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsaveAllAttachments:arg1];

}

- (void)SPsaveAttachment:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPsaveAttachment:arg1];

}

- (void)SPviewSource:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPviewSource:arg1];

}

- (void)SPshowMessageInMailbox:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPshowMessageInMailbox:arg1];

}

- (void)SPtoggleAllHeaders:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPtoggleAllHeaders:arg1];

}

- (void)SPforward:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPforward:arg1];

}

- (void)SPreplyAll:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreplyAll:arg1];

}

- (void)SPreply:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPreply:arg1];

}

- (void)SPdelete:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPdelete:arg1];

}

- (id)SP_messageViewer{
    MLogString(@"");
    id result = [self SP_messageViewer];
    return result;
}

- (void)SPmouseExited:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmouseExited:arg1];

}

- (void)SPmouseEntered:(id)arg1{
    MLogString(@"%@",arg1);
    [self SPmouseEntered:arg1];

}

- (void)SP_updateHeaderMouseOver{
    MLogString(@"");
    [self SP_updateHeaderMouseOver];

}

- (void)SP_updateAttachmentRollover{
    MLogString(@"");
    [self SP_updateAttachmentRollover];

}

- (void)SP_updateRolloverTrackingArea:(id)arg1{
    MLogString(@"%@",arg1);
    [self SP_updateRolloverTrackingArea:arg1];

}

- (void)SP_showLoadingProgress{
    MLogString(@"");
    [self SP_showLoadingProgress];
}

- (void)SP_updateWebDocumentView{
    MLogString(@"");
    [self SP_updateWebDocumentView];

}

- (void)SPcursorUpdate:(id)arg1{
    MLogString(@"");
    [self SPcursorUpdate:arg1];

}


@end
