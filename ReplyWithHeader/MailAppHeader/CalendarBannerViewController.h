#import "BannerViewController.h"

@class NSButton, NSTextField;

@interface CalendarBannerViewController : BannerViewController
{
    NSTextField *_eventTitle;	// 104 = 0x68
    NSTextField *_eventTime;	// 112 = 0x70
    NSButton *_openCalendarButton;	// 120 = 0x78
}

+ (id)keyPathsForValuesAffectingShouldHideMeetingCancellationOKButton;
+ (id)keyPathsForValuesAffectingShouldHideMeetingRequestButtons;
@property(nonatomic) __weak NSButton *openCalendarButton; // @synthesize openCalendarButton=_openCalendarButton;
@property(nonatomic) __weak NSTextField *eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) __weak NSTextField *eventTitle; // @synthesize eventTitle=_eventTitle;
- (void).cxx_destruct;
- (id)_dateStringForEvent:(id)arg1;
- (id)_titleForEvent:(id)arg1;
- (id)_eventForCurrentMessage;
- (void)openInCalendar:(id)arg1;
- (void)sendMeetingResponse:(id)arg1;
@property(readonly, nonatomic) BOOL shouldHideMeetingCancellationOKButton;
@property(readonly, nonatomic) BOOL shouldHideMeetingRequestButtons;
- (void)updateBannerContents;
- (void)updateWantsDisplay;
- (double)bannerHeight;
- (id)backgroundColor;
- (id)nibName;

@end

