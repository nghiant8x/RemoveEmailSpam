#import <Foundation/NSOperation.h>

@class NSData, NSInvocation, NSURLRequest, WebView;

@interface WebViewLoadOperation : NSOperation
{
    BOOL _isExecuting;	// 24 = 0x18
    BOOL _isFinished;	// 25 = 0x19
    WebView *_webView;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    NSURLRequest *_urlRequest;	// 48 = 0x30
    NSInvocation *_loadInvocation;	// 56 = 0x38
    NSInvocation *_didLoadInvocation;	// 64 = 0x40
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly, nonatomic) NSInvocation *didLoadInvocation; // @synthesize didLoadInvocation=_didLoadInvocation;
@property(readonly, nonatomic) NSInvocation *loadInvocation; // @synthesize loadInvocation=_loadInvocation;
@property(readonly, copy, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_webViewDidLoad:(id)arg1;
- (void)_end;
- (void)cancel;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_webViewLoadOperationCommonInitWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2 didLoadInvocation:(id)arg3;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2;
- (id)initWithWebView:(id)arg1 urlRequest:(id)arg2;
- (id)initWithWebView:(id)arg1 data:(id)arg2;

@end

