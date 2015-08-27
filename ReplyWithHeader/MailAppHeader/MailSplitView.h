#import <AppKit/NSSplitView.h>

@class NSString;

@interface MailSplitView : NSSplitView
{
    long long _dividerToolTipTag;	// 160 = 0xa0
    NSString *_toolTipString;	// 168 = 0xa8
    BOOL _isDividerHidden;	// 176 = 0xb0
    NSString *_oldAutosaveName;	// 184 = 0xb8
}

@property(nonatomic) BOOL isDividerHidden; // @synthesize isDividerHidden=_isDividerHidden;
@property(copy, nonatomic) NSString *oldAutosaveName; // @synthesize oldAutosaveName=_oldAutosaveName;
- (void).cxx_destruct;
- (double)dividerThickness;
- (id)dividerColor;
- (struct CGRect)_dividerRect;
- (void)setDividerToolTip:(id)arg1;
- (BOOL)isFirstViewVisible;
- (BOOL)isSecondViewVisible;
- (BOOL)_isSubviewAtIndexVisible:(unsigned long long)arg1;
- (id)accessibilityHelp;
- (void)setAutosaveName:(id)arg1;
- (void)_windowLayoutDidExitFullScreen:(id)arg1;
- (void)_windowLayoutWillExitFullScreen:(id)arg1;
- (void)_windowLayoutDidEnterFullScreen:(id)arg1;
- (void)_windowLayoutWillEnterFullScreen:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;

@end

