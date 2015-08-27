#import <objc/NSObject.h>

@class NSData, NSImage;

@interface StationeryCompositeImageMask : NSObject
{
    NSData *_maskImageData;	// 8 = 0x8
    NSImage *_maskImage;	// 16 = 0x10
    NSData *_placeholderImageData;	// 24 = 0x18
    NSImage *_placeholderImage;	// 32 = 0x20
    double _dropZoneAngle;	// 40 = 0x28
    struct CGSize _dropZoneOffset;	// 48 = 0x30
    struct CGSize _dropZoneSize;	// 64 = 0x40
}

@property(nonatomic) struct CGSize dropZoneSize; // @synthesize dropZoneSize=_dropZoneSize;
@property(nonatomic) double dropZoneAngle; // @synthesize dropZoneAngle=_dropZoneAngle;
@property(nonatomic) struct CGSize dropZoneOffset; // @synthesize dropZoneOffset=_dropZoneOffset;
- (void).cxx_destruct;
- (struct CGSize)actualMaskSize;
- (struct CGRect)dropZoneRect;
- (struct CGRect)dropZoneBoundingBox;
- (void)discardPlaceholderImage;
- (id)placeholderImage;
- (void)setPlaceholderImageData:(id)arg1;
- (id)maskImage;
- (void)setMaskImageData:(id)arg1;
- (BOOL)isValid;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end

