#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class EditableWebMessageDocument, NSArray, NSBitmapImageRep, NSString, NSWindow, Stationery, StationeryLoader, WebView;

@interface _StationeryThumbnailCreator : NSObject <MCActivityTarget>
{
    StationeryLoader *_delegate;	// 8 = 0x8
    NSArray *_stationeryPaths;	// 16 = 0x10
    unsigned long long _currentStationeryIndex;	// 24 = 0x18
    Stationery *_currentStationery;	// 32 = 0x20
    WebView *_webView;	// 40 = 0x28
    NSWindow *_window;	// 48 = 0x30
    EditableWebMessageDocument *_webMessageDocument;	// 56 = 0x38
    NSBitmapImageRep *_snapshot;	// 64 = 0x40
}

@property(retain, nonatomic) NSBitmapImageRep *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) EditableWebMessageDocument *webMessageDocument; // @synthesize webMessageDocument=_webMessageDocument;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) Stationery *currentStationery; // @synthesize currentStationery=_currentStationery;
@property(nonatomic) unsigned long long currentStationeryIndex; // @synthesize currentStationeryIndex=_currentStationeryIndex;
@property(copy, nonatomic) NSArray *stationeryPaths; // @synthesize stationeryPaths=_stationeryPaths;
@property(nonatomic) __weak StationeryLoader *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scaleSnapshotAndSendToDelegate;
- (void)takeSnapshot;
- (void)performTakeSnapshot;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)moveOnToTheNextStationery;
- (void)loadParsedMessage:(id)arg1;
- (void)createWebView;
- (void)createThumbnailsForCustomStationeriesWithPaths:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

