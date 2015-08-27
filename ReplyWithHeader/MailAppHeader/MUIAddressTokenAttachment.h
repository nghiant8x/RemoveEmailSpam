#import <AppKit/NSTokenAttachment.h>

#import "QLPreviewMenuItemDelegate-Protocol.h"

@class NSString;

@interface MUIAddressTokenAttachment : NSTokenAttachment <QLPreviewMenuItemDelegate>
{
}

- (void)menuItemDidClose:(id)arg1;
- (unsigned long long)menuItem:(id)arg1 preferredEdgeForPoint:(struct CGPoint)arg2;
- (id)menuItem:(id)arg1 previewItemAtPoint:(struct CGPoint)arg2;
- (id)_dataDetectorsMenuItemWithView:(id)arg1;
- (id)_dataDetectorsActionContextWithView:(id)arg1;
- (struct CGRect)_frameInView:(id)arg1;
- (id)_quicklookMenuItem;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)arg1 inTextView:(id)arg2;
- (id)_representedEmailAddress;
- (id)_representedFullName;
- (id)_representedContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

