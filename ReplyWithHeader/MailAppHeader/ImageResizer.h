#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class MCActivityMonitor, NSData, NSString;
@protocol ImageResizerDelegate;

@interface ImageResizer : NSObject <MCActivityTarget>
{
    struct CGRect _maxBounds;	// 8 = 0x8
    unsigned int _sourceFileType;	// 40 = 0x28
    NSData *_sourceData;	// 48 = 0x30
    NSData *_resultData;	// 56 = 0x38
    NSString *_resultUTI;	// 64 = 0x40
    MCActivityMonitor *_monitor;	// 72 = 0x48
    id <ImageResizerDelegate> _delegate;	// 80 = 0x50
    id _representedObject;	// 88 = 0x58
    unsigned long long _maxFileBytes;	// 96 = 0x60
    struct CGSize _sourceSize;	// 104 = 0x68
    struct CGSize _resultImageSize;	// 120 = 0x78
}

+ (struct CGSize)scaleSize:(struct CGSize)arg1 toContainSize:(struct CGSize)arg2;
+ (struct CGSize)scaleSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
+ (BOOL)isFileResizableImage:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long maxFileBytes; // @synthesize maxFileBytes=_maxFileBytes;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak id <ImageResizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSString *resultUTI; // @synthesize resultUTI=_resultUTI;
@property(retain, nonatomic) NSData *resultImageData; // @synthesize resultImageData=_resultData;
@property(nonatomic) struct CGSize resultImageSize; // @synthesize resultImageSize=_resultImageSize;
@property(nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
@property(readonly, nonatomic) unsigned int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(readonly, copy, nonatomic) NSData *sourceData; // @synthesize sourceData=_sourceData;
- (void).cxx_destruct;
- (void)_resizeImage;
- (void)_didFinishResizingWithResultCode:(id)arg1;
- (unsigned int)resultFileType;
- (id)resultFileExtension;
- (void)cancel;
- (BOOL)isResizing;
- (void)resizeImage;
- (void)setMaxImageSize:(struct CGSize)arg1;
- (struct CGSize)maxImageSize;
- (id)init;
- (id)initWithImageData:(id)arg1 sourceFileType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

