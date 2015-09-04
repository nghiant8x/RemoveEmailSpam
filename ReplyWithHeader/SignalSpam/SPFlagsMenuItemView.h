//
//  SPFlagsMenuItemView.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import <Cocoa/Cocoa.h>

@interface SPFlagsMenuItemView : NSView

- (void)SPSetEnabled:(BOOL)arg1;
- (void)SPViewDidMoveToWindow;
- (void)SPMouseUp:(id)arg1;
- (void)SPMouseExited:(id)arg1;
- (void)SPMouseEntered:(id)arg1;
- (void)SP_drawSelectedOutlineForView:(id)arg1;
- (id)SP_viewForFlagColor:(BOOL)arg1;
- (void)SPUpdateTrackingAreas;
- (void)SPAwakeFromNib;
- (void)SP_flagsMenuItemViewCommonInit;
- (id)SPInitWithCoder:(id)arg1;
- (id)SPInitWithFrame:(struct CGRect)arg1;

@end
