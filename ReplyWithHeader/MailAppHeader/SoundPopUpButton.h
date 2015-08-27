#import <AppKit/NSPopUpButton.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSMutableArray, NSPanel, NSString, NSTableView;
@protocol SoundPopUpButtonDelegate;

@interface SoundPopUpButton : NSPopUpButton <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_userSounds;	// 184 = 0xb8
    BOOL _showNone;	// 192 = 0xc0
    BOOL _configured;	// 193 = 0xc1
    NSButton *_removeSoundButton;	// 200 = 0xc8
    NSTableView *_soundTableView;	// 208 = 0xd0
    NSPanel *_soundPanel;	// 216 = 0xd8
    id <SoundPopUpButtonDelegate> _delegate;	// 224 = 0xe0
}

@property(nonatomic) BOOL configured; // @synthesize configured=_configured;
@property(nonatomic) __weak id <SoundPopUpButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSPanel *soundPanel; // @synthesize soundPanel=_soundPanel;
@property(nonatomic) __weak NSTableView *soundTableView; // @synthesize soundTableView=_soundTableView;
@property(nonatomic) __weak NSButton *removeSoundButton; // @synthesize removeSoundButton=_removeSoundButton;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doneClicked:(id)arg1;
- (void)removeSoundClicked:(id)arg1;
- (void)addSoundClicked:(id)arg1;
- (void)_addRemoveMailSound:(id)arg1;
- (void)selectSoundPath:(id)arg1;
- (void)_playSound:(id)arg1;
@property(readonly, copy, nonatomic) NSString *selectedSoundPath;
@property(nonatomic) BOOL showNone;
- (void)_appendSoundsFromDirectories:(id)arg1;
- (void)configureSoundMenu;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_soundPopUpButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

