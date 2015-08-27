#import <AppKit/NSFontManager.h>

@interface _MailNSFontManager : NSFontManager
{
    BOOL _isMultiple;	// 96 = 0x60
    double _fontSize;	// 104 = 0x68
}

@property(nonatomic) BOOL isMultiple; // @synthesize isMultiple=_isMultiple;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)convertFont:(id)arg1;
- (unsigned long long)currentFontAction;
- (void)modifyFontSize:(double)arg1;
- (void)setSelectedFont:(id)arg1 isMultiple:(BOOL)arg2;
- (void)_postSelectedFontChangeNotification;

@end

