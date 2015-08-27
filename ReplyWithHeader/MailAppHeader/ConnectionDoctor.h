#import <objc/NSObject.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"
#import "MCConnectionLogging-Protocol.h"

@class AccountStatusDataSource, NSButton, NSDrawer, NSImageView, NSMutableString, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTextView, NSView, NSWindow;

@interface ConnectionDoctor : NSObject <AccountStatusDataSourceDelegate, MCConnectionLogging>
{
    NSMutableString *_detailBuffer;	// 8 = 0x8
    NSWindow *_window;	// 16 = 0x10
    NSTableView *_tableView;	// 24 = 0x18
    NSImageView *_internetStatusIndicator;	// 32 = 0x20
    NSProgressIndicator *_internetStatusProgressIndicator;	// 40 = 0x28
    NSTextField *_internetStatusField;	// 48 = 0x30
    NSButton *_checkStatusButton;	// 56 = 0x38
    NSButton *_assistMeButton;	// 64 = 0x40
    NSTextView *_ispInfoField;	// 72 = 0x48
    NSDrawer *_detailDrawer;	// 80 = 0x50
    NSButton *_detailButton;	// 88 = 0x58
    NSView *_detailView;	// 96 = 0x60
    NSTextView *_detailTextView;	// 104 = 0x68
    AccountStatusDataSource *_deliveryASDS;	// 112 = 0x70
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(nonatomic) NSTextView *detailTextView; // @synthesize detailTextView=_detailTextView;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak NSButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) NSDrawer *detailDrawer; // @synthesize detailDrawer=_detailDrawer;
@property(nonatomic) NSTextView *ispInfoField; // @synthesize ispInfoField=_ispInfoField;
@property(nonatomic) __weak NSButton *assistMeButton; // @synthesize assistMeButton=_assistMeButton;
@property(nonatomic) __weak NSButton *checkStatusButton; // @synthesize checkStatusButton=_checkStatusButton;
@property(nonatomic) __weak NSTextField *internetStatusField; // @synthesize internetStatusField=_internetStatusField;
@property(nonatomic) __weak NSProgressIndicator *internetStatusProgressIndicator; // @synthesize internetStatusProgressIndicator=_internetStatusProgressIndicator;
@property(nonatomic) __weak NSImageView *internetStatusIndicator; // @synthesize internetStatusIndicator=_internetStatusIndicator;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)flushLog;
- (void)logBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)logData:(id)arg1 range:(struct _NSRange)arg2;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (void)_flushLog;
- (void)toggleDetail:(id)arg1;
- (void)showLogs:(id)arg1;
- (void)_logDebuggingInformationDidChange:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowWillClose:(id)arg1;
- (void)assistMeClicked:(id)arg1;
- (void)checkAccounts:(id)arg1;
- (void)_didRefreshStatusForAllAccounts:(id)arg1;
- (void)_willRefreshStatusForAllAccounts:(id)arg1;
- (void)_didCheckInternetConnection:(id)arg1;
- (void)_willCheckInternetConnection:(id)arg1;
- (void)show;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

