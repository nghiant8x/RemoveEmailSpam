#import <AppKit/NSPopUpButton.h>

@class NSMenu, NSString, NSURL;

@interface AppleScriptPopUpButton : NSPopUpButton
{
    BOOL _amIAwake;	// 184 = 0xb8
    NSString *_previouslySelectedItem;	// 192 = 0xc0
    NSURL *_applicationScriptsDirectoryURL;	// 200 = 0xc8
    id _delegate;	// 208 = 0xd0
    NSMenu *_appleScriptFilesMenu;	// 216 = 0xd8
}

@property(nonatomic) BOOL amIAwake; // @synthesize amIAwake=_amIAwake;
@property(retain, nonatomic) NSMenu *appleScriptFilesMenu; // @synthesize appleScriptFilesMenu=_appleScriptFilesMenu;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *applicationScriptsDirectoryURL; // @synthesize applicationScriptsDirectoryURL=_applicationScriptsDirectoryURL;
@property(retain, nonatomic) NSString *previouslySelectedItem; // @synthesize previouslySelectedItem=_previouslySelectedItem;
- (void).cxx_destruct;
- (void)_invalidateAppleScriptFilesMenu;
- (void)_popupMenuChanged:(id)arg1;
- (void)resetPopUp;
- (id)selectedAppleScriptPath;
- (void)selectAppleScriptPath:(id)arg1;
- (void)_configureAppleScriptFilesMenu;
- (id)_appleScriptFilesFromMagicDirectory;
- (void)viewDidMoveToWindow;
- (id)menu;
- (void)dealloc;
- (void)awakeFromNib;

@end

