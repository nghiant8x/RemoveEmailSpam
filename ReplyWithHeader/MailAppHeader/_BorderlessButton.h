#import <AppKit/NSButton.h>

@class NSImage;

@interface _BorderlessButton : NSButton
{
    NSImage *_activeImage;	// 176 = 0xb0
    NSImage *_inactiveImage;	// 184 = 0xb8
}

@property(retain, nonatomic) NSImage *inactiveImage; // @synthesize inactiveImage=_inactiveImage;
@property(retain, nonatomic) NSImage *activeImage; // @synthesize activeImage=_activeImage;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isOpaque;

@end

