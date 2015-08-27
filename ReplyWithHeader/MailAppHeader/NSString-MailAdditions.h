#import <Foundation/NSString.h>

@interface NSString (MailAdditions)
- (BOOL)matchesLocalizedDateIntervalFrom:(id *)arg1 to:(id *)arg2;
- (BOOL)doesMatchLocalizedDateName:(id)arg1;
- (void)drawEtchedInRect:(struct CGRect)arg1 withTopColor:(id)arg2 bottomColor:(id)arg3 shadowBelow:(BOOL)arg4 font:(id)arg5 centered:(BOOL)arg6 flipped:(BOOL)arg7 truncate:(BOOL)arg8;
- (void)_drawInRect:(struct CGRect)arg1 font:(id)arg2 color:(id)arg3 truncate:(BOOL)arg4;
@end

