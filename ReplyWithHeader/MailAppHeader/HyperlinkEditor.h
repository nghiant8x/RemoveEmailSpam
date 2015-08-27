#import <objc/NSObject.h>

@class DOMHTMLAnchorElement, DOMNode, EditingMessageWebView, NSButton, NSPanel, NSString, NSTextField;

@interface HyperlinkEditor : NSObject
{
    NSPanel *_linkSheet;	// 8 = 0x8
    NSTextField *_linkTextField;	// 16 = 0x10
    NSButton *_okButton;	// 24 = 0x18
    NSButton *_removeButton;	// 32 = 0x20
    EditingMessageWebView *_webView;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    DOMHTMLAnchorElement *_selectedAnchor;	// 56 = 0x38
    DOMNode *_selectionContents;	// 64 = 0x40
    NSString *_replacementLink;	// 72 = 0x48
}

@property(copy, nonatomic) NSString *replacementLink; // @synthesize replacementLink=_replacementLink;
@property(retain, nonatomic) DOMNode *selectionContents; // @synthesize selectionContents=_selectionContents;
@property(retain, nonatomic) DOMHTMLAnchorElement *selectedAnchor; // @synthesize selectedAnchor=_selectedAnchor;
@property(readonly, nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak EditingMessageWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak NSTextField *linkTextField; // @synthesize linkTextField=_linkTextField;
@property(retain, nonatomic) NSPanel *linkSheet; // @synthesize linkSheet=_linkSheet;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)orderOutPanel:(id)arg1;
- (void)removeSelectedLink;
- (void)editLink;
- (id)initForWebView:(id)arg1 delegate:(id)arg2;

@end

