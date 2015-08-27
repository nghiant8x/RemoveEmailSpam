#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class CALayer, FavoritesBarView, MailBarContainerButton, MessageViewer, NSArray, NSButton, NSLayoutConstraint, NSStackView, NSString, _SidebarButton, _TopDividerLine;

@interface MailBarContainerView : NSView <NSAccessibilityGroup>
{
    BOOL _isVisible;	// 152 = 0x98
    BOOL _barWasHiddenBeforeSearch;	// 153 = 0x99
    BOOL _isSearchScopeViewVisible;	// 154 = 0x9a
    int _searchTarget;	// 156 = 0x9c
    MessageViewer *_messageViewer;	// 160 = 0xa0
    FavoritesBarView *_favoritesBarView;	// 168 = 0xa8
    _SidebarButton *_sidebarButton;	// 176 = 0xb0
    NSView *_searchScopeClipView;	// 184 = 0xb8
    NSStackView *_stackView;	// 192 = 0xc0
    NSStackView *_searchScopeView;	// 200 = 0xc8
    NSButton *_saveButton;	// 208 = 0xd0
    NSLayoutConstraint *_animationConstraint;	// 216 = 0xd8
    _TopDividerLine *_topDivider;	// 224 = 0xe0
    CALayer *_bottomDividerLayer;	// 232 = 0xe8
    MailBarContainerButton *_allButton;	// 240 = 0xf0
    MailBarContainerButton *_extraButton;	// 248 = 0xf8
}

@property(nonatomic) BOOL isSearchScopeViewVisible; // @synthesize isSearchScopeViewVisible=_isSearchScopeViewVisible;
@property(nonatomic) __weak MailBarContainerButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) __weak MailBarContainerButton *allButton; // @synthesize allButton=_allButton;
@property(nonatomic) __weak CALayer *bottomDividerLayer; // @synthesize bottomDividerLayer=_bottomDividerLayer;
@property(nonatomic) __weak _TopDividerLine *topDivider; // @synthesize topDivider=_topDivider;
@property(retain, nonatomic) NSLayoutConstraint *animationConstraint; // @synthesize animationConstraint=_animationConstraint;
@property(nonatomic) __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak NSStackView *searchScopeView; // @synthesize searchScopeView=_searchScopeView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak NSView *searchScopeClipView; // @synthesize searchScopeClipView=_searchScopeClipView;
@property(nonatomic) __weak _SidebarButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property(nonatomic) __weak FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
@property(nonatomic) BOOL barWasHiddenBeforeSearch; // @synthesize barWasHiddenBeforeSearch=_barWasHiddenBeforeSearch;
@property(nonatomic) int searchTarget; // @synthesize searchTarget=_searchTarget;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
- (BOOL)extraButtonsSelected;
- (void)scopeToAllMailboxes;
- (void)_saveButtonAction:(id)arg1;
@property(readonly, nonatomic) NSArray *scopeMailboxes;
- (void)_scopeChanged;
- (void)_scopeWillChange;
- (BOOL)isShowingSearchResults;
- (void)setCanSearchSelectedMailbox:(BOOL)arg1;
- (void)setCanSaveSearch:(BOOL)arg1;
- (void)clearSearchButtons;
- (void)_tearDown;
- (void)finishedShowHideAnimation;
- (void)_animateSearchScopeView:(BOOL)arg1;
- (void)_appearSearchScopeView:(BOOL)arg1;
- (void)setSearchScopeViewVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (id)_extraSearchButtonTitle;
- (void)_setupSearchScopeViewUI;
- (void)scopeButtonClicked:(id)arg1;
- (void)_toolbarVisibilityDidChange:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateLayer;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)updateConstraints;
- (void)awakeFromNib;
- (void)_mailBarContainerViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

