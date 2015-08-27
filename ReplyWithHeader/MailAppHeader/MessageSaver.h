#import <objc/NSObject.h>

#import "MCActivityTarget-Protocol.h"

@class NSArray, NSButton, NSPopUpButton, NSSavePanel, NSSet, NSString, NSURL, NSView, NSWindow;

@interface MessageSaver : NSObject <MCActivityTarget>
{
    BOOL _haveAttachments;	// 8 = 0x8
    BOOL _hideExtension;	// 9 = 0x9
    BOOL _includeAttachments;	// 10 = 0xa
    int _saveFormat;	// 12 = 0xc
    NSView *_accessoryView;	// 16 = 0x10
    NSPopUpButton *_formatPopup;	// 24 = 0x18
    NSButton *_includeAttachmentsSwitch;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
    NSSet *_stores;	// 48 = 0x30
    NSSavePanel *_savePanel;	// 56 = 0x38
    NSWindow *_window;	// 64 = 0x40
    NSURL *_saveDestination;	// 72 = 0x48
}

+ (void)saveMessages:(id)arg1 preferredFormat:(int)arg2 window:(id)arg3;
+ (void)initialize;
@property(nonatomic) int saveFormat; // @synthesize saveFormat=_saveFormat;
@property(nonatomic) BOOL includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(nonatomic) BOOL hideExtension; // @synthesize hideExtension=_hideExtension;
@property(nonatomic) BOOL haveAttachments; // @synthesize haveAttachments=_haveAttachments;
@property(retain, nonatomic) NSURL *saveDestination; // @synthesize saveDestination=_saveDestination;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak NSSavePanel *savePanel; // @synthesize savePanel=_savePanel;
@property(copy, nonatomic) NSSet *stores; // @synthesize stores=_stores;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak NSButton *includeAttachmentsSwitch; // @synthesize includeAttachmentsSwitch=_includeAttachmentsSwitch;
@property(nonatomic) __weak NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (id)_separator;
- (void)changeIncludeAttachments:(id)arg1;
- (void)changeFormat:(id)arg1;
- (void)_handleSaveError:(id)arg1;
- (void)_saveMessages;
- (void)_updateSavePanelUI;
- (void)_runSavePanel;
- (void)_runSavePanelForStationery;
- (void)_savePanelDidEndWithFileHandlingResult:(long long)arg1;
- (void)_setSaveFormat:(int)arg1;
- (void)_setMessages:(id)arg1;
- (void)saveMessagesWithoutPrompting:(id)arg1 toFilePath:(id)arg2 format:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

