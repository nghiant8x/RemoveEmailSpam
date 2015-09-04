//
//  SPFavoritesMenuOutlineView.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

#import <Cocoa/Cocoa.h>

@interface SPFavoritesMenuOutlineView : NSOutlineView

- (void)SPScrollWheel:(id)arg1;
- (void)SPMouseDown:(id)arg1;
- (void)SPMouseMoved:(id)arg1;
- (void)SPMouseExited:(id)arg1;
- (void)SPUpdateTrackingAreas;
- (void)SP_favoritesMenuOutlineViewCommonInitWithFrame:(struct CGRect)arg1;
- (id)SPInitWithCoder:(id)arg1;
- (id)SPInitWithFrame:(struct CGRect)arg1;

@end
