#import <objc/NSObject.h>

@interface CalendarBannerIconCreator : NSObject
{
}

+ (id)newCalendarBannerIconForDate:(id)arg1;
+ (void)drawBackgroundTileInRect:(struct CGRect)arg1 pathToBackground:(id)arg2 date:(id)arg3;
+ (id)monthStringAttributes;
+ (id)dateStringAttributes;

@end

