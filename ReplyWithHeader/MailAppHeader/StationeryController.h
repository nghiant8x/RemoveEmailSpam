#import <objc/NSObject.h>

@class ComposeBackEnd, EditableWebMessageDocument, EditingMessageWebView, NSMutableArray, NSMutableDictionary, NSString, NSTimer, Stationery;

@interface StationeryController : NSObject
{
    Stationery *_stationery;	// 8 = 0x8
    BOOL _stationeryLoaded;	// 16 = 0x10
    NSString *_currentColor;	// 24 = 0x18
    ComposeBackEnd *_composeBackEnd;	// 32 = 0x20
    NSMutableDictionary *_fontElementsWithColors;	// 40 = 0x28
    NSMutableArray *_colorsThatHaveBeenDisplayed;	// 48 = 0x30
    BOOL _isLoadingStationery;	// 56 = 0x38
    BOOL _isChangingStationeryColor;	// 57 = 0x39
    BOOL _isLoadingResources;	// 58 = 0x3a
    BOOL _shouldAnimateTransitions;	// 59 = 0x3b
    EditingMessageWebView *_webView;	// 64 = 0x40
    double _letterTopMargin;	// 72 = 0x48
    double _letterWidth;	// 80 = 0x50
    id _savedResourceLoadDelegate;	// 88 = 0x58
    id _savedFrameLoadDelegate;	// 96 = 0x60
    long long _numberOfResourcesNotYetLoaded;	// 104 = 0x68
    EditableWebMessageDocument *_messageDocument;	// 112 = 0x70
    NSTimer *_flushWindowTimer;	// 120 = 0x78
}

@property(retain, nonatomic) NSTimer *flushWindowTimer; // @synthesize flushWindowTimer=_flushWindowTimer;
@property(retain, nonatomic) EditableWebMessageDocument *messageDocument; // @synthesize messageDocument=_messageDocument;
@property(nonatomic) BOOL shouldAnimateTransitions; // @synthesize shouldAnimateTransitions=_shouldAnimateTransitions;
@property(nonatomic) BOOL isLoadingResources; // @synthesize isLoadingResources=_isLoadingResources;
@property(nonatomic) BOOL isChangingStationeryColor; // @synthesize isChangingStationeryColor=_isChangingStationeryColor;
@property(nonatomic) BOOL isLoadingStationery; // @synthesize isLoadingStationery=_isLoadingStationery;
@property(nonatomic) long long numberOfResourcesNotYetLoaded; // @synthesize numberOfResourcesNotYetLoaded=_numberOfResourcesNotYetLoaded;
@property(retain, nonatomic) id savedFrameLoadDelegate; // @synthesize savedFrameLoadDelegate=_savedFrameLoadDelegate;
@property(retain, nonatomic) id savedResourceLoadDelegate; // @synthesize savedResourceLoadDelegate=_savedResourceLoadDelegate;
@property(nonatomic) double letterWidth; // @synthesize letterWidth=_letterWidth;
@property(nonatomic) double letterTopMargin; // @synthesize letterTopMargin=_letterTopMargin;
@property(retain, nonatomic) EditingMessageWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)stationeryFromCurrentMessageError:(id *)arg1;
- (void)changeStationeryColor:(id)arg1;
- (void)userClickedOnStationeryBackground:(id)arg1;
- (void)_webViewDidFinishLoadingAllResources;
- (void)_timerDidFire:(id)arg1;
- (void)webView:(id)arg1 didLoadResourceFromMemoryCache:(id)arg2 response:(id)arg3 length:(long long)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)_finishLoadingStationery;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)loadStationery:(id)arg1;
- (void)showColorOptions;
- (void)setColor:(id)arg1;
- (id)color;
@property(nonatomic) BOOL stationeryLoaded;
@property(retain, nonatomic) Stationery *stationery;
@property(nonatomic) __weak ComposeBackEnd *composeBackEnd;
- (BOOL)isUpdatingWebView;

@end

