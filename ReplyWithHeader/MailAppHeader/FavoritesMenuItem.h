#import <AppKit/NSTableCellView.h>

@class NSImage, NSImageView;

@interface FavoritesMenuItem : NSTableCellView
{
    NSImageView *_menuStateImageView;	// 200 = 0xc8
    long long _indentationLevel;	// 208 = 0xd0
    NSImage *_image;	// 216 = 0xd8
    NSImage *_alternateImage;	// 224 = 0xe0
}

@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) __weak NSImageView *menuStateImageView; // @synthesize menuStateImageView=_menuStateImageView;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (double)preferredWidth;

@end

