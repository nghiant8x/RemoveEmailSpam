//
//  SPMessageViewController.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 9/9/15.
//
//

#import <Cocoa/Cocoa.h>

@interface SPMessageViewController : NSViewController


+ (id)SPkeyPathsForValuesAffectingAlwaysShowMailboxName;
+ (id)SPkeyPathsForValuesAffectingLoaded;
+ (id)SPkeyPathsForValuesAffectingPageZoom;

- (BOOL)SPvalidateMenuItem:(id)arg1;
- (BOOL)SPvalidateToolbarItem:(id)arg1;
- (void)SPobserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)SPmenuNeedsUpdate:(id)arg1;
- (void)SPexportAttachments:(id)arg1;
- (void)SPquickLookAllAttachments:(id)arg1;
- (void)SPsaveAllAttachmentsWithoutPrompting:(id)arg1;
- (void)SPsaveAllAttachments:(id)arg1;
- (void)SPsaveAttachment:(id)arg1;
- (void)SPviewSource:(id)arg1;
- (void)SPshowMessageInMailbox:(id)arg1;
- (void)SPtoggleAllHeaders:(id)arg1;
- (void)SPforward:(id)arg1;
- (void)SPreplyAll:(id)arg1;
- (void)SPreply:(id)arg1;
- (void)SPdelete:(id)arg1;
- (id)SP_messageViewer;
- (void)SPmouseExited:(id)arg1;
- (void)SPmouseEntered:(id)arg1;
- (void)SP_updateHeaderMouseOver;
- (void)SP_updateAttachmentRollover;
- (void)SP_updateRolloverTrackingArea:(id)arg1;
- (void)SP_showLoadingProgress;
- (void)SP_updateWebDocumentView;
- (void)SPcursorUpdate:(id)arg1;

@end
