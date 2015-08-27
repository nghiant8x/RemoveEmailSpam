#import <AppKit/NSPreferencesModule.h>

#import "NSTableViewDataSource-Protocol.h"

@class NSButton, NSColorWell, NSMutableArray, NSPanel, NSPopUpButton, NSSegmentedControl, NSString, NSTableView;

@interface ViewerPreferences : NSPreferencesModule <NSTableViewDataSource>
{
    NSMutableArray *_filteredHeaders;	// 48 = 0x30
    BOOL _isEditingHeader;	// 56 = 0x38
    NSButton *_highlightThreadCheckbox;	// 64 = 0x40
    NSColorWell *_threadHighlightColorWell;	// 72 = 0x48
    NSButton *_loadURLsSwitch;	// 80 = 0x50
    NSButton *_showUnreadMessagesInBoldSwitch;	// 88 = 0x58
    NSButton *_useSmartAddressesSwitch;	// 96 = 0x60
    NSTableView *_customHeaderTable;	// 104 = 0x68
    NSSegmentedControl *_addRemoveHeaderControl;	// 112 = 0x70
    NSPanel *_customHeaderPanel;	// 120 = 0x78
    NSPopUpButton *_snippetLinesPopup;	// 128 = 0x80
    NSButton *_classicLayoutButton;	// 136 = 0x88
    NSButton *_toCcButton;	// 144 = 0x90
    NSButton *_contactPhotosButton;	// 152 = 0x98
    NSButton *_viewRelatedMessagesButton;	// 160 = 0xa0
    NSPopUpButton *_headerDetailPopup;	// 168 = 0xa8
}

+ (void)postSnippetLinesPreferenceChanged;
+ (void)postContactPhotoPreferenceChanged;
+ (void)_postToCcPreferenceChanged;
+ (void)postLayoutPreferenceChanged;
+ (void)postViewingPreferencesChanged;
@property(nonatomic) BOOL isEditingHeader; // @synthesize isEditingHeader=_isEditingHeader;
@property(nonatomic) __weak NSPopUpButton *headerDetailPopup; // @synthesize headerDetailPopup=_headerDetailPopup;
@property(nonatomic) __weak NSButton *viewRelatedMessagesButton; // @synthesize viewRelatedMessagesButton=_viewRelatedMessagesButton;
@property(nonatomic) __weak NSButton *contactPhotosButton; // @synthesize contactPhotosButton=_contactPhotosButton;
@property(nonatomic) __weak NSButton *toCcButton; // @synthesize toCcButton=_toCcButton;
@property(nonatomic) __weak NSButton *classicLayoutButton; // @synthesize classicLayoutButton=_classicLayoutButton;
@property(nonatomic) __weak NSPopUpButton *snippetLinesPopup; // @synthesize snippetLinesPopup=_snippetLinesPopup;
@property(retain, nonatomic) NSPanel *customHeaderPanel; // @synthesize customHeaderPanel=_customHeaderPanel;
@property(nonatomic) __weak NSSegmentedControl *addRemoveHeaderControl; // @synthesize addRemoveHeaderControl=_addRemoveHeaderControl;
@property(nonatomic) __weak NSTableView *customHeaderTable; // @synthesize customHeaderTable=_customHeaderTable;
@property(nonatomic) __weak NSButton *useSmartAddressesSwitch; // @synthesize useSmartAddressesSwitch=_useSmartAddressesSwitch;
@property(nonatomic) __weak NSButton *showUnreadMessagesInBoldSwitch; // @synthesize showUnreadMessagesInBoldSwitch=_showUnreadMessagesInBoldSwitch;
@property(nonatomic) __weak NSButton *loadURLsSwitch; // @synthesize loadURLsSwitch=_loadURLsSwitch;
@property(nonatomic) __weak NSColorWell *threadHighlightColorWell; // @synthesize threadHighlightColorWell=_threadHighlightColorWell;
@property(nonatomic) __weak NSButton *highlightThreadCheckbox; // @synthesize highlightThreadCheckbox=_highlightThreadCheckbox;
- (void).cxx_destruct;
- (void)viewRelatedMessagesClicked:(id)arg1;
- (void)contactPhotosClicked:(id)arg1;
- (void)toCcClicked:(id)arg1;
- (void)classicLayoutClicked:(id)arg1;
- (void)snippetLinesChanged:(id)arg1;
- (void)showUnreadMessagesInBoldChanged:(id)arg1;
- (void)threadHighlightColorChanged:(id)arg1;
- (void)highlightThreadClicked:(id)arg1;
- (void)headerDetailLevelChanged:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)addRemoveHeaderClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)_endEditingHeader;
- (void)_removeInvalidHeaders;
- (void)_headerTableEndedEditing:(id)arg1;
- (void)_headerTableBeganEditing:(id)arg1;
- (void)_editCustomHeadersClicked;
- (void)useSmartAddressesClicked:(id)arg1;
- (void)loadURLsClicked:(id)arg1;
- (void)initializeFromDefaults;
- (void)_updateCustomHeaderUI;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (BOOL)isResizable;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

