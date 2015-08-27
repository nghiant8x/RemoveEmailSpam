#import <AppKit/NSTitlebarAccessoryViewController.h>

@class FavoritesBarView, MailBarContainerView;

@interface FavoritesBarViewController : NSTitlebarAccessoryViewController
{
    FavoritesBarView *_favoritesBarView;	// 160 = 0xa0
}

@property(nonatomic) __weak FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
- (void).cxx_destruct;
@property(retain) MailBarContainerView *view;

@end

