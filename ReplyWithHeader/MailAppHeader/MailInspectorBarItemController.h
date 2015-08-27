#import <objc/NSObject.h>

#import "NSInspectorBarDelegate-Protocol.h"
#import "NSInspectorBarItemController-Protocol.h"

@class NSInspectorBar, NSPopUpButton, NSSegmentedControl, NSString, NSView;

@interface MailInspectorBarItemController : NSObject <NSInspectorBarDelegate, NSInspectorBarItemController>
{
    NSView *_view;	// 8 = 0x8
    NSInspectorBar *_inspectorBar;	// 16 = 0x10
    NSPopUpButton *_fontSizePopUpButton;	// 24 = 0x18
    NSPopUpButton *_listPopUpButton;	// 32 = 0x20
    NSPopUpButton *_indentationPopUpButton;	// 40 = 0x28
    NSSegmentedControl *_textAlignmentSegmentedControl;	// 48 = 0x30
}

+ (id)keyForItemIdentifier:(id)arg1;
+ (id)loadedNib;
+ (id)supportedInspectorItemIdentifiers;
@property(nonatomic) __weak NSSegmentedControl *textAlignmentSegmentedControl; // @synthesize textAlignmentSegmentedControl=_textAlignmentSegmentedControl;
@property(nonatomic) __weak NSPopUpButton *indentationPopUpButton; // @synthesize indentationPopUpButton=_indentationPopUpButton;
@property(nonatomic) __weak NSPopUpButton *listPopUpButton; // @synthesize listPopUpButton=_listPopUpButton;
@property(nonatomic) __weak NSPopUpButton *fontSizePopUpButton; // @synthesize fontSizePopUpButton=_fontSizePopUpButton;
@property(nonatomic) __weak NSInspectorBar *inspectorBar; // @synthesize inspectorBar=_inspectorBar;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)viewForInspectorBarItem:(id)arg1;
- (id)inspectorBar:(id)arg1 itemForIdentifier:(id)arg2;
- (void)changeTextAlignment:(id)arg1;
- (void)changeFontSize:(id)arg1;
- (void)removePlaceholderFontSize;
- (void)selectFontSize:(double)arg1;
- (void)selectedFontDidChange:(id)arg1;
- (id)newMenuItemForFontSize:(double)arg1;
- (void)loadNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

