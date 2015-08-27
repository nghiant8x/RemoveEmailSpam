#import <AppKit/NSToolbarItem.h>

@class NSImage;

@interface BorderlessToolbarItem : NSToolbarItem
{
    double _width;	// 152 = 0x98
}

@property(retain, nonatomic) NSImage *pressedImage;
@property(retain, nonatomic) NSImage *inactiveImage;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setLabel:(id)arg1;
- (id)control;
- (void)validate;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
@property(nonatomic) double width;
- (id)initWithItemIdentifier:(id)arg1;

@end

