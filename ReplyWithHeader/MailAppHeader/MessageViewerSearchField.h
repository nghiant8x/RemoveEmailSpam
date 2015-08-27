#import <Suggestions/SGTSearchField.h>

@protocol MessageViewerSearchFieldFocusDelegate;

@interface MessageViewerSearchField : SGTSearchField
{
    BOOL _focused;	// 224 = 0xe0
    id <MessageViewerSearchFieldFocusDelegate> _focusDelegate;	// 232 = 0xe8
}

@property(nonatomic) __weak id <MessageViewerSearchFieldFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
- (void).cxx_destruct;
@property(nonatomic) BOOL focused;
- (void)windowDidResignKey:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (void)dealloc;
- (void)_messageViewerSearchFieldCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

