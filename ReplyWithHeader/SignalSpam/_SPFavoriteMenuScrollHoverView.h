//
//  _SPFavoriteMenuScrollHoverView.h
//  ReplyWithHeader
//
//  Created by Nong Trung Nghia on 8/28/15.
//
//

@interface _SPFavoriteMenuScrollHoverView : NSView

- (void)SPMouseExited:(id)arg1;
- (void)SPMouseEntered:(id)arg1;
- (void)SPDrawRect:(struct CGRect)arg1;
- (void)SPUpdateTrackingAreas;
- (void)SP_favoriteMenuScrollHoverViewCommonInitWithDirection:(long long)arg1;
- (id)SPInitWithCoder:(id)arg1;
- (id)SPInitWithFrame:(struct CGRect)arg1;
- (id)SPInitWithDirection:(long long)arg1;

@end
