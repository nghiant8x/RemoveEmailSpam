#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString, StationeryCompositeImageView;

@interface StationeryCompositeImage : NSObject
{
    NSData *_baseImageData;	// 8 = 0x8
    NSData *_overlayImageData;	// 16 = 0x10
    NSMutableArray *_userImages;	// 24 = 0x18
    BOOL _isReadOnly;	// 32 = 0x20
    NSArray *_masks;	// 40 = 0x28
    StationeryCompositeImageView *_view;	// 48 = 0x30
    NSString *_contentID;	// 56 = 0x38
    NSString *_preferredFilename;	// 64 = 0x40
    unsigned long long _index;	// 72 = 0x48
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(copy, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) __weak StationeryCompositeImageView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *masks; // @synthesize masks=_masks;
- (void).cxx_destruct;
- (id)fileWrapper;
- (BOOL)isPlaceholder;
- (id)filename;
- (void)setFilename:(id)arg1;
- (unsigned long long)approximateSize;
- (id)filenameForCompositedImage;
- (id)mimeTypeForCompositedImage;
- (id)dataForCompositedImage;
- (unsigned long long)numberOfDropZones;
- (id)userImagesToSave;
- (id)userImages;
- (void)addUserImage:(id)arg1;
- (id)overlayImage;
- (void)setOverlayImageData:(id)arg1;
- (id)baseImage;
- (void)setBaseImageData:(id)arg1;
- (BOOL)isValid;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)init;

@end

